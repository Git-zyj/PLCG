/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((max(var_5, 255))) << (((var_0 - var_4) + 226753121)))) == var_4));
    var_11 = ((((((var_1 && var_5) / ((var_7 ? var_6 : var_3))))) ? var_2 : (var_4 != var_9)));
    var_12 = var_1;
    var_13 &= ((((min(var_5, var_5))) ? (((var_2 == var_5) >> (var_1 - 7636107725438359855))) : ((min(var_4, (min(var_4, var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((max(((max((arr_6 [i_0] [i_1] [i_1]), ((((arr_6 [8] [14] [8]) && var_0)))))), ((((((arr_1 [i_0] [i_0]) ? 4294967295 : var_0))) ? var_1 : ((((arr_0 [i_0] [i_0]) & (arr_0 [i_0] [i_1])))))))))));
                arr_7 [i_0] = (((((arr_4 [15] [i_1] [i_1]) ^ (arr_2 [i_1]))) >> (((!(arr_4 [i_0] [i_0] [i_0]))))));
                var_15 ^= (min((((arr_6 [i_1] [i_1] [i_1]) & var_9)), (((0 ? ((var_1 | (arr_4 [i_0] [i_0] [i_1]))) : var_1)))));
            }
        }
    }
    #pragma endscop
}
