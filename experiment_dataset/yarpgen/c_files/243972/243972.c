/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_1 * var_14) ? (var_1 != 14) : (12559630208746193534 ^ 13581814094242385477)))) ? var_2 : ((16917533325330218804 << (((var_0 - var_6) - 8402812474571681198)))));
    var_17 = var_8;
    var_18 = ((13581814094242385477 ? ((var_4 ? var_7 : ((((-735796638 + 2147483647) << 0))))) : ((((!2829) * var_15)))));
    var_19 = (min(var_19, var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 ^= (((max(((0 ? var_15 : var_12)), ((27365 ? 144 : 46))))) ? (((max(var_0, var_9)) & (var_3 | var_4))) : (max((~524287), ((var_2 ? 7912073530691422521 : (arr_1 [17]))))));
                arr_4 [i_0] [i_0] [i_1] = ((((max(((4864929979467166158 ? (arr_3 [i_0] [10]) : 46)), 139))) ? (max(18446744073709551595, 32481)) : 18446744073709551595));
                var_21 ^= (max(((40427 ? 13091 : 159)), (((arr_1 [i_0]) ? 14 : var_8))));
            }
        }
    }
    #pragma endscop
}
