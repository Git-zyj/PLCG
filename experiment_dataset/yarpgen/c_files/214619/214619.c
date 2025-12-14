/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = ((((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))) ? (min(((5870836780607629253 ? (arr_0 [i_0]) : var_16)), -23131)) : ((((((38096 ? var_16 : var_0))) ? 651725798 : 38096)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_1] [i_2] = 38095;
                        var_18 = var_14;

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_19 -= (min(34, (arr_2 [i_0] [i_0])));
                            arr_13 [i_0] [i_1] [i_1] = (max(((((((arr_8 [i_0] [i_1] [i_1] [i_4]) ? 15809 : 2147483647))) ? var_11 : 27446)), var_15));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_20 &= ((3116292023 ? ((((!(arr_12 [i_5] [i_1]))))) : 3439265718));
                            arr_17 [i_1] [i_1] = (min(((max(((3362139055 * (arr_6 [i_0] [i_0] [i_0]))), ((((arr_9 [i_1]) ? 27446 : (arr_16 [i_1] [i_2] [i_3] [i_5]))))))), (min(((9138241336304160993 ? 7 : 9529362383306099967)), 770200631))));
                            var_21 = (max(var_21, -770200631));
                            arr_18 [i_0] [i_3] [i_2] [i_3] &= ((9068 ? -32763 : (min(((3002339761 ? 38095 : (arr_8 [i_0] [i_1] [i_2] [i_5]))), 38096))));
                        }
                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            var_22 = ((!((((arr_14 [i_0] [i_0]) | (arr_14 [i_3] [i_0]))))));
                            var_23 = 51194878;
                        }
                    }
                }
            }
        }
        arr_21 [i_0] = var_0;
    }
    var_24 = max((((!((max(9416868794704060023, var_10)))))), (max((((var_1 ? var_6 : 59))), (min(var_14, 38096)))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                arr_26 [i_8] = (min(((((max(332994952, var_11))) ? (min(-770200631, (arr_22 [i_8]))) : (arr_24 [i_8]))), 9));
                var_25 = (((((((max(var_14, (arr_25 [i_8])))) ? ((var_1 ? 4294967295 : var_13)) : (min((arr_23 [i_8]), var_0))))) < (min((((59 ? 491520 : 59))), ((1 ? 12138218267727873735 : -1))))));
            }
        }
    }
    #pragma endscop
}
