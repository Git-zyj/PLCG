/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, -434694934));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((arr_3 [i_0] [i_0] [i_1]) ? (arr_0 [i_0] [i_1]) : (((((arr_0 [i_0] [i_0]) || -56)))))) ^ (((((max(5, 1))) << (arr_3 [i_0] [i_1] [i_0]))))));
                var_15 -= ((((max(((7250369136071174443 ? var_12 : 11136701700369633097)), (arr_1 [i_1])))) ? (((max(((-10 && (arr_0 [1] [1]))), ((!(arr_2 [i_1]))))))) : ((0 / (arr_4 [i_0] [i_1])))));
                var_16 = (arr_3 [i_0] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
