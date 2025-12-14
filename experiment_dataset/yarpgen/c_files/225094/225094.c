/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(var_0, var_7))) & (((max(var_5, var_6)) + ((min(52032, (-127 - 1))))))));
    var_13 = 9824952604188969853;

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_14 = ((-(((((!(arr_4 [i_0] [i_0])))) << (var_8 - 29066)))));
                        var_15 = (min(((max((max(var_3, var_8)), var_6))), (var_6 - var_0)));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_16 = (min(((((arr_13 [i_0 + 3]) ? var_4 : (arr_13 [i_0 + 3])))), (max((min(var_11, var_10)), ((min(var_4, var_2)))))));
            var_17 = ((-var_4 ? (max((((var_7 ? 115 : var_8))), var_11)) : var_3));
            arr_15 [i_0] [i_0 - 3] = (((var_8 != -113) ? ((((-115 ? var_10 : (-127 - 1))) & (((var_0 * (arr_7 [i_0] [i_0] [i_0])))))) : ((((((-127 - 1) + 2147483647)) >> (36994 - 36968))))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_18 = 536870912;
            var_19 = ((~((var_8 ? 113 : (arr_10 [i_0] [i_0 - 2] [i_0 - 2])))));
            var_20 = (((((+((max((arr_4 [i_0] [i_5]), var_9)))))) ? ((((max(var_0, (arr_2 [i_0])))) ? -var_6 : (((var_5 + 2147483647) >> (((arr_8 [i_0] [i_0] [i_0]) - 8773)))))) : var_4));
            arr_19 [i_5] = ((min(var_7, ((var_5 ? var_6 : var_8)))) + ((255 << ((((var_4 ? (arr_10 [i_5] [i_5] [i_0 - 3]) : var_4)) - 3915855179)))));
        }
    }
    var_21 = ((((min(((var_2 ? var_7 : var_10)), ((max(var_2, var_6)))))) ? (((var_10 & 4326996883702090841) - (((-116 ? 535822336 : 65535))))) : ((min(((369239442 ? var_0 : var_9)), var_5)))));
    #pragma endscop
}
