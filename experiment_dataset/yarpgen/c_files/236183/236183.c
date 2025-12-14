/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 += 274008525;

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_15 = (!248);
                        arr_12 [i_1] [i_3] = 1152921496016912384;

                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            var_16 += ((17293822577692639228 ? (-9223372036854775807 - 1) : 1152921496016912387));
                            arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] &= (((((100 ? var_3 : (arr_4 [i_0] [i_0] [20])))) ? var_8 : (arr_11 [i_3 - 2] [i_3 - 1] [i_3] [i_3])));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_17 = (max(var_17, ((((arr_14 [14] [14] [i_2] [i_3 - 2] [i_5]) - 6144)))));
                            var_18 = (((arr_1 [i_3 - 1]) ? (arr_1 [i_3 - 2]) : (arr_1 [i_3 - 1])));
                        }
                        var_19 = (1152921496016912388 & 158);
                    }
                    var_20 = (min((max(2047, 59392)), 6155));
                    var_21 |= ((!(((1 ? 12085034777613634638 : 17293822577692639252)))));
                }
                var_22 = ((14201516364429814701 ? -1666371140 : 1152921496016912384));
            }
        }
    }
    var_23 = ((!((!(!26581)))));
    #pragma endscop
}
