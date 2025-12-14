/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_15;
    var_18 = var_7;
    var_19 = (((3 % 18446744073709551607) ? ((((-8192 + 2147483647) >> (((2942714979 - 57346) - 2942657609))))) : (((((1 ? 58720256 : 1))) - (18446744073709551612 * 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_20 = ((!((((1787466583 ? 1806447215165942986 : 1936369842))))));
                            arr_9 [i_0] [i_1] [i_2] [i_3] = (min(-57340, (!57340)));
                            var_21 = (min(var_21, ((((((113 ? -681561720 : 0))) ? ((0 ? 1 : 3812040519058083667)) : (max(((1 ? 4294967295 : 13)), 4294967295)))))));
                        }
                    }
                }
                var_22 *= (((((((681561713 >> (57352 - 57336)))) ? 8183 : ((22459 ? 75 : 953760444))))) ? 36176 : 4294967295);
                arr_10 [i_0] [i_0] [i_1] &= ((((1 ? ((14554 ? -7 : 18434910342120479197)) : 8087029086051188616)) - ((((3046798307 - 2520410711) ? (!3812040519058083659) : 52)))));
            }
        }
    }
    #pragma endscop
}
