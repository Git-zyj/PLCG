/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_21 = (min(var_21, var_17));
                    var_22 ^= (((--23701) ? (((((1900486710 ? 1900486710 : -30207))))) : (arr_1 [i_0])));
                    var_23 = (max(var_23, 17109));
                    var_24 = (max((min(30207, (min(119, 15)))), ((min((arr_3 [i_2] [1] [1]), (var_10 & 218))))));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_25 = (min(var_25, ((((((-(arr_10 [i_0] [i_0 + 1] [i_3])))) ? var_13 : var_11)))));
                    arr_12 [i_3] [i_1] [i_3] |= 0;
                    var_26 = ((((-(arr_4 [i_0]))) ^ (((-(((!(arr_10 [i_0] [i_1] [i_0])))))))));
                }
                var_27 -= ((~(arr_3 [i_1] [i_1] [i_1])));
                arr_13 [1] [i_1] [1] |= -var_17;
            }
        }
    }
    var_28 -= (min(9, ((min((-120 || 202), 2394480573)))));
    var_29 = var_1;
    #pragma endscop
}
