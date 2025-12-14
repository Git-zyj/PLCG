/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((-((-((~(arr_4 [i_0] [i_0] [i_0])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_21 = (-(--2215701183));
                                arr_15 [i_0] [i_0] = ((-((((((arr_10 [i_4] [20] [8] [i_4]) ? var_16 : var_3))) ? (arr_0 [i_0]) : (((arr_2 [i_4]) ? 3 : 13355974423078845176))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] &= ((~(((!((((arr_10 [i_0] [i_1] [i_1] [i_4]) ? (arr_9 [i_0] [i_3] [i_3]) : 110032900))))))));
                            }
                        }
                    }
                }
                arr_17 [i_0] [6] = ((-((((((arr_12 [5] [5] [5] [5] [23]) ? (arr_0 [i_0]) : var_5))) ? (!252) : ((4616565175271778545 ? (arr_2 [8]) : var_0))))));
                arr_18 [i_0] [i_0] [i_0] = (((((((var_11 ? 255 : 28))) ? (((arr_3 [i_0]) ? (arr_8 [i_0] [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_1]))) : (~1966080)))) ? (((~((~(arr_13 [i_0] [2] [2] [i_0] [2])))))) : ((~(((arr_0 [i_0]) ? 1 : (arr_10 [i_0] [i_0] [7] [i_0]))))));
            }
        }
    }
    var_22 = (((+-3577264954) ? ((((718096602 ? 0 : 254)))) : (((1 ? 1506929001678486336 : 970755156)))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                {
                    var_23 = ((((!(!957397034))) ? 343457800 : 3));
                    var_24 = ((223 ? 2498445212910857035 : 0));
                }
            }
        }
    }
    var_25 = ((-(!-0)));
    #pragma endscop
}
