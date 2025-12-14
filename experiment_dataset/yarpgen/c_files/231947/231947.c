/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_14 = ((((-6936 ? -108 : ((max(-108, (arr_1 [i_0])))))) | ((~(~122)))));
                            var_15 = ((107 ? -6936 : 73));
                            arr_8 [i_3] [i_2] [i_2] [i_0] |= ((~(~-122)));
                            arr_9 [i_0] [i_1] = ((-1561689439 ? (((!(~var_6)))) : (min((min(393671305, 108)), (arr_2 [i_0])))));
                            arr_10 [i_0] = ((((((arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) * (arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))) ? 159 : var_10));
                        }
                    }
                }
                var_16 = ((678365813 ? 5707 : ((min((arr_1 [i_0]), (min(-108, 59829)))))));
                var_17 = (max(((+((-108 ? (arr_0 [i_0]) : (arr_5 [i_0] [i_0] [4] [11]))))), (!var_4)));
            }
        }
    }
    var_18 = var_10;
    var_19 = (((((-(var_10 - var_6)))) ? var_3 : (-4 + 1733594276)));
    var_20 = -393671307;
    var_21 = var_13;
    #pragma endscop
}
