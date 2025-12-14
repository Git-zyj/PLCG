/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (202 + 53);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 += 89;
                    var_19 = (((arr_2 [i_0]) > ((((min(196, 71))) ? (arr_5 [i_1 + 2]) : (arr_3 [i_1])))));
                    var_20 = (((((((min(4040, 138327470052227165))) ? 1904854971 : (((min(131, 1))))))) ? (((min(0, 54)))) : (~3416570621)));
                    arr_7 [i_0] [13] [13] [i_0] = 2080696630906511736;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, (arr_2 [i_0])));
                                var_22 = (!((min((arr_10 [i_0] [i_0]), ((65520 ? 16849 : 245))))));
                                var_23 = (~163);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
