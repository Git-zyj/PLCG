/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = max(7410895175178189675, (((max(-4079505985862550558, -4079505985862550558)))));
        var_20 = var_8;
        var_21 = (min(var_21, (arr_2 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_22 = (max(21440, ((max((arr_3 [i_3]), (arr_9 [i_3] [i_2] [i_2] [i_0]))))));
                        var_23 = (max((arr_3 [i_0]), (max((max(-9223372036854775805, 3851030374)), (-11109 <= 26025)))));
                        var_24 = (min(var_24, ((max((3 - 3), 6226)))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_25 = ((((((4294967295 >= (arr_12 [i_0]))))) >= (27138 | 11081287245467885102)));
                            var_26 = (((((arr_0 [i_0]) ^ var_17)) + ((max(var_4, var_1)))));
                            arr_13 [i_4] [2] [i_2] [i_2] [i_4] = (((443936922 >> (1554388532 < -1554388549))));
                        }
                        var_27 = (min(var_27, (arr_10 [i_0] [i_1] [i_0])));
                    }
                }
            }
        }
    }
    var_28 = (max(5, (max(1, 4613574844467176669))));
    #pragma endscop
}
