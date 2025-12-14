/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = ((((2120258546623564581 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [8]))) != (arr_0 [5] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        var_18 = (min(var_18, (((((min((arr_7 [i_3] [i_3] [i_3 - 1] [i_3 + 1] [i_0]), var_4))) ? (arr_7 [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_0]) : 18015882267453685478)))));
                        var_19 = (max(var_19, (((((1 ? var_15 : 1)))))));

                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            var_20 = var_14;
                            var_21 = -44;
                            arr_14 [i_3] [i_3] = (max(-var_2, (((var_7 == (min((arr_1 [i_2] [i_1]), (arr_9 [i_0] [i_1] [i_4] [i_3 - 1] [i_4 + 1] [i_3 + 1]))))))));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    {
                        var_22 -= (max(var_5, (max((var_5 > var_13), (arr_21 [i_0] [i_5])))));
                        arr_25 [i_7] |= 1;
                        var_23 = (max(var_23, ((min(135, (arr_13 [i_0]))))));
                        var_24 = (max(var_24, var_6));
                        arr_26 [i_0] [i_5] [i_6 + 1] [i_7] [i_6 - 1] = (min(((((min(6, 0))) ? var_13 : 44)), 12868));
                    }
                }
            }
        }
        var_25 = (var_2 ? (arr_13 [1]) : (((((arr_10 [i_0] [i_0] [1] [i_0]) >= (arr_18 [i_0] [i_0] [5] [i_0]))) ? (!317062695555354057) : (arr_2 [i_0]))));
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        arr_30 [i_8] = (min((max((max(var_2, (arr_8 [i_8] [i_8] [i_8] [8] [i_8] [i_8]))), (((!(arr_28 [i_8])))))), (((-(arr_29 [i_8]))))));
        var_26 = ((((min((arr_3 [i_8]), 5952))) ? (((arr_10 [0] [i_8] [i_8] [i_8]) << (((arr_6 [1]) + 5085173602009378625)))) : ((((arr_17 [i_8] [i_8]) != ((317062695555354057 ? 25 : var_10)))))));
        var_27 = ((((((arr_3 [i_8]) ? 12866 : (arr_3 [i_8])))) ? (arr_10 [10] [i_8] [i_8] [i_8]) : (((!((min((arr_27 [i_8]), 25633))))))));

        for (int i_9 = 2; i_9 < 9;i_9 += 1)
        {
            var_28 = (~10827578844887166100);
            var_29 = (min(var_29, (((((((((var_13 ? 104 : (arr_5 [i_8] [i_8] [i_8])))) ? var_2 : (((min(-104, 109))))))) || ((min((arr_32 [i_9 - 2] [i_8]), (arr_32 [i_9 + 3] [i_8])))))))));
            var_30 = 18129681378154197558;
            var_31 = (((((105 ? ((27 ? 80 : 39)) : 5946))) ? (!var_3) : (arr_18 [1] [i_8] [i_9] [2])));
        }
        var_32 = ((((min((~179), (var_6 & var_4)))) % (max(var_1, (~-4109164940694078205)))));
    }
    for (int i_10 = 1; i_10 < 15;i_10 += 1)
    {
        var_33 *= ((-32 ? var_11 : 27));
        arr_38 [i_10] = (arr_34 [i_10]);
        var_34 ^= 206;
        arr_39 [i_10] = ((((~(arr_35 [i_10]))) * (((!(~var_10))))));
        arr_40 [i_10] = ((((min((max(var_9, 22295)), (((var_15 != (-32767 - 1))))))) == ((((arr_34 [i_10]) > (arr_35 [i_10]))))));
    }
    var_35 = (min((((1 >= var_11) ? var_5 : (max(50, 9469656404297628288)))), 2666805395));
    var_36 = var_0;
    #pragma endscop
}
