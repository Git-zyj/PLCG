/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_2 - 2] = -7100921251031027418;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_20 = ((107 <= (((arr_5 [i_0] [i_2 + 1] [i_4]) >> (-2098718903 + 2098718921)))));
                                var_21 = (min(var_21, ((min(-2098718903, -1871785523309235131)))));
                            }
                        }
                    }
                    var_22 = (max((((-2098718903 ? 2002505975 : -917263621903957577))), ((~(arr_8 [i_1] [i_2 - 1] [i_2 - 1] [i_2 + 3])))));
                    var_23 += (((min((arr_5 [i_2 + 2] [i_2 + 2] [i_2 - 1]), 10256480335159975420)) << (((((arr_0 [12]) ? ((-(arr_5 [i_0] [i_1] [i_2 + 3]))) : (~var_7))) + 7844))));
                }
            }
        }
    }
    var_24 = ((var_0 * ((~(~3124365274)))));
    #pragma endscop
}
