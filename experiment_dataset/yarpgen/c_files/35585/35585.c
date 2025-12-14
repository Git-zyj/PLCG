/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_16, (((!(0 - 6745202334314076))))));
    var_21 = (((-29832 + 2147483647) << ((((((min(var_17, (max(var_16, 0))))) + 106)) - 9))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = (((min(var_9, (((arr_0 [i_0 - 3] [i_0 - 3]) % 18439998871375237535)))) - 1204246590582875152));
                    var_22 &= ((((var_2 << (var_13 - 6552836460671376290))) & var_4));
                }
            }
        }
    }
    var_23 ^= ((((var_10 < ((max(1, 28672)))))) ^ (((29346 ^ -1319) / (-28694 & 67))));
    var_24 = var_18;
    #pragma endscop
}
