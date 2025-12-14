/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_9 [i_1] [i_1] = (max(((((!(arr_1 [i_0]))) ? 117 : (((arr_0 [i_0]) / var_7)))), (((!(((1 ? (arr_2 [i_0]) : 0))))))));
                    arr_10 [i_0] [i_0] [i_0] [12] |= (((((127 ? 0 : ((1 ? 0 : 65501))))) ? (min(((((arr_2 [i_1]) ? 24 : (arr_1 [1])))), (((arr_8 [1] [1] [1]) ? (arr_0 [12]) : 12138517585837070597)))) : var_4));
                }
                var_12 ^= 65501;
            }
        }
    }
    var_13 &= var_3;
    #pragma endscop
}
