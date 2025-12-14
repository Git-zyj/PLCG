/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_4;

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 2])))) ? (((arr_1 [i_0 + 1]) ^ (arr_1 [i_0 - 1]))) : (((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1])))));
        var_16 = (((((-6068683846202836622 ? -51 : -6068683846202836622))) ? ((((arr_0 [6] [i_0 - 2]) ? ((-(arr_1 [i_0 + 1]))) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0 - 1])))))) : (arr_0 [i_0 - 2] [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_17 = ((((~(arr_14 [i_1] [i_2] [i_2] [i_3] [i_3] [i_4])))) ? ((((-(arr_5 [i_2]))))) : (((arr_9 [i_3] [i_3] [i_3]) ? 6068683846202836616 : (!6068683846202836621))));
                        var_18 &= (((arr_4 [i_1]) ? ((((!((max((arr_15 [1] [1] [i_3] [0]), (arr_7 [20] [i_4])))))))) : (((!15952640628510404970) ? ((((arr_12 [i_1] [i_1]) % (arr_3 [i_3])))) : ((-(arr_5 [i_4])))))));
                    }
                }
            }

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_19 = (min(var_19, (((((((-(arr_9 [i_1] [i_2] [i_5]))))) || (arr_7 [i_1] [i_1]))))));
                var_20 = ((!((((arr_4 [i_1]) ? 96 : (((arr_4 [i_5]) ? (arr_12 [i_1] [i_1]) : (arr_7 [i_2] [i_5]))))))));
            }
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_21 = ((!(arr_26 [i_8] [i_2] [i_8] [i_7] [i_8])));
                            var_22 = (arr_15 [i_1] [i_2] [i_6] [i_7]);
                        }
                    }
                }
                arr_27 [i_1] = ((((((!(((-(arr_14 [i_6] [i_6] [0] [i_2] [i_1] [i_1])))))))) != ((((min(0, 1292518625))) ? (arr_4 [i_1]) : (arr_8 [i_1] [i_6])))));
            }
            var_23 = ((((1393431276 ? 20295 : -6068683846202836622)) > (!1292518633)));
        }
        var_24 = (max(var_24, (((((arr_20 [i_1] [i_1] [i_1] [i_1]) != (arr_20 [i_1] [i_1] [i_1] [i_1])))))));
    }
    #pragma endscop
}
