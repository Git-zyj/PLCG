/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (var_13 + 5536505707440412308);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_7 [i_0] [i_0 - 2] [i_0 + 1] = (min((((((-111 ? var_13 : 5536505707440412304))) ? ((var_0 ? -5536505707440412304 : (arr_4 [i_0]))) : var_13)), -5536505707440412308));
                    arr_8 [i_2 + 1] [i_0] [i_0] = ((-(min(((var_7 ? (arr_0 [i_2] [i_0]) : var_8)), var_7))));
                    arr_9 [i_0] = (min((arr_2 [i_1] [i_1]), (((((4328807740380049713 ? 105 : (arr_4 [i_2]))) + var_2)))));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        arr_12 [i_0] [i_2] [i_0] [i_0] = ((arr_0 [i_3 + 2] [i_3 + 2]) ? (!var_0) : (5536505707440412301 - var_8));
                        arr_13 [i_0] [i_3] [i_0] [i_0 + 1] [i_3] = (arr_2 [i_3] [i_3]);
                        arr_14 [i_2] [i_3] = ((5536505707440412310 / (var_12 != -9)));
                    }
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        arr_17 [i_4] [i_4] [i_4] [i_4] [i_0] [i_0] = ((~((16777215 ? (var_0 & -105) : var_6))));
                        arr_18 [i_1] [i_4] [i_1] = max(((max(var_12, (max(var_1, var_4))))), ((-((var_11 % (arr_3 [i_0]))))));
                    }
                }
                arr_19 [i_0] [i_0 - 2] [i_0] = ((-(min(var_10, (~var_3)))));
            }
        }
    }
    var_15 = (max(77, 5536505707440412322));

    for (int i_5 = 1; i_5 < 8;i_5 += 1) /* same iter space */
    {
        arr_23 [i_5] [i_5] = (-(((var_8 ? var_10 : (arr_21 [i_5])))));
        arr_24 [i_5] = ((arr_0 [i_5] [i_5]) / (((+((var_8 ? (arr_10 [i_5 + 2] [i_5 + 2] [i_5] [i_5] [i_5] [i_5]) : var_0))))));
        arr_25 [i_5] = ((-110 ? 2487513084280994627 : (min(-8066946394781948334, var_6))));
        arr_26 [i_5] = -10707390696995088547;
        arr_27 [i_5] = min((arr_22 [i_5]), ((((arr_21 [i_5 - 1]) ? ((min(var_13, 100))) : var_11))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
    {
        arr_30 [8] = ((!(((var_4 ? var_5 : (arr_5 [i_6]))))));
        arr_31 [i_6] [i_6] = (var_0 ? ((9 ? 8196491527666335548 : 7739353376714463069)) : 5536505707440412322);
    }
    var_16 = (((min(((max(var_1, -18))), (max(7739353376714463069, var_7)))) - (((9 ? -2241819875672595905 : -111)))));
    #pragma endscop
}
