/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_7 - var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] |= (min(1, ((((~var_6) >= 2303591209400008704)))));
                var_14 *= (((arr_2 [9] [i_1]) - ((max(2094338001, (arr_3 [0] [0] [i_1]))))));
                var_15 *= max((((2303591209400008704 * -2094338001) <= ((16143152864309542922 ? (-9223372036854775807 - 1) : 0)))), (((min(-2074273990, 2322)) == (!16143152864309542931))));
            }
        }
    }
    var_16 = ((((((2303591209400008704 ? 125 : 2303591209400008704))) ? var_9 : var_1)) % ((((!2303591209400008704) ? var_10 : var_4))));

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_17 = 9;
        arr_9 [i_2] = (((((((arr_1 [i_2]) <= var_1)))) == (max((~9223372036854775807), -2074274012))));
    }
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        var_18 ^= ((((16143152864309542922 ? (0 ^ var_12) : -2022134353)) % -2094337987));
        var_19 &= (max(57844, 239));
        var_20 = (max(var_20, (((((((((min(-15924, var_0)) + 2147483647)) >> (min(9, 2094337991))))) ? (max(1, 16143152864309542922)) : ((((var_3 + 2147483647) << (((arr_3 [i_3] [i_3] [0]) - 223))))))))));
        var_21 *= (arr_0 [1]);
    }
    #pragma endscop
}
