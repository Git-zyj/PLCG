/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_2] &= ((var_18 + (1 % 49)));
                    var_21 = (((2282232102 | (2115648509 == 2012735184))) % ((((4029385759 || 265581536) & 49))));
                    var_22 = (var_13 > var_0);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_23 = var_13;
                    var_24 = (min((var_15 & var_3), var_2));
                    arr_15 [i_4] [i_4] &= var_4;
                    var_25 = (max(var_25, 233));
                }
            }
        }
    }
    var_26 = var_13;

    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        arr_18 [i_6] [i_6] = (4294967275 < -1482521991);
        var_27 ^= var_18;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 21;i_9 += 1)
                {
                    {
                        arr_28 [i_6] [i_6] [i_8] [i_9] = (((var_5 % var_16) & ((((var_8 >> (var_6 - 10381872875302194333))) | var_10))));
                        var_28 = (min(var_28, (((max(var_2, (var_19 < var_4)))))));
                        arr_29 [i_6] = (4128768 | 1642518801);
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
    {
        var_29 &= (((max(var_8, var_0)) | var_19));
        var_30 = var_15;
        var_31 = (var_6 >= var_0);
        arr_32 [i_10] = (var_10 + var_2);
        arr_33 [i_10] = (((var_15 & var_8) <= (var_8 || var_17)));
    }
    for (int i_11 = 0; i_11 < 0;i_11 += 1)
    {
        arr_37 [i_11 + 1] = (((var_18 + 2147483647) >> (var_4 - 44798)));
        var_32 = (((2012735193 <= var_0) * (var_5 == var_3)));
        var_33 = (min(46, 49));
    }
    #pragma endscop
}
