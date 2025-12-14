/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196427
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
    var_14 = ((/* implicit */_Bool) (~((-(var_13)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((1030453699U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
        var_16 *= ((/* implicit */signed char) arr_1 [i_0 - 1] [i_0 - 3]);
        var_17 &= ((/* implicit */short) min((-4682385249808540852LL), (((/* implicit */long long int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 13; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_4)) ? (var_7) : (var_7)))));
        var_19 ^= ((/* implicit */unsigned int) ((var_0) == (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 2])))));
    }
    var_20 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) 3LL)), (79974690311728418ULL)));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_21 += ((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-32732)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((-6254227404676025011LL), (-4LL)))) + (min((((/* implicit */unsigned long long int) arr_11 [i_3 + 2] [(short)5] [(short)5])), (var_5))))))));
                                var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_5] [i_3 - 2] [i_3 - 1] [i_3 - 2]))));
                                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) arr_16 [i_2] [i_3] [i_4] [i_5] [i_4]))));
                            }
                        } 
                    } 
                }
                var_25 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_11)) ? (arr_11 [i_2] [i_2] [i_2]) : (((/* implicit */long long int) var_2))))));
            }
        } 
    } 
}
