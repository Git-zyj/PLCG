/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((min(var_5, var_3))) ^ var_4)) | -var_9));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (((((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) & (((arr_0 [i_0]) - -1))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [5] = 2616525433038811142;
            var_17 = ((arr_0 [i_0]) ^ 9223372036854775807);
        }
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            arr_8 [i_0] [i_2] [i_2] = (arr_6 [i_0] [i_2] [i_2]);
            arr_9 [11] [i_2] = ((10504938193815240570 ^ ((((max((arr_0 [i_0]), (arr_2 [i_0]))))))));
            var_18 -= (arr_6 [i_0] [i_2] [i_0]);
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_19 = 12211218886224163430;
            var_20 = (((max((((arr_6 [i_0] [i_0] [i_0]) / -1)), (arr_12 [2] [i_3]))) != ((((!(arr_0 [i_0])))))));
            var_21 = 966153029521649017;
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    arr_18 [i_0] [i_0] [i_0] [i_5] = ((!((((arr_2 [i_5]) % (arr_2 [i_0]))))));
                    arr_19 [i_5] = (arr_7 [i_5] [i_4] [1]);
                }
            }
        }
        arr_20 [i_0] = ((!((min((((arr_12 [i_0] [i_0]) - var_0)), 1)))));

        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            arr_23 [i_6] [i_0] [i_0] &= ((var_6 != ((966153029521649017 ? 17480591044187902599 : (((11151639016363196708 ? 8 : -1)))))));

            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                var_22 = -32717;
                var_23 = (max(var_23, ((((arr_21 [i_7 - 1]) || (((var_7 << (((arr_1 [i_0]) - 7181495648313251139))))))))));
            }
        }
    }
    #pragma endscop
}
