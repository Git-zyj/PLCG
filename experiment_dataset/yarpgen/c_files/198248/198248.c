/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= 9988;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((((((arr_4 [i_1]) << (((min(1804105987, 123)) - 110))))) ? ((((((arr_2 [i_1]) ? 799498134805936580 : 67076096)) | var_6))) : ((14327018560693944254 | ((((arr_5 [i_0]) / 3136)))))));
                var_15 = ((((var_1 >> ((((-799498134805936581 ? var_13 : 1)) - 2139326841)))) ^ var_1));
                arr_8 [i_1] [i_1] = (((((arr_1 [i_0]) ? 247065857 : ((-(arr_6 [i_1] [i_1] [1])))))) ? ((42 ? (arr_6 [i_1] [i_1] [i_1]) : (((arr_0 [i_0]) ? (arr_0 [i_1]) : (arr_6 [i_1] [i_1] [i_1]))))) : var_5);
                var_16 = (min((max(var_12, ((var_0 ? 121 : var_13)))), ((((var_8 / 1673992818) <= (((var_4 ? 109 : var_12))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_17 = (max(var_17, ((((var_11 - var_7) ^ (((((var_13 > 1244170414) == (arr_9 [i_2]))))))))));
        var_18 = (min((((67076096 != -3137) ? (var_1 || -7) : 120)), (arr_5 [i_2])));
        var_19 = ((1920 ? (((~((-(arr_4 [i_2])))))) : var_2));
    }
    #pragma endscop
}
