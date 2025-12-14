/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (0 ? 127 : 57);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_15 -= var_10;
                    var_16 += (((max((arr_0 [i_1]), ((var_12 ? 2564715388 : (arr_2 [i_2] [i_1] [i_2])))))) % (((var_0 + (arr_8 [i_2 + 2] [i_1] [i_1] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 = var_6;
                                arr_15 [i_0] = ((131071 * (((((-45 / (arr_6 [1] [i_0] [i_0] [i_0])))) ? (var_10 > -15781) : ((-59 ? var_0 : (arr_8 [i_0] [16] [12] [16])))))));
                            }
                        }
                    }
                }
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_24 [1] [i_7] [5] [i_0] [1] [i_0] [1] = ((((arr_0 [i_0]) / (arr_11 [i_0] [i_6] [i_0]))));
                                arr_25 [i_0] [i_6] [1] [i_0] = (((arr_8 [i_1] [1] [5] [2]) * (min((~54), (((arr_11 [i_0] [i_5 - 2] [i_0]) / 11523506342884673660))))));
                            }
                        }
                    }
                    arr_26 [i_0] [i_0] = ((!((!(~var_9)))));
                    var_18 += ((-6314160045346497986 ? 1364584539 : 1));
                }
                arr_27 [i_0] [i_1] [i_0] = (arr_20 [i_0] [18] [i_1] [i_1]);
                arr_28 [i_0] [i_0] [i_0] = ((~(10764834393434285701 == 2759308228058935600)));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_19 = (max(var_19, (((((((var_6 ? 23 : 1))) ? (arr_18 [i_1] [i_1] [i_1]) : (((max(49586, 176))))))))));
                            arr_36 [i_0] [5] [i_8] [5] = 2222447769370261771;
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_20, var_0));
    var_21 &= var_2;
    var_22 = var_0;
    #pragma endscop
}
