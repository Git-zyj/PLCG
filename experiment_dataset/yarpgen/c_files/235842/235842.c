/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -38;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((((max((var_8 > 2), (min(0, 50734))))) ? var_9 : (322098160329956184 <= 0)));
        var_13 = var_9;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((((arr_4 [i_1]) ? 10008173271172568683 : 1))));
        var_14 = ((((max(var_5, var_4))) & (max(((21927 ? 4684 : var_7)), 1))));

        for (int i_2 = 3; i_2 < 7;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_15 = 1587653046;
                arr_13 [i_2 - 1] |= ((-((var_7 ? (arr_2 [i_1] [i_3]) : (!48821)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_16 = (1950 | -18395518);
                            var_17 = (arr_14 [i_2 + 3] [i_5 - 2] [i_5] [i_5 + 1]);
                            var_18 = -1;
                        }
                    }
                }
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                var_19 ^= ((((1 + ((11 ? 4684 : 0)))) << (-118 + 123)));
                var_20 |= (((max((1737450070 & 62360), var_6)) + (((var_5 & ((30946 ? 18395518 : -4081)))))));
                var_21 = (min(var_21, ((min((max(var_11, ((-(arr_16 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))), 1)))));
                var_22 = (min(-1801, 17377786387875767354));
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_23 = (min(var_23, ((max(((min((max(var_9, -1)), var_5))), (arr_0 [i_7]))))));
                            var_24 = (((max((max(8438570802536982932, 4671)), 63586)) % -1));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            var_25 = (min((arr_12 [i_10]), (min(9153795657608781997, (arr_32 [i_1] [i_10] [i_10])))));
            var_26 = (min(var_26, ((max(84, 50734)))));
        }
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            arr_36 [i_11] [i_11] [i_1] = (!227);
            arr_37 [i_1] [i_11] = ((((1737450070 ? var_9 : (arr_14 [i_11] [i_11] [i_11] [i_1])))) ? ((((arr_21 [i_1] [i_1] [i_1] [i_11]) && (arr_35 [i_11])))) : 1795);

            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 0;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        {
                            var_27 = (arr_43 [i_1] [i_11] [i_11] [i_13] [i_14]);
                            var_28 = ((((max(14801, 1054941083))) & (min(((max(-1, -2))), (max(166, (arr_28 [i_1] [i_1] [i_13])))))));
                            var_29 ^= (60838 % 4);
                            var_30 ^= (min((max(((max(32760, 32760))), (min(176, 16)))), ((min(-23952, 251)))));
                        }
                    }
                }
                arr_45 [i_1] [i_1] = (((((arr_38 [i_11] [i_1]) < (max(var_4, 2147483647)))) ? (arr_25 [i_1] [i_11] [i_12] [i_12]) : var_10));
                var_31 += (arr_23 [i_1] [i_11] [i_12]);
                arr_46 [i_1] [i_11] [i_11] [i_12] = ((+(min(((4049265802 << (((arr_29 [i_1] [i_11] [i_1]) + 23446)))), (arr_20 [i_1])))));
            }
            var_32 = (min(var_32, 4684));
        }
        var_33 = max((((var_5 == ((-(arr_20 [i_1])))))), (min(((max(4049265811, 32024))), -4033954670015303066)));
    }
    #pragma endscop
}
