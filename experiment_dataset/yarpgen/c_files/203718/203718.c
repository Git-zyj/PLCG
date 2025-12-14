/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(var_7, -21);
    var_15 = (max(var_15, ((min((47 || var_6), 36173)))));
    var_16 = 37;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (-13 == -1047944829);
            var_17 = (min(((((min(-49, 7513))) ? (arr_4 [i_0] [i_0] [i_0]) : (max(var_5, 21)))), (min(-8270936634699564899, ((min(var_12, 196)))))));
            var_18 ^= (max((arr_1 [i_0] [i_1]), var_1));
            arr_6 [i_0] [i_0] = ((var_4 ? (((max(var_3, 3998468475)) * 313395743)) : ((((!var_3) ? (!18) : (~var_6))))));
            var_19 = min((((min(var_5, var_10)) == (((min(0, (arr_4 [i_1] [i_1] [i_1]))))))), ((var_10 == (var_5 == var_13))));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_20 = -37;
            var_21 = ((((((1 < 172) * ((~(arr_8 [i_0] [i_2] [i_2])))))) ? (((((min(0, -7514))) ? var_10 : ((((arr_1 [i_0] [i_0]) == (arr_7 [i_2] [i_0] [i_0]))))))) : (max(var_2, ((((arr_1 [8] [i_0]) < 1)))))));
        }
        var_22 *= (max(((((1 * 1) % (313395745 * 15605)))), (min(((max((arr_0 [i_0] [i_0]), var_10))), (((arr_4 [i_0] [i_0] [i_0]) ? 14207971916376105324 : 1))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_23 = ((16476449146460974133 ? -19 : 247));
            var_24 = (arr_2 [i_3] [i_3]);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        var_25 = ((0 < (arr_13 [i_6] [i_4])));
                        arr_20 [i_3] [1] [1] [i_6] = (((arr_0 [i_3] [i_3]) == (arr_0 [i_6] [i_4])));
                        arr_21 [11] [i_3] [i_5] [i_5] = ((0 ? var_3 : (arr_2 [i_3] [i_3])));
                        var_26 = (arr_17 [i_3] [i_3] [i_4] [i_5] [i_6]);

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_25 [i_3] [i_3] [9] [i_7] = (arr_19 [i_3]);
                            arr_26 [i_3] [i_3] [i_5] [i_3] [i_7] = (arr_19 [i_4]);
                        }
                    }
                }
            }
            var_27 ^= (arr_10 [i_4]);
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_28 *= (min((((max(3981571567, (arr_1 [i_3] [i_3]))))), (min((arr_23 [i_3] [i_3] [i_8]), ((min(1, (arr_27 [i_8] [i_8] [i_3]))))))));
            arr_29 [i_3] [i_8] [i_8] = (((var_11 ? (arr_24 [1] [i_3] [i_3] [i_3] [i_8]) : (arr_24 [i_3] [i_8] [i_3] [i_3] [i_3]))));
            var_29 = (min((min(31821, (arr_8 [i_3] [i_3] [i_3]))), (!var_5)));
            var_30 = ((((min((arr_0 [i_3] [i_8]), (arr_0 [i_3] [i_8])))) ? (((arr_0 [i_3] [i_3]) ? 1 : (arr_14 [i_3] [i_8]))) : (arr_14 [i_3] [i_8])));
        }
        var_31 += (min(((((~var_7) < (((max(var_3, 31823))))))), (max((~943438307), (arr_28 [i_3] [i_3])))));
        var_32 = (min(var_32, (((var_5 ? (min((min(var_2, 14207971916376105319)), ((max((arr_10 [i_3]), var_4))))) : var_6)))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {
                    var_33 = ((((var_2 ? var_1 : var_1))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_34 = min((((arr_31 [i_3] [i_10] [i_3]) ? 3368594232400423462 : 1756)), (~1));
                                var_35 = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        var_36 = min(((min((arr_8 [i_13] [10] [i_13]), ((var_0 || (arr_2 [i_13] [i_13])))))), (arr_43 [13]));
        var_37 = (((((arr_9 [i_13] [i_13]) ? 1 : (arr_9 [i_13] [i_13]))) % (min((arr_9 [i_13] [i_13]), 3981571582))));
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        var_38 = ((min(((((arr_9 [i_14] [5]) || 0))), -5296583674494357726)) % (~var_2));
        var_39 = (min(var_0, ((((var_5 == 9320323827689052515) < ((~(arr_0 [i_14] [10]))))))));
        var_40 = ((-((min(var_6, 11172)))));
        arr_46 [i_14] = ((((((arr_7 [i_14] [i_14] [i_14]) < (arr_1 [i_14] [i_14])))) == ((-1 ? (arr_41 [i_14]) : (arr_41 [i_14])))));
        var_41 = (max(var_41, ((min((((-222605521078282079 ? var_3 : -13902))), (((max(1, (arr_3 [i_14]))))))))));
    }
    #pragma endscop
}
