/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = var_4;
                    arr_10 [i_0] = (((((4611686018360279040 / (arr_2 [i_2])))) ? 32 : ((-((34 >> (12069077802897484862 - 12069077802897484842)))))));
                }
            }
        }
    }
    var_17 = (min(var_17, (((((((((67 << (var_2 - 111)))) ? var_9 : ((-(-127 - 1)))))) ? (max((var_0 || var_12), var_4)) : (((((max(var_10, var_6))) ? ((min(var_12, var_13))) : ((max(var_8, var_13)))))))))));
    var_18 = (max(var_18, (((var_4 == ((((var_13 > var_3) << (((~var_11) - 1371260541))))))))));
    #pragma endscop
}
