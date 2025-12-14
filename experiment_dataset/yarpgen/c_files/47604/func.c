/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47604
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
    var_18 += ((/* implicit */unsigned char) var_15);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((((+(((/* implicit */int) (short)-20247)))) + (2147483647))) << (((490369701U) - (490369701U)))))) ? (((/* implicit */unsigned long long int) (-(max((-446825229), (((/* implicit */int) (short)32754))))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 1])) ? (arr_0 [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) 2147483644))))));
                                var_20 = ((/* implicit */unsigned char) 837308244);
                                arr_14 [i_0] [(unsigned short)13] [i_0] [i_3 + 1] [(short)18] = ((/* implicit */long long int) arr_0 [i_2] [i_2]);
                            }
                        } 
                    } 
                } 
                var_21 = var_11;
            }
        } 
    } 
    var_22 |= ((/* implicit */int) var_14);
    var_23 = ((/* implicit */unsigned char) (-((+(13126196664651807614ULL)))));
    var_24 = ((/* implicit */int) (short)1536);
}
