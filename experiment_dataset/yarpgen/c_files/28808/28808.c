/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1684499586;
    var_15 = ((var_9 + ((var_11 + (6877033370220797164 - var_9)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((((((arr_1 [i_0] [i_0]) != (arr_2 [10] [i_0]))))) / ((-2082784589 ? (arr_0 [i_0]) : var_2))))) ? ((var_6 - (max((arr_1 [i_0] [i_0]), var_8)))) : ((-981501409352379104 ? (((-(arr_1 [i_0] [i_0])))) : var_12))));
        arr_4 [i_0] = ((!(max(((var_5 || (-9223372036854775807 - 1))), ((var_6 || (arr_2 [i_0] [i_0])))))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_16 = ((((((((arr_7 [i_1 + 1]) + 2147483647)) << (((-9223372036854775788 - -9223372036854775797) - 9))))) ? -9223372036854775806 : (-472339056 + var_2)));
        var_17 = (~(min(-2304119381603041863, var_1)));
        var_18 = (arr_5 [1]);
    }

    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_13 [i_2] = -3166760438937364329;
            var_19 = ((-(min((var_0 && var_1), var_11))));
        }
        arr_14 [i_2] = ((((((arr_11 [i_2 + 1]) == (arr_8 [i_2 + 1]))))) % (max((max(var_13, (arr_5 [i_2 + 1]))), -5642058980731155638)));
        arr_15 [i_2] = (((!var_4) + (((((-2191520125257256089 > var_6) != (min((arr_11 [i_2 + 1]), var_7))))))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_20 ^= ((var_6 && -2010812626) - var_13);
        var_21 = ((4140565855367989900 == var_0) - (((-9223372036854775807 - 1) | (arr_16 [i_4]))));
        arr_19 [i_4] [1] = min((min((~-6877033370220797165), (arr_11 [i_4]))), var_5);
    }
    var_22 &= min(3166760438937364331, 322224336375497185);
    #pragma endscop
}
