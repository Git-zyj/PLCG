/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [16] [i_0] = (((max(1887658516, ((6353682518684037480 ? 550314951 : 1))))) ? (max((arr_1 [i_0]), -13)) : 790282857);
                var_14 ^= (min(((((((!(arr_0 [i_1] [i_1])))) != ((min(-102, var_6)))))), 31));
            }
        }
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_15 = (min(-1252646009, ((1 ? (min(-10, -1185809116)) : ((((arr_3 [i_2] [i_2]) && (arr_8 [i_2]))))))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_16 = (min(var_16, -9013070875544561747));

                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_17 -= ((-790282840 ? 1252646009 : (102 - 120)));
                            var_18 = (min(var_18, ((((((-((max((arr_4 [i_2] [i_4]), 1)))))) ? (arr_9 [i_2] [i_2] [i_2]) : (((arr_4 [1] [1]) ? (arr_15 [i_2] [i_3] [i_4] [i_5] [i_6]) : 59)))))));
                            arr_18 [i_4] [i_5] [i_5] [i_5] [i_4] [1] [i_4] = ((((((1 ? -10 : 4140242393)))) != (((!(((450406354250332517 ? 127 : (arr_7 [i_2] [2])))))))));
                            arr_19 [i_2] [i_4] = (((((-(arr_11 [i_4])))) ? (!1) : 6));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_4] [i_3] [i_4 + 1] [i_4 + 1] [i_7] = -1152921504606846976;
                            var_19 = ((~(arr_17 [i_4] [i_3] [i_4] [i_4 - 1] [i_4 + 1])));
                            var_20 = (max(var_20, (arr_9 [i_2] [i_5] [i_3])));
                            var_21 -= ((!(arr_1 [i_2])));
                        }
                        var_22 = ((((((min(127, (arr_13 [i_4])))) ? (((67108864 ? 68 : (arr_2 [i_4 + 1])))) : 4177920)) / -11));
                    }
                }
            }
        }
        var_23 = (min(var_23, (((-((536838144 ? 56782 : -1416412765)))))));
    }
    var_24 -= (min((min(var_4, (min(-289670189342577607, 174)))), -8));
    #pragma endscop
}
