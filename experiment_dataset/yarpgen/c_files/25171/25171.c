/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((4294965248 ? -4294965251 : (((!6250) ? var_7 : 4572))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((min((!var_6), 7202265375232622289)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_2] [i_0] [i_0] = 9782159899200208360;
                            arr_14 [i_0] [i_0] [i_2] [i_3] = (((3991589116309976104 ? (~8796093021184) : 11283162978939196271)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_20 [i_1] [i_4] [i_4] [i_1] [i_4] [i_0] = var_10;
                            arr_21 [i_4] = ((((!(!125829120))) ? (((19 ? 1 : -4569))) : ((~((4572 ? 225 : 1326214000))))));
                            arr_22 [i_4] [18] [i_5] = (max(-118, -4294965262));
                            arr_23 [i_4] [i_4] [i_1] [i_4] = (max((((!(((1 ? 229562400 : 108)))))), (min(-4569, 11470))));
                            var_14 = ((!(10010147110650369133 * -1006853320)));
                        }
                    }
                }
                arr_24 [i_0] = var_10;
            }
        }
    }
    #pragma endscop
}
