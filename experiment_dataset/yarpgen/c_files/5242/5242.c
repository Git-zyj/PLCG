/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = ((var_2 ? 127 : var_15));
                var_17 = min((max(49692, 3983249233534936150)), 30);
                var_18 = (!var_3);
                var_19 = (max(0, var_10));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_9 [2] [i_0] [i_2] [i_1 + 1] = (((((var_15 ^ (((min(-31, -28))))))) ? (((max(32767, (-32767 - 1))))) : (max(((-(arr_1 [i_0] [i_0]))), var_8))));
                    arr_10 [i_1] [i_1] [1] [i_1] = (min((!var_9), (((((arr_8 [i_2] [i_2] [i_2]) ? 20383 : (arr_3 [i_0] [i_1] [i_2]))) << (var_1 - 4328213042515019117)))));
                    var_20 = ((((min(17260216993466568707, 3601406238))) ? (((min(12000284312613165752, (arr_2 [i_0] [i_1] [i_1]))) / (6446459761096385863 && 49691))) : var_5));
                }
            }
        }
    }
    var_21 = ((((3093431777037792642 ? -9 : 1006632960)) >> ((((31400 ? ((var_8 ? var_0 : var_8)) : -1)) - 382798613))));
    var_22 = var_15;
    var_23 = ((var_5 & (((-2007759580 || (((var_14 ? 24576 : var_3))))))));
    #pragma endscop
}
