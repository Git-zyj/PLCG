/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((var_5 ? var_1 : (var_1 * 0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (arr_2 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_19 = ((-((var_10 ? var_1 : (arr_6 [i_0] [i_1] [i_0])))));
                            var_20 = (((((-10798 ? 3351954722 : -13))) ? 693215572335009654 : 246));
                        }
                    }
                }
                arr_10 [i_0] = var_9;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                arr_18 [i_5] [i_5] = (((((((min(4010721268215964933, 8326336585976915061))) ? ((4152641473243120808 ? -3193596866676714540 : 8326336585976915078)) : 7107))) ? 1 : 4152641473243120790));
                var_21 -= (max(var_1, (~var_13)));
            }
        }
    }
    #pragma endscop
}
