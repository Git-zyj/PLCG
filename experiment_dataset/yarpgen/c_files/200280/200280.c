/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-26080 || -1513793833);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (((((((((arr_1 [i_0] [6]) + -2011114639))))) / (((9770255044023673443 * 7) - var_10)))))));
                    var_19 *= ((((((var_4 <= (arr_6 [i_0] [i_0] [i_0] [4])))) << (((var_3 & 6194426052403238239) - 1351258109)))));

                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        var_20 = (((((arr_1 [i_0] [i_0]) % 184))));
                        arr_12 [i_0] [i_0] = (-24402 / var_16);
                    }
                    arr_13 [i_0] [i_0] [i_0] = (((((var_2 & 0) & (((arr_3 [8]) | var_15)))) == ((((arr_5 [i_0] [i_0] [i_0]) << (var_2 - 186))))));
                    arr_14 [1] [i_0] [1] = (((288230376151711743 / -774970745) & var_4));
                }
            }
        }
    }
    #pragma endscop
}
