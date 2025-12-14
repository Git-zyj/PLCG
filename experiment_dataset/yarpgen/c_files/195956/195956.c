/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_10 = ((65535 ? -9159057443856897076 : 65535));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 += max(var_9, (max((max(18446744073709551615, -16)), ((var_5 << (-9159057443856897059 + 9159057443856897091))))));
                                var_12 = -11489;
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = 11489;
    #pragma endscop
}
