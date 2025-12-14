/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (13760314717260081943 ^ -3886);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 6;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((-(arr_0 [i_0 + 1] [i_1 - 4]))) - (max(((((arr_4 [i_0] [i_1]) > (arr_1 [i_0])))), (639297063157951220 % var_2)))));
                arr_6 [i_1 - 3] [i_0] = ((-4110263227495962249 ? ((-(min(var_15, 2618609519)))) : (8688463111416218985 * 1)));
                var_17 = (((0 ? 3611568585426419632 : ((var_5 ? (arr_1 [i_0]) : 57)))));
            }
        }
    }
    var_18 = ((((var_15 ? (3568533926 < -1441583363) : (~var_2))) - (((max(0, 7959117916231516564))))));
    var_19 = 1398546164;
    #pragma endscop
}
