/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 15;
    var_13 += (((((6202394780719754887 ? ((6202394780719754887 ? -10 : -4245684443063530745)) : 15))) ? (((((32767 ? 10 : 6202394780719754901))) ? ((1 ? 6202394780719754887 : 12244349292989796728)) : 13)) : ((((((31 ? 0 : 0))) ? 178 : ((40427 ? -32745 : -24029)))))));
    var_14 = 9223372036854775807;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = 13;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 *= 7751;
                                var_17 = ((((((((-32743 ? -933310512 : -6))) ? ((236 ? 1 : 20)) : ((1329117083788982419 ? 219 : 65517))))) ? 72 : ((-16224 ? -27 : (((77 ? 127 : 1)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
