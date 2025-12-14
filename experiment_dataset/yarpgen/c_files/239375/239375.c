/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_10 ? var_0 : ((max(var_2, (max(1, 33423360)))))));
    var_17 = (var_11 & var_8);
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = max(1, 193);
                var_20 += ((((min(((((arr_4 [i_0] [i_0] [i_1]) >= var_0))), (max(4294967295, var_13))))) ? (((((5931265062732754921 ? 193 : 2357068802))) ? ((45118 ? 33423360 : 4261543936)) : (-8420439015285648788 <= 1584470676551380004))) : (((22276 ? (arr_5 [i_0]) : (arr_0 [i_1]))))));
                var_21 -= ((((var_7 ? var_2 : var_12))) + (min(1057512250, (arr_3 [i_0] [i_0] [i_0]))));
                var_22 = (max(((min((max((arr_3 [i_0] [i_0] [i_0]), 29128)), ((max((arr_4 [i_0] [i_0] [i_0]), (arr_1 [i_0]))))))), ((-5931265062732754922 ? (min(var_6, 1)) : 165))));
            }
        }
    }
    #pragma endscop
}
