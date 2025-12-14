/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 &= (((arr_1 [4]) != ((-32738 ? var_8 : (arr_1 [0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (arr_10 [i_1] [i_1] [i_2] [i_3] [i_4])));
                                var_15 &= (max((((1 >= (arr_0 [i_4 + 1] [i_4])))), -13758264407628061980));
                                var_16 &= (((max((min(var_4, var_10)), (min(var_8, var_11)))) >> (((((max(4688479666081489635, 2189951161)) << ((((4688479666081489636 << (4688479666081489652 - 4688479666081489630))) - 15752003220739719106)))) - 13835058055282163694))));
                                var_17 = (2168975570 - 32763);
                                arr_13 [i_0] [i_0] = (~(max(var_2, var_12)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((-((var_4 ? var_5 : var_8))));
    #pragma endscop
}
