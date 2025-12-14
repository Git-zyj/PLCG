/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_12 ? (max((!-1027766989027079597), (~var_14))) : (~1)));
    var_20 = (max((((((min(var_10, var_3))) ? (min(var_17, var_14)) : ((min(1, 1)))))), -1027766989027079575));
    var_21 = (((((~((var_9 ? var_8 : var_3))))) ? ((max(-var_5, (max(var_1, var_2))))) : (max(((25484 ? -1027766989027079623 : 1)), (((var_7 ? var_11 : var_2)))))));
    var_22 = min(var_14, (((((var_11 ? var_5 : var_12))) ? ((var_6 ? var_9 : var_11)) : var_6)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_23 = ((((((max((arr_1 [i_0 + 1] [i_0]), (arr_1 [i_0] [i_0]))) ? (arr_5 [9] [9]) : ((((arr_1 [i_0] [i_0]) != (arr_0 [i_0] [i_0]))))))) ? ((max(152440094, (max((arr_1 [12] [i_0]), (arr_0 [i_0] [i_0])))))) : (((arr_0 [i_1] [i_0]) ? (arr_2 [i_0]) : 1))));
                arr_6 [i_0] = ((+((((((arr_2 [i_0]) ? (arr_3 [i_1] [13]) : (arr_2 [i_0])))) ? ((min((arr_0 [1] [i_0]), (arr_1 [i_0 - 1] [i_0])))) : ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))));
                var_24 = ((+(((min((arr_1 [i_0] [i_0]), (arr_1 [i_0 + 1] [i_0]))) ? ((max((arr_5 [i_0 + 1] [i_0 + 1]), (arr_5 [i_1] [i_0 - 1])))) : ((min((arr_5 [i_1 + 1] [i_1 + 1]), (arr_3 [i_0 - 1] [i_0 - 1]))))))));
                arr_7 [i_0] = (min((max(((min((arr_0 [1] [i_0]), (arr_2 [i_0])))), 1314563983160643311)), ((((min((arr_3 [i_0 - 1] [1]), (arr_5 [i_0] [i_1])))) ? (((!(arr_5 [i_1] [3])))) : (((!(arr_5 [i_0 - 1] [i_0 - 1]))))))));
            }
        }
    }
    #pragma endscop
}
