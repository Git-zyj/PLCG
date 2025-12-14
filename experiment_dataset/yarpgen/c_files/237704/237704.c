/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (~22);
    var_17 *= ((9841417004854356770 ? (((~var_9) ? var_0 : (~var_8))) : var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = var_8;
                arr_4 [i_0] [i_0] = var_10;
                arr_5 [i_0] [i_0] = 9841417004854356770;
                var_19 = var_5;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_20 = var_13;
                    var_21 = (((((8605327068855194856 ? 9841417004854356774 : 1))) ? -var_0 : 11422376275553769720));
                    var_22 = var_7;
                    var_23 = var_13;
                    arr_9 [i_0] = -var_13;
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_24 ^= min((((((1 ? var_3 : var_9))) ? (!9841417004854356760) : ((var_15 ? 9841417004854356794 : var_7)))), (min(((4125876208785315616 ? var_15 : 8605327068855194842)), (((var_5 ? var_6 : var_4))))));
                    var_25 ^= 582655906;
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 7;i_5 += 1)
                    {
                        arr_17 [0] [i_4] [i_4] [i_0] = 112;
                        arr_18 [i_1] [i_1] [i_1] [i_1] [i_4] [i_1] = ((!(((8605327068855194856 ? var_4 : 27934)))));
                        arr_19 [i_0] [i_1] [i_4] [i_4] = 27934;

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_22 [i_5] [i_1] [i_4] [i_5] = (((((-2 ? var_9 : 193))) ? ((var_5 ? var_10 : 8605327068855194869)) : -11));
                            var_26 = 47;
                            var_27 += 8605327068855194861;
                        }
                        var_28 = (((((63 ? var_8 : var_4))) ? var_10 : ((212 ? 123145302310912 : 22280))));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_29 = (((((var_12 ? var_10 : var_6))) ? (((-582655895 ? 55 : var_6))) : 9841417004854356771));
                        var_30 = (((var_6 ? -7309617912502372489 : 9841417004854356774)));
                        var_31 = (min(var_31, (!-1)));
                        var_32 = ((~((var_10 ? var_1 : var_3))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_33 *= ((-var_13 ? -var_7 : -var_2));
                                var_34 = (((((var_8 ? 1 : 172))) ? 9223372036854775798 : (((21096 ? var_6 : var_2)))));
                                var_35 = var_6;
                                arr_30 [i_0] [i_0] [i_4] [i_0] [i_0] = var_11;
                            }
                        }
                    }
                    arr_31 [i_4] = (((2 ? var_1 : 44)));

                    for (int i_10 = 3; i_10 < 8;i_10 += 1)
                    {
                        var_36 = -9223372036854775799;
                        var_37 = (((((var_4 ? 8605327068855194855 : var_12))) ? (((24576 ? var_4 : 25))) : ((2 ? var_15 : var_3))));
                        arr_35 [i_10] [i_1] [i_4] = (~121);
                        arr_36 [i_0] [i_4] [i_1] [i_4] [i_1] [i_10] = (((var_15 ? -1 : 58)));
                        arr_37 [i_1] [i_4] [i_4] = (((!var_2) ? (((10 ? 2 : var_6))) : ((58 ? var_7 : 16496557388276576289))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
