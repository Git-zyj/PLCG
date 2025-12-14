/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((32767 ? 255 : 255)) + (!var_14)))) ? ((min(((min(0, 4702))), 4294967295))) : ((var_10 ? ((var_10 ? var_5 : var_1)) : var_10)));
    var_17 = ((~(((!((min(var_12, 3))))))));

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_18 &= (((arr_0 [i_0] [i_0 - 4]) ? ((min(-545204084, 228))) : (min((min(var_1, var_9)), 154))));
        var_19 = (min((max(9223372036854775807, ((1 ? 1 : 255)))), (244 | 8)));
        var_20 += (((arr_2 [i_0]) ? (!1) : (min((min((arr_0 [i_0] [i_0 - 2]), var_15)), (arr_1 [i_0 + 2])))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_21 ^= (4 ? 27798 : var_13);
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_22 ^= (!var_4);
                            var_23 = (max(var_23, (((!((((1 * 7255373344334220683) ? 567453553048682496 : (arr_1 [i_2])))))))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_24 = (max(var_24, (arr_7 [i_0] [0] [14] [i_5])));
            var_25 = (~7);
        }
        for (int i_6 = 3; i_6 < 18;i_6 += 1)
        {
            var_26 = (min(var_1, (((!((min((arr_9 [i_0 - 1]), 1058))))))));
            var_27 = 5;
            arr_21 [i_0] [i_6] = (~1);
        }
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            var_28 = ((((((min(var_4, (arr_1 [i_7])))) ? (arr_8 [i_0] [i_0] [i_7 + 1]) : ((4294967295 ? 62061 : 1)))) << (((min(4294967295, 134217727)) - 134217727))));
            var_29 = (max((arr_2 [i_7 + 3]), var_9));
        }
        arr_25 [i_0 + 2] = ((!((min((arr_3 [i_0]), (arr_12 [i_0 - 3] [i_0] [16] [i_0]))))));
    }
    var_30 = ((var_5 ? (max((max(127, 1)), var_14)) : (((~((255 ? 19 : 16383)))))));
    var_31 = 18446744073709551615;
    #pragma endscop
}
