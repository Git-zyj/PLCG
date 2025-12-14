/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((min(233, (((!(~-2147483647)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = 491710986;
                    arr_8 [i_0] [i_1] [i_2] = ((((max(44141, 2529161445))) ? ((246 ? (arr_5 [i_0]) : (arr_5 [i_0]))) : (((arr_5 [i_0]) ? (arr_5 [i_0]) : 3803256335))));
                    arr_9 [i_2] [i_0] [i_0] [i_0] &= arr_3 [i_0];
                }
            }
        }
    }
    var_13 = ((var_7 + var_3) ? var_4 : ((-var_1 >> (491710961 - 491710935))));

    for (int i_3 = 3; i_3 < 18;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_14 = (max(var_14, (((+((3649793118 ? (arr_11 [i_3 + 1]) : 3803256296)))))));
            arr_16 [i_3] = ((((((arr_15 [i_3 - 3] [i_3 - 2] [i_3 + 1]) ? (arr_12 [i_3 + 1] [i_3 - 2]) : (arr_15 [i_3 - 3] [i_3 - 3] [i_3 - 1])))) ? var_4 : ((3490 ? 62052 : 8))));
            arr_17 [i_4] = ((~((-(arr_14 [i_3 - 1])))));
        }
        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            var_15 += 3490;
            var_16 = (min(var_16, ((((((var_6 ? ((var_6 ? 10524259539323723898 : -4503599149729198717)) : ((var_0 ? (arr_12 [i_3 - 3] [i_3 - 3]) : 7922484534385827703))))) ? ((3803256335 ? 3478 : -5)) : ((max(-1, ((var_9 ? var_5 : 25))))))))));
            arr_20 [i_3] [i_3 - 1] [i_3] = ((((!(arr_10 [i_3 - 3]))) ? 5612496526492260269 : (((((min(5612496526492260270, (arr_18 [i_3] [i_3] [i_5 + 1])))) ? var_1 : (arr_10 [i_3]))))));
            arr_21 [i_3] [i_5] = ((-((var_6 ? (arr_15 [i_3 - 1] [i_3] [i_5 - 2]) : var_3))));
        }
        var_17 += ((((max((~var_10), (arr_12 [i_3 - 2] [i_3 - 1])))) ? -86 : (max(((9666260077594198953 ? (arr_18 [i_3] [i_3] [i_3]) : var_1)), 547177022321561007))));

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_18 ^= -27879;
            arr_24 [i_6] = -8646494732117815446;
            var_19 = (!5);
        }
        var_20 = (max(var_20, (arr_14 [i_3])));
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        arr_36 [i_9] [6] [i_8] [i_9] = (1 & ((7 ? 128 : 17171480576)));
                        var_21 = (max(var_21, (((1 ? ((131071 ? 255 : 10524259539323723898)) : ((max(703833538510541452, 27882))))))));
                        var_22 -= ((((min((arr_10 [i_3 - 1]), var_6))) ? (((arr_29 [i_8] [i_8] [i_8]) ? 1 : 15)) : ((-(arr_10 [i_9])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
