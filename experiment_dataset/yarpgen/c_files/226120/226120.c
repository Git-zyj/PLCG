/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((0 ? 18446744073709551604 : 18446744073709551611)) | 0));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (min(var_14, 18446744073709551614));

                for (int i_2 = 4; i_2 < 8;i_2 += 1)
                {
                    var_19 = ((max(18446744073709551615, 31204)));
                    var_20 = (max((((((79 ? 24272 : 5))) ? -831034079 : 18446744073709551615)), 8796093022206));
                    var_21 = (min(4294967295, (max((max(-105, 8)), (~11924174881934491221)))));
                }
                arr_8 [i_0] [8] = (((((0 + (min(var_8, 15499051478138220341))))) ? (((0 ? 18446744073709551611 : var_12))) : -11));
            }
        }
    }
    #pragma endscop
}
