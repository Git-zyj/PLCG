/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_1] = (((6035967158833446856 >> (var_6 - 35337))));
                    var_19 = (((((((min(var_15, (arr_2 [i_1])))) ? 4294967278 : 6035967158833446856))) && -6035967158833446856));
                }
            }
        }
    }
    var_20 = (min(var_20, (((((((min(var_8, 37812)))) * var_1))))));
    var_21 = ((((min(12410776914876104760, 12410776914876104759))) ? var_14 : (min(3, -26558))));
    #pragma endscop
}
