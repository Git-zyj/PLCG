/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_2 % var_6);
    var_16 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (((min((var_12 <= 134209536), ((6400459370549529900 ? var_14 : (arr_9 [i_0] [i_0] [i_0] [i_0]))))) * ((((((((arr_2 [i_1]) / (arr_8 [i_0])))) == (max((arr_8 [1]), 4294967294))))))));
                    arr_10 [i_1] = (((((!(arr_9 [i_2] [8] [i_0] [i_0])))) >> (arr_9 [i_2] [i_2] [i_1] [i_0])));
                }
            }
        }
    }
    var_18 = (((min(1, 1)) * 31191));
    var_19 = (min(var_19, ((-6745050488205742774 < (max((1 / 1547776998), 1125899906842624))))));
    #pragma endscop
}
