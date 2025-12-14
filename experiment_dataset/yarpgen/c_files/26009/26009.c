/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 16513108400028589588;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 ^= (((((65535 - var_15) ? (16513108400028589592 * var_3) : ((min(1621344230, -28))))) - ((min(1125899898454016, (((var_5 ? var_13 : var_2))))))));
                    var_18 = ((var_11 ? ((var_4 ? (103 == 6237049730153977408) : 63180)) : (65529 & -138819739)));
                }
            }
        }
    }
    var_19 = -33;
    var_20 = (((~-4758982578752025275) == ((((((-60 ? 1933635673680962034 : 19502))) || (var_0 != 52630))))));
    #pragma endscop
}
