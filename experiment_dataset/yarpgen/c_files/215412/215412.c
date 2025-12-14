/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (min((max(((var_8 ? var_12 : var_4)), var_9)), (max(((var_16 ? var_17 : var_3)), var_3))));
                var_20 = (max(var_20, ((max(0, (max(((var_2 ? var_10 : var_0)), ((max(var_17, var_5))))))))));
                var_21 = (((((((max(var_5, var_14))) ? ((var_10 ? var_11 : 1)) : var_4))) ? (1 / 72055395014672384) : ((((max(var_5, var_13))) ? var_11 : (((var_15 ? var_8 : 1)))))));
                var_22 = (((((((max(var_13, var_5))) ? (var_17 - 0) : var_12))) ? ((var_11 ? ((var_11 ? var_15 : 4041209979322186613)) : ((max(var_0, var_7))))) : (((((max(var_17, 1))) / ((max(var_17, var_4))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_23 = ((((var_9 && ((min(var_1, 108))))) ? (min(((min(1, var_8))), (max(var_7, 219129852)))) : (((((var_12 ? var_6 : var_6)) >> ((((max(var_13, var_13))) + 37)))))));
                var_24 = ((((min(779234366, 4294967295))) ? var_7 : 255));
                var_25 = (((((var_16 ? ((var_16 ? var_2 : var_1)) : ((var_2 ? var_5 : var_0))))) ? ((var_17 ? -2000342152 : ((0 ? -706715436 : var_14)))) : (((var_14 ? 1 : 1)))));
                var_26 = ((var_9 ? 8191 : (max(var_9, ((var_6 ? var_10 : var_11))))));
                var_27 ^= ((max(var_5, ((max(var_13, var_10))))));
            }
        }
    }
    #pragma endscop
}
