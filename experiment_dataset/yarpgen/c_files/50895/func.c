/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50895
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
    var_12 = ((/* implicit */short) (unsigned short)817);
    var_13 = ((/* implicit */short) 13839495212917682697ULL);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0])) == (3788006396648418784LL)))), ((+(((/* implicit */int) (_Bool)1))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)21793)));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        for (unsigned short i_2 = 3; i_2 < 15; i_2 += 3) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 - 2]))) : (-3788006396648418784LL)))) ? (((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_2 - 2] [i_2 + 3])) ? (((/* implicit */int) arr_9 [i_2 + 3] [i_2 + 3] [i_2 + 1])) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_5 [i_2 - 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_9 [i_2 + 3] [i_2 + 3] [i_2 + 3]))))));
                var_16 = ((/* implicit */int) ((unsigned char) ((signed char) var_0)));
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(max((var_0), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_1]))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-17676)) : (((/* implicit */int) var_4))))) < (arr_3 [i_1])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) (short)-19047))) > (var_10)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) max((max((var_10), (((unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) var_11))));
}
