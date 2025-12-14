/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_3, (-var_1 ^ var_6)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = -96;
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] = (arr_1 [i_0] [i_0]);
                                arr_13 [i_3] [i_3] = (((((0 & ((min(var_8, (arr_3 [10]))))))) ? (((((arr_9 [i_3]) ? 6321618368724365522 : (arr_9 [i_3]))))) : 84));
                            }
                        }
                    }
                    var_21 = (~-83);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((!((((arr_6 [i_0] [i_0]) ? -76 : (arr_6 [i_0] [i_6])))))))));
                                var_23 = 985162418487296;
                                var_24 = (min(var_24, ((max(0, ((17976454081100112459 ? 79 : 28)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
