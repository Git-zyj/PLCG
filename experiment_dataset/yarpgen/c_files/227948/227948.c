/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max(var_12, var_11);
    var_14 = ((((((var_0 ? 4988 : var_5)) >= ((60548 ? var_2 : -62041578)))) ? ((((((var_11 ? var_1 : -94)) + 2147483647)) << ((((var_7 ? var_6 : 60548)) - 866053824)))) : (2541700528139895331 && 60548)));
    var_15 = ((var_10 < ((((var_8 && var_3) > var_8)))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = ((((((((arr_3 [i_0]) ? var_4 : 18)) <= (((var_11 || (arr_4 [i_1] [i_0] [i_1]))))))) / (24576 ^ -17443)));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_16 = (arr_0 [i_0]);
                        arr_11 [i_1] [i_1] = (min((((var_3 | -484171884) ? ((((arr_0 [i_2]) && var_4))) : 4988)), ((min(((((arr_0 [i_3]) != (arr_8 [i_0 - 2] [1] [1])))), 22364)))));
                        var_17 = (min((((-1396720133 || (arr_5 [i_1])))), ((-2579318985392947392 ? 60547 : ((-83 ? 4987 : 16248))))));
                        var_18 = (max(((((((arr_2 [i_3] [i_2]) ? (arr_2 [i_2] [i_2]) : 824710485))) | (arr_9 [i_3] [i_0 - 3] [i_0 + 1] [i_0 + 2] [i_0]))), ((-(arr_4 [i_1] [i_2] [i_2 - 1])))));
                    }
                }
            }
            arr_12 [i_0 - 3] [1] |= (((((arr_0 [i_0]) * (!var_11))) * (!60538)));
            var_19 |= 4983;
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_16 [i_0 - 2] [i_4] = ((((13 && -2147483620) || (!var_0))));
            arr_17 [i_4] [i_4] [i_4] = (arr_3 [i_0]);
            var_20 = (((((arr_13 [i_0 - 2] [i_0 - 1] [i_0 - 3]) ? (arr_13 [i_0 - 3] [i_0 + 2] [i_0 + 1]) : (arr_7 [i_0 - 1] [i_0 - 3]))) != ((var_12 - (arr_7 [i_0 - 1] [i_0 - 3])))));
        }
        var_21 = (max(var_21, (arr_7 [i_0] [i_0])));
        arr_18 [i_0] [i_0 - 2] = ((!((max(var_1, ((4294967284 ? 60578 : var_2)))))));
    }
    #pragma endscop
}
