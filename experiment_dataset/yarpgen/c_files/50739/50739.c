/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_11 ^= (((arr_0 [i_0] [i_0]) >= (((!(arr_0 [3] [i_1]))))));
                var_12 = 98;

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_13 = (max(var_13, (((-4616748291895771436 ? 3322624037 : (arr_3 [i_1 + 3] [12]))))));
                        var_14 = (((3322624044 * 92) != (((var_8 ? 164 : (arr_1 [i_1] [i_1]))))));
                    }
                    arr_11 [i_0] [i_1] [i_1] [i_0] = 4294967295;
                    arr_12 [i_1] [i_1] = arr_1 [i_0] [5];
                }
                var_15 += (arr_10 [i_1] [i_1 + 3] [10] [i_1] [i_1 + 4]);
                var_16 ^= ((((3949350215792490139 ? (arr_2 [10] [i_1 + 1] [10]) : (arr_2 [14] [i_1 - 1] [14]))) >> (min((3322624044 | 4294967289), (((!(arr_9 [4]))))))));
            }
        }
    }
    var_17 = var_8;
    var_18 = (min(((min(-var_0, var_9))), 14497393857917061459));
    #pragma endscop
}
