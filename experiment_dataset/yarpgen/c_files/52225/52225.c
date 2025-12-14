/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((-var_0 || (((691007880 ? var_7 : 3060050979)))))));
    var_18 = ((var_12 ? (((2147483647 ? 33 : 3674219756355505118))) : ((-((18374686479671623680 ? var_12 : 448625301))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 += (min((!9223372036854775680), (((arr_3 [i_0]) || (arr_3 [i_0])))));
                    arr_10 [5] = (2424722112259766241 ? ((((-1 && 358778340453938294) ? -8192 : (arr_2 [i_2])))) : 4255518111);
                    var_20 = (max(var_20, (((53337 ^ ((536870880 ? (var_6 + 34070) : (((16022021961449785373 ? var_3 : 511))))))))));
                }
            }
        }
    }
    #pragma endscop
}
