/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((((arr_0 [i_1 + 2] [i_1]) < (arr_0 [i_1 + 2] [16])))) % ((219 % (arr_0 [i_1 + 3] [i_1])))));
                arr_5 [i_0] [i_0] = ((arr_0 [17] [i_1 + 3]) ? (((-2861596019671748697 ^ 195) ? 37 : (-2861596019671748713 | -5688))) : ((((((min(-2861596019671748697, var_12))) || (((arr_0 [i_0] [i_1 - 2]) < -442926566)))))));
                var_20 = var_18;
                var_21 = var_18;
            }
        }
    }
    var_22 = 11469677316907271344;
    var_23 = (max(((max(15422, 60535))), ((~(max(var_0, var_11))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_24 &= ((((var_2 != (max(-5100914893608624194, 11469677316907271346)))) ? (max(5010748431599941840, 11469677316907271344)) : (((4613023512739013451 ^ (max(var_8, var_5)))))));
                                arr_17 [i_5] [i_3 + 2] [i_4] = 3543366350392459719;
                            }
                        }
                    }
                }
                var_25 &= (min(((var_18 ? (((max(12, var_13)))) : (var_3 % var_8))), (max(((max(var_13, 86))), ((375142471248375167 ? var_16 : var_5))))));
                var_26 = -3919084324058242078;
                arr_18 [i_2] [i_2] [1] = (((max(((((arr_6 [i_2] [i_3]) - (arr_11 [18] [i_3] [i_3] [i_3])))), ((-9146517759015254089 ? -113 : -375142471248375161)))) - (max((((arr_9 [i_2] [i_3 + 3] [i_3]) ? var_6 : var_19)), -7257389170853281111))));
            }
        }
    }
    #pragma endscop
}
