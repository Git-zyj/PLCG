/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = ((268435455 << (268435437 - 268435434)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_1] = var_10;
                            var_16 = (((127 ? 268435465 : 16859)));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_17 = 134;
            var_18 ^= (arr_12 [10] [10]);
        }
        var_19 -= var_3;
        arr_15 [i_4] = (max(2814596824, 14676));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        arr_19 [i_6] [i_6] = 4294967295;
        arr_20 [i_6] [i_6] = ((((min((arr_17 [i_6]), (arr_17 [i_6])))) ? (arr_4 [i_6] [i_6] [i_6]) : 2100937303));
        arr_21 [i_6] = var_12;
        arr_22 [i_6] [i_6] = (min(16, -268435417));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        var_20 *= (arr_2 [i_7] [16]);
        var_21 = (arr_16 [i_7] [i_7]);
    }
    for (int i_8 = 3; i_8 < 21;i_8 += 1)
    {
        arr_29 [i_8] &= (((arr_4 [i_8] [i_8 + 3] [i_8]) - ((37 ? 235 : ((3139109813 ? 4611686017890516992 : (arr_27 [i_8] [i_8])))))));
        var_22 = ((((!(arr_2 [i_8] [4]))) || (((((max(8, var_7))) ? (arr_3 [16]) : 42638)))));

        for (int i_9 = 2; i_9 < 21;i_9 += 1)
        {
            var_23 ^= 68719476735;

            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                arr_34 [i_10] [i_9] [i_10] [i_10] = 9;
                arr_35 [i_8] [i_8] [i_10] [i_9] = var_10;
            }
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                arr_38 [i_9] [i_9] [i_11] [i_9] = (((arr_4 [i_8 - 3] [i_9 - 1] [i_9 + 3]) > (max(13, 34))));
                var_24 &= ((!(arr_37 [i_8 - 3] [i_9 - 2] [22])));
                var_25 = 3327781660637251961;
            }
            for (int i_12 = 3; i_12 < 23;i_12 += 1)
            {
                arr_43 [i_8 - 1] [i_9] = (arr_30 [i_9] [i_12]);
                arr_44 [i_9] [i_9] = (min((~var_10), var_1));
                arr_45 [i_8] [i_8 - 1] [i_9] [15] = (arr_7 [i_8] [i_9] [i_12]);
                arr_46 [i_8 + 2] [i_9 - 1] [8] [i_9] = 32761;
            }
            arr_47 [i_8] [i_8 - 2] [i_9] = (max(((((((arr_40 [i_8] [i_8 - 3] [i_9] [i_9 - 2]) % (arr_1 [1] [i_8 - 3])))) ? var_11 : (arr_36 [i_8 + 3]))), ((((-46 + 2147483647) << ((((((91 ? -1752959027 : 4)) + 1752959040)) - 13)))))));
        }
        var_26 = (802633211 - -1501390849238055197);
    }
    #pragma endscop
}
