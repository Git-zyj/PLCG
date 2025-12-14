/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((var_9 ? var_9 : var_10))) ? ((3738982837060544255 ? 4294967287 : var_1)) : (((3738982837060544269 ? var_5 : 11)))))) ? ((((((-3738982837060544256 ? 255 : -3738982837060544256))) ? 348277547 : 1))) : (((((23966 ? -3738982837060544261 : 3738982837060544234))) ? ((3738982837060544238 ? -3738982837060544269 : var_1)) : (((32767 ? var_6 : 243195711))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (((((((((arr_3 [i_0]) ? var_6 : -32763))) ? ((var_9 ? -32768 : var_1)) : ((((arr_4 [i_0] [i_0]) ? (arr_1 [i_0]) : var_7)))))) ? ((((((-3738982837060544244 ? -32757 : -3738982837060544265))) ? 1239100724 : ((32761 ? 30 : 23950))))) : (((((var_7 ? -32 : 1048575))) ? ((((arr_5 [i_0]) ? (arr_3 [11]) : var_6))) : ((32767 ? 32771 : 33175))))));
                arr_6 [i_0] = (((((((((arr_0 [i_0]) ? 268304384 : var_9))) ? (((arr_4 [i_0] [9]) ? var_1 : (arr_4 [i_0] [i_1 + 1]))) : ((((arr_5 [i_0]) ? var_7 : var_7)))))) ? ((((((var_9 ? var_5 : (arr_2 [i_0] [i_0])))) ? (((arr_5 [i_0]) ? (arr_5 [i_0]) : 3738982837060544221)) : (((var_0 ? -23967 : var_10)))))) : (((((4051771584 ? (arr_0 [2]) : 1))) ? (((var_7 ? -3738982837060544254 : (arr_5 [i_0])))) : ((var_9 ? 114 : var_12))))));
            }
        }
    }
    #pragma endscop
}
