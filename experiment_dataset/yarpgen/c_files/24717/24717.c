/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(59607, var_6))) ? ((((-112 >= 123) ? var_11 : var_10))) : ((var_7 ? (var_8 / -4) : (5929 >= 1)))));
    var_13 *= 3;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((-2897 <= (min(9223372036854775786, 9223372036854775786))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_7 [i_1] [i_0 - 1] [i_0] = (((((((var_6 ? var_2 : 24542)) + (arr_0 [9])))) ? (var_1 - 2) : 5929));
            var_14 ^= ((!24542) < ((-(arr_0 [i_0 - 1]))));
        }
        arr_8 [i_0] [i_0] = (min((arr_6 [i_0 - 1]), 59606));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_15 *= -1270218467;
        var_16 *= (arr_11 [i_2] [i_2]);
        arr_13 [i_2] = ((62639 << ((((((-((min(101, (arr_12 [i_2] [i_2])))))) + 117)) - 10))));
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
    {
        var_17 = (((max((~2899), (-127 - 1))) >= (var_1 || var_7)));
        arr_16 [i_3] [i_3] = ((67 ? (arr_14 [i_3] [i_3]) : 0));
        arr_17 [6] [i_3] = (((((((min(var_5, 2147483647))) ? 62639 : (45 < var_7)))) ? var_6 : ((2 ? (arr_15 [i_3] [i_3]) : ((867371617339465703 ? 6797750763450222470 : 6797750763450222454))))));
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] = var_3;
        var_18 = (min((((((var_11 ? 9223372036854775786 : 1))) ? (-6797750763450222459 / 90) : (arr_19 [i_4 + 1] [i_4 + 1]))), (((((min(var_5, 2226607034))) ? 38 : 186)))));
        arr_21 [i_4] = ((-((2897 ? (max(2068360267, 4051693024313779949)) : 1314086541))));
        var_19 *= (((((((-(arr_14 [i_4] [2])))) ? (arr_18 [i_4 + 1]) : (min(var_1, (arr_18 [i_4]))))) % (((((max((arr_18 [i_4 + 1]), var_8)) != (((var_3 + (arr_19 [i_4] [i_4 + 1]))))))))));
    }
    var_20 = ((((max((min(var_5, var_2)), var_11))) ? (((((2226607034 ? var_3 : 62621)) < ((-6797750763450222475 ? var_11 : var_3))))) : (max(((var_0 ? 160 : var_10)), var_3))));
    #pragma endscop
}
