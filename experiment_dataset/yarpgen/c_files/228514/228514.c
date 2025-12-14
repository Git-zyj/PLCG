/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min((max((3283351889 & 1120430145038569529), (~var_15))), (((~(max(var_2, 0))))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_19 = (((~(max((arr_2 [i_0]), var_13)))) << ((((((((arr_1 [i_0]) << (((arr_1 [i_0]) - 9126))))) ^ (max(1011615407, var_2)))) - 2333799092)));
        var_20 = 1011615406;
        var_21 = (min(var_21, (((((-(var_13 / 908479957))) / (max((((var_9 << (var_4 - 4494530508207725208)))), (max(3283351888, 242465437)))))))));
        arr_4 [i_0] = ((((~(max(var_16, 1)))) * (max(-4123754277, (192 / var_10)))));
        var_22 |= ((1 / (min((var_11 ^ 46062), (max(4073076007, 1))))));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_18 [i_2] [i_2] [11] [i_4 - 2] = (((-1916339877 + var_0) - ((-(max(522055155, 17379))))));
                        var_23 = (((34312 / 3283351889) || (((~((max(3685, 65512))))))));
                        var_24 = ((max(((max((arr_11 [i_2]), (arr_14 [i_2])))), (max(var_11, (arr_15 [i_1 - 2] [11] [i_4]))))) <= ((max(-var_13, ((max(113, 55035)))))));
                    }
                }
            }
        }
        var_25 = (((max(((max(var_11, -1))), (min(8834288345228055310, 41929)))) >> (((min((min((arr_16 [i_1 + 3] [i_1] [10] [10] [8]), var_10)), (~var_6))) - 33835))));
        var_26 -= ((min(-var_11, (min(var_7, 1011615407)))));
        var_27 ^= ((!(((((var_5 * (arr_10 [8]))) / (min(2814955978, var_5)))))));
        arr_19 [i_1] [i_1 - 3] = ((-1 + (((~43) + ((min(-3685, (arr_1 [i_1]))))))));
    }

    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        var_28 = (!(((~((119 / (arr_21 [i_5 + 1] [i_5])))))));
        var_29 = ((~(max(((max(var_6, 30698))), (var_1 - -1)))));
        var_30 -= max((max((min((arr_20 [i_5] [i_5]), 1296288540042593722)), (((-(arr_22 [16] [18])))))), ((max(((((arr_22 [4] [18]) && -1))), (min(var_6, 1011615407))))));
        var_31 = ((((((!8192) << (((-1038000255 && (arr_22 [i_5] [i_5]))))))) % (max((1160570789 & 7487), (((arr_20 [i_5] [i_5]) + 17150455533666957894))))));
    }
    var_32 = (0 - 196);

    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_33 = (((min(((min(var_13, var_6))), (31 / 3854016257049877895))) & ((min((((arr_17 [i_6] [11] [i_6] [i_6]) + (arr_8 [i_6]))), (1 <= var_14))))));
        var_34 = (((((max(1296288540042593722, var_4)) + (((4294967295 ^ (arr_10 [i_6])))))) << ((((~(max(var_4, (arr_21 [i_6] [i_6]))))) + 4494530508207725240))));
    }
    for (int i_7 = 1; i_7 < 23;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = (min(((max((((arr_26 [i_7]) + var_2)), (7487 * -30)))), (max((var_16 + var_2), (((-(arr_26 [i_7]))))))));
        arr_28 [i_7] [i_7] = (((!-255) ^ ((((min(0, var_17)) == ((-7488 % (arr_25 [i_7] [i_7]))))))));
    }
    for (int i_8 = 1; i_8 < 23;i_8 += 1) /* same iter space */
    {
        var_35 = (min(var_35, ((max((!-var_17), 4294967040)))));
        var_36 = (!var_15);
    }
    #pragma endscop
}
