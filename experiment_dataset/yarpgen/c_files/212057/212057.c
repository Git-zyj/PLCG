/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = (((!-1933714782) ^ ((((-(arr_6 [i_0]))) | (((var_5 && (arr_2 [15] [i_0]))))))));
                var_20 = (min(var_20, var_4));
                var_21 = ((~((~(arr_2 [i_1 + 1] [i_1])))));
                arr_7 [i_0] = (min((((!-1933714774) ? var_15 : (min(18147707990999752022, 134)))), (((!(!-1933714774))))));
                var_22 = (+-1933714773);
            }
        }
    }
    var_23 = (max(var_23, ((min(((((var_4 || var_11) >> (((min(var_17, -1933714780)) + 1933714799))))), var_18)))));
    #pragma endscop
}
