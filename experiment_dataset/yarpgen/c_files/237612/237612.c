/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((4130741144 ? 9 : 1073741823));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    var_13 = (min(var_13, ((((max((((arr_0 [i_0]) ? (arr_3 [i_0] [i_1] [i_2]) : (arr_2 [i_1]))), -68))) ? (((arr_5 [i_2] [1] [20]) ? ((min((arr_6 [22]), -18377))) : (arr_5 [i_0 + 1] [i_0 + 1] [i_0]))) : (((arr_1 [i_1] [i_2 - 1]) ? 62 : 67))))));
                    var_14 = ((246 ? (arr_0 [i_0]) : -9));
                    var_15 &= (arr_6 [1]);
                }
                for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_16 |= ((((max((arr_13 [i_0 - 1] [i_1] [i_3 - 1] [i_4 + 3] [i_5]), 5867425426969266107))) ? (min((((0 ? (arr_1 [i_3] [i_1]) : 5872412426848207026))), (arr_3 [i_0 - 2] [i_0 - 1] [i_4 + 3]))) : (min(((9 ? (arr_9 [i_0] [i_1] [i_3] [i_4]) : (arr_14 [19] [i_4 + 4] [i_5]))), (((-54 ? var_9 : (arr_7 [i_5] [i_4 + 4] [i_0]))))))));
                                var_17 = (arr_11 [i_1] [i_3]);
                                var_18 = ((((max((arr_11 [i_1] [i_1]), (arr_5 [i_0 + 1] [i_1] [i_4 + 4])))) ? ((((arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1]) ? (arr_5 [i_1] [i_3 + 2] [i_5]) : (arr_5 [i_5] [i_3 + 1] [i_0 + 1])))) : (((arr_14 [i_5] [21] [i_0]) ? (-5872412426848207020 * var_11) : 5872412426848207041))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((((((835911163199004656 ? (arr_1 [i_7 - 1] [12]) : var_2)))) ? (min((arr_3 [i_0 - 1] [i_6] [i_7]), ((31 ? (arr_3 [i_3] [i_1] [i_0 - 2]) : var_6)))) : (((((5872412426848207019 ? 58 : 5872412426848207019))) ? ((max((arr_11 [10] [i_6]), (arr_19 [i_0] [4])))) : (arr_15 [i_0 - 1] [i_0 - 1] [4] [i_0 + 1] [i_6] [i_6 - 2]))))))));
                                var_20 &= (((arr_3 [i_7 - 1] [i_0 + 1] [i_3 - 1]) ? (((arr_11 [2] [i_6 - 1]) - (arr_14 [i_0 - 2] [i_0 - 1] [i_0 - 1]))) : (arr_17 [i_3] [i_6 + 2] [i_3] [i_1] [i_0])));
                                var_21 = (arr_13 [i_0] [i_0] [i_3] [i_0 + 1] [i_0 + 1]);
                            }
                        }
                    }
                }
                var_22 = (((arr_18 [i_0] [i_0] [16] [i_0 + 1]) ? (((arr_15 [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 2]) ? 5872412426848207041 : 835911163199004656)) : ((((arr_15 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1]) ? (arr_18 [i_0] [i_0] [i_0 + 1] [i_0 + 1]) : (arr_11 [i_1] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
