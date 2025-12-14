/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198916
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] = (~(((long long int) 18446744073709551615ULL)));
                                var_12 = var_6;
                                var_13 = ((unsigned int) ((short) 368095013));
                                arr_14 [i_0] [i_3 - 1] [(short)5] [i_3] [i_3] = ((/* implicit */short) 4ULL);
                                var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                arr_20 [i_6] [i_5] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned int) 0ULL);
                                arr_21 [i_6] [i_1] [i_6] [i_5 + 1] [i_6] = ((/* implicit */short) ((unsigned short) var_8));
                                var_15 = ((/* implicit */int) 18446744073709551615ULL);
                                var_16 = ((/* implicit */_Bool) min((var_16), ((!(((/* implicit */_Bool) 11ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))));
    var_18 = ((/* implicit */signed char) ((unsigned long long int) var_11));
    var_19 |= ((/* implicit */signed char) var_1);
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)8)) || (((/* implicit */_Bool) (short)28767))));
}
