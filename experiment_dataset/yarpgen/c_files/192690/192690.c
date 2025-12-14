/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((0 | 0) && ((((var_10 << (var_1 - 717804349)))))));
    var_20 = (3279565100 << 29);
    var_21 = 3272320997;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_22 = (min((((((arr_0 [i_0]) < (arr_0 [i_0]))))), ((var_6 >> (var_5 && 1015402199)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_23 = 9103832682525922073;
            var_24 += (arr_3 [12] [12]);
        }
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        arr_7 [i_2] = 1015402181;

        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    {
                        var_25 = (max(var_25, (var_14 != var_4)));
                        var_26 = (((arr_14 [i_2] [i_2 - 2] [i_2 - 2] [i_2] [i_3 + 3] [i_5 - 1]) < (arr_14 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_3 - 2] [i_5 + 1])));
                    }
                }
            }
            arr_16 [i_2 - 2] [i_2] = 3279565110;
            var_27 = ((((((arr_4 [i_3]) * 22932))) != (arr_6 [i_2 + 1] [i_3 + 3])));
        }
        for (int i_6 = 4; i_6 < 15;i_6 += 1) /* same iter space */
        {
            arr_19 [i_2] [i_2] = ((3279565124 >> (230 >= var_13)));
            var_28 &= 229;
            var_29 = (arr_5 [i_2]);
        }
        for (int i_7 = 4; i_7 < 15;i_7 += 1) /* same iter space */
        {
            var_30 |= (((arr_14 [i_7] [i_7 - 2] [i_7] [i_7] [i_7 - 4] [i_7 - 2]) != 3279565120));
            var_31 = (min(var_31, ((((arr_13 [i_7] [i_7 - 4] [i_7 - 4]) && (((var_13 ? var_18 : var_4))))))));
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 14;i_10 += 1)
                    {
                        {
                            var_32 = 229;
                            var_33 = (1 && 45);
                            var_34 = var_12;
                        }
                    }
                }
            }
        }
        for (int i_11 = 4; i_11 < 14;i_11 += 1)
        {
            var_35 = 1099503239168;
            arr_34 [i_2] [0] = ((-9837 & (arr_0 [i_2 - 1])));
        }
        arr_35 [i_2] = (((arr_30 [i_2 + 1] [i_2 + 1]) & 1));
        var_36 *= ((((((arr_6 [i_2] [i_2]) != var_5))) + ((60 << (((arr_8 [i_2] [12]) - 6565560502852631048))))));
    }
    for (int i_12 = 1; i_12 < 14;i_12 += 1)
    {
        var_37 = ((((((max(230, 8)) >= 53))) >> (var_7 - 2064256171)));
        var_38 = (min(var_38, (((4564369501362740555 ? (3279565100 || var_4) : (arr_0 [i_12 + 2]))))));
    }
    #pragma endscop
}
