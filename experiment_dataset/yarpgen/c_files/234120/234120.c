/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_1;
    var_18 = (min(var_11, (max((var_16 ^ var_16), (~var_3)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = ((-((((((arr_3 [6] [i_1] [i_0]) - var_10))) ? ((min(var_3, (arr_0 [i_0] [i_0])))) : (arr_5 [i_0] [i_0] [i_2])))));
                    var_20 = (min(var_20, (~4199446160)));
                    var_21 = (((-(arr_4 [i_0] [0] [i_2] [i_2]))));
                    var_22 = (!95521142);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_23 = max(((~(((arr_3 [i_3] [i_1] [i_2]) % var_2)))), (!var_1));
                                var_24 = (!1);
                            }
                        }
                    }
                }
            }
        }
        var_25 = (max((((205 > (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])))), ((max(5139403547970796281, 1269607674)))));
        var_26 += 226;
        var_27 = (((120 > (((!(arr_8 [i_0] [i_0] [i_0] [3])))))) ? (((103 & var_16) ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : ((max(1, 0))))) : ((1661583716 >> ((((-1674120527956838534 ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [7] [i_0]) : var_12)) - 4127330388)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_28 = 0;
        var_29 = ((-(arr_3 [i_5] [i_5] [i_5])));
    }
    #pragma endscop
}
