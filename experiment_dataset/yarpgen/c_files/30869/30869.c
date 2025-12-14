/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_8;
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [5] &= ((~(((var_9 <= (arr_2 [i_1 - 3] [i_1 - 3] [i_1]))))));
                arr_5 [i_0] [i_0] = (((((24 ? var_1 : (arr_2 [i_1 + 2] [i_1 - 2] [i_1 - 3])))) || ((((-62 + 2147483647) << (((((arr_0 [i_1 + 2]) + 931952643)) - 29)))))));
                var_12 -= ((5309489829535182904 ? (((max((-127 - 1), var_1)))) : (max((((arr_2 [7] [i_1] [i_1 - 2]) ? var_4 : 10504682623126282622)), ((min((arr_2 [i_0] [i_0] [i_0]), var_9)))))));
                arr_6 [i_0] [i_1] = var_5;
            }
        }
    }
    #pragma endscop
}
