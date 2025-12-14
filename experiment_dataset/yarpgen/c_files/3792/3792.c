/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 |= var_6;
                    var_16 ^= 7121580557333977904;
                }
            }
        }
        arr_7 [i_0] = var_1;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_15 [i_0] [i_0] [i_3] = (min((((-42 <= ((-8568178893530573504 ? -8568178893530573478 : var_2))))), (arr_11 [i_3] [i_3])));
                    var_17 = (min(-8568178893530573501, 22385));
                    var_18 = ((((((min(-8568178893530573507, 33))) ? 7306976039794241553 : 1844885045)) < 9187343239835811840));
                    var_19 = ((~(((-4769552701054152312 > (~75))))));
                    arr_16 [i_0] [i_0] [i_0] = 7121580557333977905;
                }
            }
        }
        var_20 = (arr_10 [i_0] [i_0] [i_0]);

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_21 [i_0] [i_0] [i_0] = var_6;
            var_21 ^= var_10;
            var_22 = (max(var_22, (min((var_5 != var_11), (601829967 && 6761279406194527997)))));
        }
    }
    var_23 = (min(var_23, ((max(((var_12 ? (!2349932583) : -var_9)), ((min(181, ((max(107, 66)))))))))));
    #pragma endscop
}
