/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] = (min(4611686018427387903, (arr_3 [i_0] [i_0] [i_1])));
                arr_5 [i_0] [i_1] &= (max((((min(13835058055282163710, -268603964)) * var_0)), ((((((13835058055282163705 ? 0 : -6764132639900679992))) ? (((!(arr_0 [i_1])))) : (arr_0 [12]))))));
                var_21 = (min(13835058055282163712, ((min(var_7, 268603955)))));
            }
        }
    }
    #pragma endscop
}
