/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-127 - 1) ? (((21363 << (255 - 243)))) : (~var_6)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_13 = (--35650);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = (arr_5 [i_0] [i_1] [i_2]);
                                arr_11 [i_2] = (((min(((var_4 ? 35677 : (arr_8 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1]))), (29886 * 116))) % (((var_6 ? (35696 | 32767) : ((max(29866, 35692))))))));
                            }
                        }
                    }
                    arr_12 [i_2] [i_2] [i_2] [i_2 + 1] = (((((min((!var_3), -29819)) + 2147483647)) << ((((arr_8 [i_0] [i_0 + 3] [i_0 + 1] [i_0 + 2] [i_2 + 1] [i_0 + 2]) < (arr_8 [1] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_2 - 1] [1]))))));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    var_15 = (~(((arr_4 [i_0] [i_0 + 1] [i_0 + 3] [i_0 + 1]) / var_0)));
                    arr_15 [i_0] = (min(var_8, ((min(0, var_9)))));
                    var_16 = (-32767 - 1);

                    for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_17 = (max(((~(arr_0 [i_0 + 1]))), (((arr_0 [i_0]) / (arr_0 [i_0 + 1])))));
                        arr_18 [i_0] [i_1] [i_6] = (((min(((max(var_7, (arr_7 [14] [i_1] [i_1] [i_1])))), var_4))) ? (arr_10 [i_0] [i_1] [i_5] [i_1] [i_6 + 3]) : (arr_2 [12] [i_1]));
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_18 = (min(var_18, (!var_10)));
                        arr_23 [0] [i_1] [i_1] = 35650;
                        var_19 *= var_1;
                    }
                    var_20 = (arr_13 [7] [7] [5] [i_1]);
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    arr_27 [i_0 + 3] [i_0] [i_1] [i_8] = ((((254 ? (~1) : (var_11 ^ 4294967295)))) ^ var_2);
                    arr_28 [i_0] [i_1] [i_1] [i_8] = ((!(((12772639132450717718 >> (10702 - 10684))))));
                }
                var_21 = (max(var_21, ((min((((((max(40, 29823)))) / (arr_24 [i_0] [1] [i_0] [12]))), (((max(5674104941258833898, var_7)))))))));
                var_22 = (max(187, 1242394020));
                arr_29 [11] [i_0] = (arr_26 [i_0] [i_1]);
            }
        }
    }
    var_23 = (((~var_5) ? ((((!(((var_3 ? var_6 : var_10))))))) : var_9));
    #pragma endscop
}
