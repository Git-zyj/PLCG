/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -69;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_21 |= 71;
            var_22 = ((21652 ^ (181 && 29640)));
            arr_7 [i_1] = 588017527;
            var_23 = (((98 & 246) ^ (255 != 17581)));
            var_24 -= 2147483647;
        }

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_25 = -5743;
            var_26 = 187;
            var_27 = (0 <= 101);
            arr_10 [i_0] [i_0] = (3793822268 - -83);
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            arr_13 [i_0] [i_3] [i_3] = ((5736 - ((60 - (-19 - 2900083236081944706)))));
            var_28 = 1;
            var_29 = 65535;

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_30 = 12;
                var_31 = (max(var_31, 0));
            }
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                arr_18 [i_0] |= -32764;
                var_32 = 17;
            }

            for (int i_6 = 2; i_6 < 12;i_6 += 1)
            {
                arr_22 [0] [i_3] [i_6] [i_6] |= (((((2317 % 742283519306830319) | (1 != 12))) <= 21));
                var_33 = (min(var_33, -1));
                arr_23 [i_0] [i_0] [i_0] &= 65535;
                var_34 = 8072259106481524705;
            }
            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                var_35 = 2663319707;
                arr_28 [i_0] [i_0] = 8192830554261639533;
            }
        }
        for (int i_8 = 3; i_8 < 12;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        {
                            arr_37 [i_0] [i_8] [i_8] [10] [i_11] = 0;
                            arr_38 [11] [11] [i_8] = 79;
                            arr_39 [i_8] [i_8] [i_0] [i_9] [i_8] = (-17813 * -10989);
                        }
                    }
                }
            }
            arr_40 [i_0] [i_8] = (((65535 % 136) > ((96 << (142 - 126)))));
            arr_41 [i_8] = (1 || 1);
            var_36 ^= ((-83 * (((184798308 && 117) * (3793822268 != 178)))));
        }
    }
    var_37 *= -25412;
    #pragma endscop
}
