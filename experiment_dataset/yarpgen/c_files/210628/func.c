/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210628
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
    var_19 = ((/* implicit */int) var_2);
    var_20 = var_1;
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) min((max((((/* implicit */long long int) var_14)), (-4972134343150152823LL))), (((/* implicit */long long int) max((((/* implicit */short) var_18)), (arr_12 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]))))));
                                var_22 = ((/* implicit */unsigned long long int) (-2147483647 - 1));
                            }
                        } 
                    } 
                    arr_13 [i_2 + 3] [i_0] [i_0] [i_0 - 1] = ((/* implicit */signed char) var_15);
                }
                var_23 = ((/* implicit */int) var_18);
                var_24 = ((/* implicit */short) ((long long int) ((arr_10 [i_0 - 2] [i_0 - 2] [i_1] [(signed char)17]) ? ((-(var_15))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -4972134343150152826LL)) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) var_9))))))));
            }
        } 
    } 
}
