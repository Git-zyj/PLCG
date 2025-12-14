/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192619
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_13);
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) max(((-(8095674319523664035ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [10ULL])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [(_Bool)1]))))))))));
    }
    for (unsigned short i_1 = 4; i_1 < 8; i_1 += 4) 
    {
        var_15 = ((/* implicit */short) max(((unsigned short)0), (((/* implicit */unsigned short) arr_2 [i_1 + 2] [i_1 + 3]))));
        var_16 = ((/* implicit */unsigned int) max((arr_6 [i_1]), (((/* implicit */unsigned long long int) var_4))));
        arr_7 [i_1] = ((/* implicit */short) 8095674319523664035ULL);
        var_17 = min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) arr_5 [i_1]))))) == (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)22)) == (((/* implicit */int) var_10)))))) : (arr_6 [i_1]))));
    }
    var_18 = ((/* implicit */unsigned char) max((((((/* implicit */int) max((var_9), (var_11)))) * (((/* implicit */int) var_2)))), (((/* implicit */int) ((_Bool) (short)24019)))));
    var_19 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)65532))) ? (10351069754185887596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_12)))))));
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))), ((~(((/* implicit */int) var_11))))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            {
                var_21 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_2 - 1])) > (((/* implicit */int) (unsigned char)93))))) > (((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [i_2 + 1])), (max((arr_11 [i_2]), (((/* implicit */unsigned char) arr_9 [i_2])))))))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min((((((/* implicit */int) arr_9 [i_2 - 1])) > (((/* implicit */int) ((signed char) arr_10 [i_3]))))), ((_Bool)1))))));
            }
        } 
    } 
}
