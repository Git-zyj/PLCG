/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235316
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))));
    var_13 = max((((/* implicit */long long int) var_8)), (6LL));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) var_11)) : (1549081928)))))) && (((/* implicit */_Bool) -6LL))));
                arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) 4194303LL))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_14 = ((((/* implicit */_Bool) (signed char)30)) ? (938388788) : (938388772));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_15 = var_2;
                                arr_15 [i_0 + 1] [i_0 + 1] [i_1] [i_3] [i_4] = (unsigned short)13873;
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_3);
}
