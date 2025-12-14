/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 -= (~((min((arr_1 [i_0] [4]), (arr_1 [i_0] [i_0])))));
                var_13 = (((((max(var_4, (arr_5 [17] [i_0]))) << (((!(arr_1 [i_0] [i_0])))))) != var_10));
                var_14 = (min(var_14, ((min((~var_0), var_3)))));
                var_15 = ((var_8 ? (!var_10) : (arr_3 [i_1])));
                arr_6 [i_1] [i_0] = (min((min(var_5, -3749556441677479519)), ((min(var_9, (arr_5 [i_0] [i_0]))))));
            }
        }
    }
    var_16 = (!var_10);
    #pragma endscop
}
