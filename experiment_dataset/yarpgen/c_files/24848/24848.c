/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_17 = ((((((((arr_0 [i_0]) ? var_3 : (arr_1 [i_0]))) < 10759))) << (27862 - 27852)));
        arr_2 [i_0] = var_14;
        var_18 += ((!(((~(((arr_0 [i_0]) >> (((arr_0 [i_0]) - 773981092)))))))));
        arr_3 [i_0] = var_11;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_19 = (arr_5 [i_1]);
        var_20 = (((min((arr_0 [i_1]), (arr_5 [10])))));
        arr_6 [i_1] = (max((((!(!0)))), (((((-56 ? var_14 : (arr_4 [i_1] [i_1])))) ? ((2147483647 >> (-2147483645 + 2147483646))) : (arr_1 [i_1])))));
        var_21 = (max((arr_0 [i_1]), -23394));
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        arr_10 [i_2] = 10759;
        var_22 = (max(var_22, (((((((max((arr_7 [i_2]), var_3))) || var_3)) ? (arr_8 [14]) : (arr_1 [i_2]))))));
        arr_11 [i_2] [i_2] = -2147483645;
    }

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_23 += (((((var_10 > (arr_8 [0])))) != (((!(!2147483644))))));
        var_24 = var_0;
        var_25 = ((((max((arr_12 [i_3]), var_14))) ? 2598410171444137039 : (((-(arr_8 [0]))))));
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        var_26 += var_16;
        arr_19 [i_4] = ((((~((min(11, 1))))) ^ (!-7)));
        var_27 = (arr_16 [i_4 - 1]);

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_28 = (((-(23382 + var_6))));
            arr_22 [i_4] [i_5] [i_4] = 1;
        }
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            var_29 -= (arr_18 [0]);
            var_30 = (arr_23 [i_6] [i_6 - 1] [i_4 + 1]);
            var_31 -= (-(arr_24 [2] [i_6] [i_6]));
        }
        for (int i_7 = 4; i_7 < 22;i_7 += 1)
        {
            var_32 = 11;
            var_33 = (max(var_12, (((arr_17 [i_4]) - var_15))));
            arr_30 [i_4] = (-83 & 6337172806901195040);
        }
    }
    var_34 = (min((((((42154 ? 2147483623 : 2485470950297479139)) > (23394 & var_3)))), (((((var_16 ? var_7 : var_5))) ? (((var_2 ? 2147483622 : var_12))) : var_4))));
    #pragma endscop
}
