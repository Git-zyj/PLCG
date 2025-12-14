/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 -= 127;
                var_14 = (i_0 % 2 == 0) ? (((((min((~-33), ((min(33758, (arr_0 [10]))))))) ? (((((((arr_1 [i_0]) && var_6))) >> (((arr_2 [i_0]) - 29988))))) : (arr_4 [i_0])))) : (((((min((~-33), ((min(33758, (arr_0 [10]))))))) ? (((((((arr_1 [i_0]) && var_6))) >> (((((arr_2 [i_0]) - 29988)) + 18983))))) : (arr_4 [i_0]))));
                var_15 |= (22912 > 16);

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_16 = ((29549 ? ((((arr_5 [i_0]) < 42624))) : 1768223258));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 += (((((46 ? -26296 : 134217727))) ? -3154803457743907357 : ((min((arr_2 [i_2]), (arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_4 - 1]))))));
                                var_18 = (min(var_18, ((min(((-(arr_8 [i_4 - 2] [i_0 + 1]))), 22930)))));
                            }
                        }
                    }
                    var_19 = (arr_8 [i_0 + 1] [i_0 + 1]);
                    var_20 -= ((-(arr_3 [i_1] [i_1] [i_1])));
                    var_21 = arr_9 [i_0] [11] [i_0] [i_1] [12] [i_2];
                }
            }
        }
    }
    var_22 = ((((0 ? (var_6 != 65535) : 46)) == 1252410261));
    var_23 = var_7;
    #pragma endscop
}
