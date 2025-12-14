/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 8191;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_11 = ((((((arr_2 [i_0]) ? ((18014398509480960 ? -753501692318714975 : 18014398509480954)) : (arr_6 [i_1] [i_1])))) ? ((max(((-(arr_5 [i_0] [i_1] [i_1]))), (((!(arr_0 [i_0] [i_1]))))))) : ((9223372036854775807 ? (arr_3 [i_0] [i_1] [i_1]) : ((((arr_5 [i_0] [i_0] [i_1]) * var_9)))))));
            var_12 -= (!13);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_13 = ((((0 ? 18014398509480960 : 12901)) != (((arr_6 [i_1] [i_1]) ? (((arr_9 [i_1] [i_2] [i_3]) & (arr_9 [i_1] [i_2] [i_3]))) : var_1))));
                        var_14 -= 12;
                    }
                }
            }
            var_15 = ((arr_6 [i_1] [i_1]) ? (((((845085514 ? 18014398509480960 : (arr_1 [5] [i_1])))) ? (arr_0 [i_1] [i_0]) : (max(1, 8068118122638062570)))) : ((((18014398509480960 ? 15 : 47)))));
            var_16 = ((-(((max(27382, 0)) % var_0))));
        }
        arr_12 [i_0] [i_0] = (max((arr_3 [i_0] [i_0] [i_0]), ((((arr_2 [i_0]) != (((arr_0 [i_0] [i_0]) ? 580258899 : (arr_1 [0] [2]))))))));
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        var_17 = (max(var_17, (min((((12332 >= 122) ? (max(6699125525410837575, (arr_13 [13]))) : (arr_13 [i_4 - 1]))), (((!(arr_13 [i_4]))))))));
        var_18 = (max(var_18, (((!(~61007))))));
    }
    #pragma endscop
}
