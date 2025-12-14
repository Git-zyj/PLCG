/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = var_6;
    var_17 = 32767;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = min(((((min(var_6, -1671798585694138837))) ? (arr_1 [i_0]) : var_1)), (min(var_10, (((32760 ? 4294967295 : 65535))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, var_7));
                                var_20 |= ((6170530129766669892 ? 1 : 10199682274938605938));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_4;
    #pragma endscop
}
