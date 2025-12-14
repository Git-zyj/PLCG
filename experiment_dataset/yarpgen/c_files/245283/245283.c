/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 ^= ((0 ? ((21522 ? -8570 : 48928)) : 5311));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_12 = (min(var_12, -59076));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_13 = 19621;
                            var_14 = ((41761 ? (~34454) : ((42737 ? 65535 : 1))));
                            var_15 = (--57845);
                            var_16 ^= 15;
                        }
                    }
                }
            }
            arr_15 [i_1] = (((((41773 ? 34454 : 43892))) ? ((0 ? 65532 : 892)) : 7));
            var_17 -= (~41761);
            arr_16 [i_0] [i_1] = 39686;
        }
        var_18 = (~20);
        arr_17 [i_0] [i_0] = (((((~(~2)))) ? (~-34550) : ((~((45029 ? 18090 : 0))))));
        arr_18 [i_0] = ((18110 ? (((!(((864 ? 64644 : 3267)))))) : -52731));
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_19 = 39715;
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    arr_27 [i_5] [i_5] [i_6 + 3] [i_5] = ((~(~39705)));
                    var_20 = (max(var_20, (~40316)));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {

        for (int i_9 = 1; i_9 < 8;i_9 += 1)
        {
            var_21 = (min(var_21, 8191));
            arr_34 [9] [i_9 + 2] = -0;
            arr_35 [i_8] [5] [i_8] = ((~(~25)));
        }
        arr_36 [i_8] [i_8] = 15;
        var_22 = 23051;
        var_23 = ((27764 ? 23781 : 56913));
        var_24 += ((65535 ? 65535 : -39715));
    }
    var_25 = (!18398);
    #pragma endscop
}
