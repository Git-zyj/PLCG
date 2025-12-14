/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] = (-24 / 1459021815);
                var_15 *= ((51 ? 520192 : (((1 * 2549135109) - ((35747322042253312 >> (4294447092 - 4294447041)))))));
                var_16 = (((((3 <= 136) >> (-75824113 - 4219143178)))) ? (((((1793715769 << (520192 - 520192))) >> (115 - 114)))) : ((2836063150 ? 262016 : 3797515849)));
                var_17 = (4152377848 >> (((min(-4294447103, 8387584)) - 520185)));
                var_18 = ((-(16059 >= 53024)));
            }
        }
    }
    var_19 = ((-((var_4 ? var_4 : 232))));
    var_20 = ((var_0 > (103 + var_12)));
    var_21 = (-var_13 ^ 4152377848);
    var_22 = 110;
    #pragma endscop
}
