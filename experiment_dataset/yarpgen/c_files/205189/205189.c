/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = var_1;
        arr_4 [i_0] [i_0] = 31069;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_12 = (((!1) ? ((63 ? -322357435 : -39517973)) : (((1 && -39517992) ? -51640645 : 25903))));
            var_13 -= ((((1 ? 1 : -7382823043189404461))));
            var_14 += ((((max(((max(102, 1))), (min(var_5, -7782029913497250871))))) ? ((-1794568374 ? ((0 ? 77 : -77)) : 1794568364)) : (((192 ? var_7 : 1794568353)))));
            var_15 = var_10;
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            arr_11 [i_0] [i_0] = ((!((((((31193 ? -95 : 39))) ? -8871308576186791989 : (max(var_5, -3912)))))));
            var_16 = (max(15484307997893593677, -34));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_17 = (min(var_17, -1));
            var_18 ^= (~-117);
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] = ((13484201296058274143 ? (((~(~var_5)))) : ((var_9 ? var_6 : (~var_4)))));
                        var_19 |= (max((((max(var_8, var_5)))), ((var_2 ? var_11 : var_3))));
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_20 = (min(var_20, (((~(((~var_6) ? (!var_6) : -40)))))));
                        var_21 ^= (max((var_9 & var_2), (max(((1717 ? 1 : -22027)), 0))));
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_22 = 1531692137373609935;
                        var_23 = var_3;
                    }

                    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        var_24 = 13225;
                        var_25 |= (max((((var_9 || (((var_0 ? var_8 : 1)))))), ((2669989235961099438 ? var_6 : ((1 ? 33570 : 71))))));
                        var_26 = (max(((((max(var_4, 1))) ? (!var_1) : -1794568376)), (246727241 || 12)));
                        var_27 = (min((((!((min(58, var_10)))))), 8379747084232676026));
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                    {
                        arr_37 [i_5] [i_5] [i_5] [i_5] [i_0] [i_5] = max((min(var_9, 17014936089875781466)), (var_8 || var_5));
                        var_28 = (max(var_28, 2804814093));
                        var_29 = -32613;
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                    {
                        var_30 = var_5;
                        var_31 = (max(((5010332757218249531 ? (((var_10 ? 1106502849 : 62692))) : ((var_8 ? -8871308576186791989 : 18788)))), ((max(var_6, (!var_5))))));
                        var_32 = (max(((var_5 ? var_9 : -1794568376)), var_7));
                    }
                    for (int i_12 = 3; i_12 < 12;i_12 += 1)
                    {
                        var_33 = var_1;
                        var_34 = (max(var_34, (((((min(var_8, var_2))))))));
                        var_35 -= 4287633326;

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            var_36 &= 401738401639176334;
                            var_37 = (max(var_37, -13));
                            arr_46 [i_0] [i_0] = var_9;
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(var_9 % var_6)));
                        }
                    }
                }
            }
        }
        var_38 = (max(var_38, ((max(96, 8381)))));
    }
    for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
    {
        var_39 = -1186921256;
        arr_51 [0] &= (((((((var_7 ? 2112792917991540097 : 2112792917991540097)) ^ (var_0 ^ -43)))) ? (((~((8751 ? 217 : 1))))) : 1951524375));
        var_40 |= ((-(max(8871308576186791989, var_7))));
    }
    var_41 = (min(var_41, (((var_4 ? (max(((max(1, 2343442920))), var_7)) : var_5)))));
    var_42 *= ((~(min((!98), (max(-1326458020, -1186921252))))));
    #pragma endscop
}
