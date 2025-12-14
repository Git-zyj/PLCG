/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49058
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
    var_16 ^= var_13;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_13 [i_3] [i_1] [i_0] = (!(((/* implicit */_Bool) (unsigned short)50725)));
                        arr_14 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_3 [i_3] [i_2] [i_0])) > ((+(((/* implicit */int) var_12))))));
                        arr_15 [i_3] [i_2] [i_0] = ((/* implicit */long long int) var_6);
                    }
                    var_17 = ((/* implicit */short) var_0);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((3275786454711578385LL) >> (((/* implicit */int) (_Bool)0)))))));
                        var_19 ^= ((/* implicit */unsigned short) var_15);
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_4] [5U] [i_1] [i_0])) + (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_2]))));
                    }
                    arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) 3275786454711578385LL)))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_5] [i_2] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) var_15)));
                        arr_22 [i_1] [i_1] &= ((/* implicit */unsigned int) (_Bool)1);
                        arr_23 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_5] [i_5])) : (((/* implicit */int) arr_2 [i_0] [i_1]))));
                    }
                }
                arr_24 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */int) min((((/* implicit */short) arr_1 [i_1])), ((short)(-32767 - 1))))) | (((/* implicit */int) arr_0 [i_0])))) == (((/* implicit */int) var_10))));
                arr_25 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 1974993132439816729LL)) & (2619299704601543094ULL)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) (_Bool)1))));
    var_22 = ((/* implicit */signed char) max(((~(((/* implicit */int) var_13)))), (var_5)));
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_0))));
}
