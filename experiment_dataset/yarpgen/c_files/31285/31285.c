/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((1 ? (min(var_8, var_10)) : var_18));
    var_20 = (max((min(4294967295, 1)), 0));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 ^= max(((max(-3737367165112083152, -87))), (min(-87, -9098525250223290886)));
        var_22 = (min((arr_1 [i_0]), (max(3612300589412146637, (60703 && 233)))));
        var_23 = (arr_2 [i_0]);
        var_24 = 3612300589412146637;
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        var_25 = max((arr_3 [4]), ((max(((var_8 ? 86 : var_4)), -1))));

                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            var_26 += 60707;
                            var_27 = (min((min(((min(-82, var_15))), -var_12)), ((((arr_3 [i_2]) ? (86 | -1564721757) : var_4)))));
                            var_28 = ((((min(var_17, -12)) % (arr_6 [i_5]))));
                            var_29 = ((~((((max(var_4, (arr_7 [5] [i_2])))) ? ((max(7, 196))) : -var_4))));
                        }
                    }
                }
            }
        }
        arr_15 [i_1] = (((((((arr_6 [i_1 + 2]) * 0)))) ^ (((!(arr_1 [i_1 - 1]))))));
        var_30 *= var_6;
    }
    #pragma endscop
}
