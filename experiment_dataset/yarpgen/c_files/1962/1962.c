/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((16068247630519091004 ? ((1310443924 ? -9149201009176854745 : -9149201009176854745)) : 98)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (((((((9149201009176854745 ? 9149201009176854745 : 18446744073709551615)) ^ -97))) ? ((241 ? ((842643929 ? 92 : -9149201009176854745)) : 33885)) : ((((((64818 ? 164 : 0))) ? ((0 ? -116 : 64816)) : -94)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = 734;
                                var_19 = 5617;
                                var_20 = 0;
                                var_21 = ((55757 ? ((0 << ((((1 ? -89 : -1)) + 91)))) : 16474));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
