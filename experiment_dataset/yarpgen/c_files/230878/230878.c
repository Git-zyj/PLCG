/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (!var_17);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = (min(((0 ? (min(1, 4294967275)) : (((min(var_1, (arr_0 [9]))))))), var_8));
        arr_2 [i_0] [8] = var_6;
        var_20 = (((((~9693) + 2147483647)) << (((((max(var_11, (arr_1 [i_0] [i_0]))))) - 66))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {

                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            var_21 &= (max(((min(4294967291, 4294967295))), 1));
                            var_22 = ((~(arr_5 [i_0] [i_4] [8] [i_3])));
                            var_23 = (max(var_23, ((min((max((~127), var_17)), (~var_12))))));
                            var_24 = min(842085735831415469, (~504713264));
                            var_25 -= ((((((((~(arr_6 [i_4 - 4] [i_4 - 4])))) ? (max(63, 5)) : var_14))) ? (~var_5) : ((2706328785 ? (734895164 == 20) : (712918230 == var_3)))));
                        }
                        var_26 = min((((!(min(1, 1))))), (((((var_13 ? (arr_4 [i_0] [i_0]) : 0))) ? (((min((arr_0 [i_1]), var_6)))) : (max(463857423, 9)))));
                        var_27 = (max((~var_10), (((-35 + 99) ? ((min((arr_10 [i_0] [i_3] [i_0] [i_0]), var_8))) : ((145 ? var_7 : var_12))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
