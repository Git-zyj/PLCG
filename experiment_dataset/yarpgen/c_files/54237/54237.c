/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((-1 ? 9 : 2147483647))) ? ((((var_2 <= 1) == (255 >= var_12)))) : -var_12);
    var_16 ^= 44320;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((((-53249 ? (1 + 1) : 1)) << ((((4075533898413535433 ? (arr_1 [9] [i_0]) : (arr_2 [i_0] [i_0]))) - 18446744073709523266))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_17 = (min((((arr_1 [i_2] [i_0]) ? 17593320779605188328 : (arr_8 [i_1] [i_0]))), (((var_11 ? (arr_4 [1]) : 2147483647)))));
                        var_18 = (min(var_18, (((((max((((var_0 ? 797191071 : (arr_9 [i_2] [i_3] [i_0])))), (((arr_4 [i_0]) ? 1512725572548430640 : (arr_6 [i_0] [i_1] [i_2] [i_3])))))) ? (((min((arr_5 [i_3]), -657173604)) - ((-1 ? 7528905312568152031 : (arr_6 [i_0] [i_0] [i_2] [i_0]))))) : (arr_7 [i_0] [15] [i_2] [i_3]))))));
                        var_19 -= ((((arr_0 [i_3]) ? (arr_0 [i_3]) : var_7)) == (((((18446744073709551614 ? 65531 : var_0))) ? ((-1094309402 ? -92 : 127)) : (((arr_2 [4] [i_1]) ? var_8 : (arr_10 [1] [10] [i_2]))))));
                    }
                }
            }
        }
        arr_12 [i_0] = (var_3 + var_9);
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            arr_20 [i_4] [i_5] [i_5] = ((((((-1720242048 ? 387491047 : var_10) != ((((arr_17 [i_4] [i_5]) ? -5912 : -13800))))))));
            var_20 = 0;
        }
        var_21 = ((((-21 <= (((arr_18 [i_4]) ? -1 : var_8)))) ? (((max((arr_16 [i_4] [i_4]), (arr_17 [i_4] [i_4]))))) : ((47 ? (arr_14 [i_4]) : var_4))));
        var_22 = (arr_18 [i_4]);
    }
    var_23 = (((((~(var_2 & 36)))) ? (max((~1), (~var_9))) : ((~((var_7 ? 1 : var_12))))));
    #pragma endscop
}
