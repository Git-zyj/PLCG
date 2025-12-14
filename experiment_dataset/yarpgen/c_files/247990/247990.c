/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_1 + 2] [i_0] [i_0] = 18446744073709551615;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_1 - 2] [i_0] [i_3] = (((arr_6 [i_1 + 2] [i_1] [i_1 + 2] [i_1 - 1]) ? (((((var_0 ? 28 : -6860813612852171483)) * ((max(var_11, (arr_6 [i_0] [i_1] [i_2] [15]))))))) : (min(((-(arr_10 [i_2] [i_1 + 1] [i_1] [i_0] [i_0]))), (((var_11 | (arr_6 [i_0] [i_1] [1] [i_3]))))))));
                        arr_12 [i_0] [i_0] = (min((((arr_10 [17] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_0]) ? (arr_10 [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_0]) : (arr_10 [i_0] [i_1 - 2] [i_1] [i_1 + 2] [i_0]))), ((var_10 ? (arr_10 [i_1] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_0]) : -6860813612852171466))));
                        arr_13 [i_0] [i_0] = -6860813612852171466;
                        arr_14 [i_0] [11] [i_2] [i_3] [i_3] = (((arr_6 [i_0] [i_1 - 1] [i_2] [i_3]) ? ((((((6860813612852171474 ? -6860813612852171466 : var_5))) ? 0 : (arr_7 [i_1] [i_1 - 2] [17])))) : ((22 ? -6860813612852171449 : (arr_10 [i_1 - 1] [i_1 - 2] [i_1 + 2] [i_1] [i_0])))));
                    }
                }
            }
        }
        var_12 = (min((min((arr_9 [i_0]), var_7)), (max((arr_0 [5]), (max(1, 5651127841746241123))))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_25 [i_6] [i_6] [i_0] [i_4 - 1] [1] = ((-((1 ? (1 != 172578178) : var_0))));
                        var_13 = (arr_6 [i_0] [i_4] [i_5 + 1] [i_6]);
                    }
                }
            }
        }
        arr_26 [i_0] = ((((~(arr_2 [i_0]))) * (172578178 || 4122389120)));
    }
    var_14 = ((var_7 ? (!4051) : 1));
    #pragma endscop
}
