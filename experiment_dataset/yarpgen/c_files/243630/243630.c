/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_16 = ((-(2800968922740377829 / var_11)));

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            var_17 = (~-14165);
            var_18 = (max(var_18, (((-(!-14165))))));
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        var_19 = (-(arr_5 [i_0 + 4]));
                        arr_11 [i_3 - 1] [4] [i_1] [i_3 - 1] = (1 ? (124 & var_0) : ((17325347267413813909 ? 65535 : 0)));
                        var_20 = (min(var_20, ((var_11 ? var_10 : var_3))));
                        arr_12 [i_3] [i_3] [i_1] [i_2] [i_1] = ((!(((var_13 / (arr_5 [i_1]))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_20 [i_1] [i_0] [11] = 17325347267413813909;
                        var_21 = -14170;
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    var_22 = ((-4973249623703503991 ? ((max(1, (max(-4973249623703504013, var_0))))) : (arr_3 [i_6] [i_7 + 2])));
                    var_23 = ((((max(0, 0))) != ((max(14934, ((max(1, -106))))))));
                }
            }
        }
        var_24 |= (max(var_5, ((min((arr_16 [i_6] [12] [0] [i_6]), (arr_16 [0] [12] [12] [i_6]))))));
    }
    for (int i_9 = 1; i_9 < 21;i_9 += 1)
    {
        var_25 = (max(65532, 8781726337076458868));
        var_26 = ((!((((var_7 ? var_10 : var_2))))));
    }
    var_27 = (max(var_27, ((((((max(36312, 0))) > ((var_4 ? 205 : 22)))) ? var_0 : (min(var_0, (max(var_4, -14186))))))));
    var_28 = ((29224 ? (min(((min(-14165, var_11))), (max(-14165, -4973249623703503999)))) : (((((max(var_6, var_11))) - ((min(107, -72))))))));
    #pragma endscop
}
