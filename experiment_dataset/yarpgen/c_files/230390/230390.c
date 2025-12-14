/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_3 ? 14377891193127356873 : 30643))) ? var_0 : 3));
    var_17 = ((((min((~-11), ((max(22, var_11)))))) ? ((~((4 ? 1 : var_2)))) : (((3 << (~-22))))));
    var_18 &= (min((!var_7), var_10));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((max((arr_2 [i_0] [i_1 + 3]), ((min((59272 == -22), ((!(arr_6 [i_0] [i_1 + 3])))))))))));
                    arr_8 [i_2] [i_1] = (~var_4);
                }
            }
        }
        var_20 = ((!(((+(((arr_5 [4] [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : var_11)))))));

        for (int i_3 = 4; i_3 < 18;i_3 += 1)
        {
            arr_12 [i_3] [i_3] = ((min((((!(arr_0 [i_3])))), (arr_5 [i_3 + 4] [i_3 - 2] [i_3]))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    {
                        var_21 = ((-11 ? (((arr_16 [i_4] [i_4] [i_5 - 3]) ? 4 : (arr_2 [i_4 - 1] [i_5 + 4]))) : (min((arr_5 [14] [19] [2]), (1 + 23)))));

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_22 += ((-22 ? (((arr_17 [17] [i_4 + 1] [i_4 - 1] [4] [1] [i_4 - 1]) | (arr_17 [16] [i_4 + 1] [i_4 - 1] [i_4] [i_4] [i_4 + 1]))) : var_3));
                            var_23 *= ((((min(-6392, (arr_6 [i_6] [i_5 - 2])))) / ((var_1 << (((arr_15 [i_4] [17]) - 154))))));
                        }
                    }
                }
            }
            var_24 = (((((min(0, var_13)) & -24720))) ? 11043714861848705339 : (((min(-22, -6391)))));
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_25 [i_0] [9] = max((((!((min(-14, (arr_22 [i_7] [i_0] [1] [i_0] [i_0]))))))), (((arr_7 [i_0] [i_7]) << (var_7 - 5631))));
            var_25 &= (min(-11, ((((max((arr_24 [11] [i_7] [1]), var_10))) ? (-6422 <= 6391) : (7796 % -105)))));
        }
        var_26 ^= ((((((((-20 ? (arr_19 [i_0] [7] [i_0] [0] [i_0] [0]) : 0))) ? (14327 > var_1) : (((arr_23 [i_0]) | -7570))))) || (((-7 ? (arr_19 [i_0] [i_0] [i_0] [i_0] [18] [i_0]) : 0)))));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
    {
        var_27 = (max(var_27, (((!((max(127, (arr_13 [14] [i_8] [i_8])))))))));
        var_28 = (arr_4 [i_8] [i_8]);
    }
    #pragma endscop
}
