/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41137
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
    var_17 = ((/* implicit */unsigned long long int) -3808301780627433186LL);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        var_18 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_1] [i_2]))));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_2 + 2] [i_3 - 1])))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        for (int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            {
                                arr_15 [i_5] [i_4] [i_0] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_13 [i_2 - 2] [i_2 - 1] [i_2 + 3] [i_2 - 1] [i_2 - 2] [i_2 + 3] [i_2 + 1])) ? (((/* implicit */long long int) 283841692U)) : (var_11))) < ((-(4803518470025784230LL)))));
                                arr_16 [9] [i_1] [i_2] [i_0] [i_5] = var_5;
                            }
                        } 
                    } 
                    var_20 ^= var_13;
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((long long int) -3808301780627433165LL));
    var_22 &= ((/* implicit */unsigned short) var_11);
}
