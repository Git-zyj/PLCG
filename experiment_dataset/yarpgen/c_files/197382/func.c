/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197382
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */short) (_Bool)1)), (var_3))), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (short)20702)))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))));
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned int) 2147483647)), (var_5)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [(signed char)0]))))) ? (min((1785356728958482157ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((((/* implicit */_Bool) 2284869650U)) ? (16661387344751069465ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-98)))))))) ? (max((((/* implicit */int) min((var_3), (var_8)))), (((((/* implicit */_Bool) 984201353)) ? (((/* implicit */int) (short)-32750)) : (((/* implicit */int) (_Bool)1)))))) : ((-((-(((/* implicit */int) arr_0 [i_0])))))))))));
                var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)1)), (max((((/* implicit */int) (_Bool)1)), (var_1)))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : ((~(((/* implicit */int) arr_1 [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 1; i_2 < 17; i_2 += 3) 
    {
        var_15 = (short)16345;
        var_16 -= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (var_5)))), (max((16661387344751069458ULL), (arr_5 [i_2]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    }
}
