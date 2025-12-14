/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((((max(247, (-2147483647 - 1))) ^ (2710378627 <= 2710378627))) & ((max((-2147483641 >= 156), (min(57, 24493))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, 3));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_3 - 3] [i_3 + 1] [i_3 - 3] = 0;
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] [i_0] = (min((((-29194 != 1701678030879512095) - 0)), 8388544));
                            }
                        }
                    }
                    var_17 = 6730982885433778635;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_17 [i_5] = (((((((3614243246 ^ (-2147483647 - 1)))) * (min(7881299347898368, 7881299347898368)))) >= ((min((min(16711680, -120)), 133)))));
        arr_18 [1] = 0;
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_6] [i_5] &= ((min((143 << 10), ((18438862774361653247 + (-2147483647 - 1))))) > (min((3812264172600372678 ^ 241), (124 + 6))));
                    var_18 = -44;
                }
            }
        }
        arr_24 [i_5] = (((((((max(-51, 71)))) ^ (max((-2147483647 - 1), 1584588668)))) >= 2147483647));
    }
    var_19 = (max(var_19, 10710487810211039655));
    var_20 = (max(var_20, ((min(((max((2412017551 && 232), (5 && -2147483647)))), ((127 % (min(2747837355, 88)))))))));
    #pragma endscop
}
