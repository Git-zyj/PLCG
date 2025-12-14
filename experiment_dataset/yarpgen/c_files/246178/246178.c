/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((1 << (-835208284361662976 + 835208284361662986))))) ? (~835208284361662973) : var_5));
    var_16 = (min(var_16, (((min((max((-9223372036854775807 - 1), var_2)), (((var_12 ? var_14 : var_11))))) | (((((max(var_3, 1))) ? (!var_1) : ((min(1, 240))))))))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 -= (((max(1, 12433715608070052254)) != (1 || -835208284361662958)));
                    arr_7 [i_0] [i_1] [i_0] [i_0] = (16711680 > -835208284361662978);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    var_18 = (max(var_18, ((min(3310704330, (((7727885238454019547 ? (!1) : -10))))))));
                    var_19 -= ((204 > ((0 ? ((((arr_8 [1]) & 0))) : (arr_2 [i_0 + 3])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_20 = (max((max(var_4, (((!(arr_5 [i_0] [i_3] [i_6 - 3])))))), var_12));
                                arr_19 [i_6 - 3] [i_0] [1] [i_0] [i_0] = ((~(min((!-110), var_4))));
                            }
                        }
                    }
                }
            }
        }
        arr_20 [i_0] = (min((((var_9 >= (min(16162383782775564178, (arr_5 [i_0 + 4] [i_0] [i_0 + 1])))))), 8573997311347255047));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
    {
        var_21 |= (arr_13 [i_7] [0] [i_7]);
        var_22 = -80;
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
    {
        var_23 = ((-(arr_0 [i_8])));
        var_24 = (max(var_24, (((1 + (arr_12 [10]))))));
    }
    #pragma endscop
}
