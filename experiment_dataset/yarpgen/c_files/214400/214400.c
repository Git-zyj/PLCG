/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 *= (max(((var_1 ? (arr_5 [i_1 - 3] [i_0]) : (arr_5 [i_0] [i_1 - 1]))), ((var_9 ? 199 : (arr_5 [i_0] [i_1 + 1])))));
                    var_12 = (min(var_12, (((((((((arr_6 [i_2] [i_1]) ? var_5 : 3100321446)) / (arr_7 [i_1 - 2] [i_1 - 1] [i_1 - 1])))) || ((((var_9 & 197) ? (var_1 * 241) : 48))))))));
                    var_13 = (((((~(arr_2 [i_0])))) ? (arr_6 [i_1] [i_2]) : (min((~-31), (arr_6 [i_2] [i_1 - 1])))));
                    var_14 = (((min(var_4, (arr_5 [i_1] [i_0]))) + ((((min(31, 29))) << (((((~13848) + 13876)) - 2))))));
                }
            }
        }
    }
    var_15 = (max(var_15, (((!((min((224 % 2147483647), ((min(var_1, var_2)))))))))));
    var_16 = (min(var_4, ((var_6 ? ((27361 << (((-27362 + 27382) - 7)))) : var_0))));
    var_17 = (max((min((var_4 * 0), ((var_2 ? var_10 : 48)))), (-30873 == -27366)));
    #pragma endscop
}
