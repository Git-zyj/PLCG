/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2692
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */int) (unsigned char)234)), (((((/* implicit */_Bool) 4850168833735510778ULL)) ? (((/* implicit */int) (unsigned short)20667)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0] [i_2] [i_3]))));
                        var_13 ^= ((/* implicit */unsigned int) -6536684532672435593LL);
                    }
                    var_14 = ((/* implicit */short) arr_8 [i_0] [i_1] [i_2] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)-3);
                                arr_16 [i_0] [i_4] [i_2] [i_4] [i_5] |= ((arr_10 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_4] [i_4] [i_5]))));
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (unsigned short)44869))));
                                arr_17 [i_0] [i_0] [i_0] [i_4] [i_2] [i_5] &= ((/* implicit */unsigned short) (~(2954760756U)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_18 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))));
    }
    var_16 += ((/* implicit */unsigned long long int) var_0);
}
