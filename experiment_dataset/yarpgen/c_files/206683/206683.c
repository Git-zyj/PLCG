/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (min((((!(arr_3 [7])))), (((arr_5 [i_1 - 1] [i_1 - 1]) ? var_0 : (arr_5 [i_1] [i_1 - 3])))));
                arr_6 [i_0] = (((arr_5 [i_0] [i_1]) ? (arr_2 [i_1 - 2]) : ((max((max(1, (arr_3 [i_1]))), 207)))));
                var_15 = (min(var_15, ((max((max(10, (min(4251494270651545618, 255)))), ((var_6 ? (3 * 0) : (max(var_5, 7)))))))));
            }
        }
    }
    var_16 = 236;
    #pragma endscop
}
