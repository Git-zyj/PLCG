/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = var_1;

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_12 ^= ((var_8 ? (!2687093487698079458) : ((((((arr_4 [i_0] [i_0]) | var_8))) ? (var_6 * var_6) : (min(15759650586011472152, var_2))))));
            var_13 *= arr_0 [i_0];
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_14 = ((~((min(var_9, 2687093487698079458)))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_15 [i_0] [14] [i_3] [i_4] = ((max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]), 15759650586011472143)) * (min((arr_8 [i_3]), 0)));
                        var_15 += ((((max((arr_13 [i_2] [2] [i_3] [i_4] [i_3]), (arr_13 [i_0] [i_0] [1] [i_0] [i_0])))) ? (((~(arr_14 [i_0] [i_2])))) : (min(((var_10 % (arr_12 [i_0] [i_3] [i_3]))), (((15759650586011472158 == (arr_0 [i_0]))))))));
                        var_16 |= var_10;
                        var_17 = (max(var_17, 15759650586011472164));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_18 += var_5;
            arr_20 [i_0] [1] = ((((1 >> (17163091968 - 17163091960))) * ((((((var_9 << (14922621518916811626 - 14922621518916811626)))) <= (arr_16 [10] [i_0] [i_0]))))));
        }
        var_19 ^= (((((var_2 ? (max(var_1, 65)) : var_4))) ? 1 : 0));
    }
    var_20 = var_4;
    #pragma endscop
}
