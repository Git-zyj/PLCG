/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~20085);
    var_12 += ((((!(((var_5 ? 393640161 : 45450))))) ? (max(-943735003, (max(-886502566, var_10)))) : -14405));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = var_8;
        var_13 = ((-(arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = (((((((14405 ? 4294967286 : 9)) | (arr_4 [i_4] [i_0])))) || (18446744073709551615 * 87)));
                                arr_15 [i_2] [i_3] = var_10;
                            }
                        }
                    }
                    var_15 = (max(var_15, ((((((((min((arr_6 [i_0] [4] [i_2 - 1]), (arr_11 [i_0] [i_1] [i_0] [i_0] [i_2 - 1])))) >= 4294967288))) - (arr_9 [i_0] [i_0] [i_2 - 1] [i_0]))))));
                    var_16 = ((max((arr_5 [i_2 - 1] [i_1] [i_0]), var_6)));
                    var_17 = (max(var_17, (((((1767570777286678613 ^ (arr_14 [2]))) / (arr_10 [2]))))));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_18 = (arr_17 [i_5]);
        var_19 += arr_17 [i_5];
    }
    var_20 = ((!(!var_8)));
    #pragma endscop
}
