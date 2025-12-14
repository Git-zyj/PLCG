/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (((max(var_10, (var_5 <= -27260)))) ? -27260 : (((22480 >= 53) ? (61 && 1920) : -68)));
    var_19 = (max(((var_7 << (((max(var_13, 448897489)) - 448897489)))), (((((~30195) + 2147483647)) << var_1))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((((var_0 && (arr_3 [8] [i_1]))) ? (arr_3 [8] [8]) : (arr_3 [12] [12]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_1] [i_1] = ((((min((1 - 12), var_0))) ? (arr_5 [i_1] [i_1]) : var_10));
                            arr_10 [i_1] = ((var_12 ^ (((arr_7 [i_0] [i_0 - 2] [i_1] [i_0]) | var_3))));
                            var_21 = (min(var_21, ((((((arr_5 [i_0] [i_0]) >= (53 | -53))) ? (max((((6696 ? var_17 : (arr_2 [i_2])))), (arr_4 [i_3]))) : (-30 < 1))))));
                            var_22 *= (((min(((var_6 ^ (arr_6 [i_3] [i_3]))), ((max(var_2, 14))))) ^ var_0));
                            var_23 = ((((arr_7 [i_3] [i_3] [i_1] [i_3]) ^ -6665870990589843265)));
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, ((max(((((~var_9) > ((3539767459 ? var_5 : 36))))), ((~(min(var_6, 26354)))))))));
    #pragma endscop
}
