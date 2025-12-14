/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_5 ? ((var_1 ? 281474976710655 : 0)) : (((var_6 ? var_0 : var_8)))))) ? ((var_2 ? var_13 : var_1)) : var_11));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_14 [i_2] [i_2] [i_2] [i_0] = (((((var_3 ? 4192204912811999839 : 65535))) ? (((30066 ? -100 : -1))) : (((((3733588903 ? 1 : (-127 - 1)))) ? (arr_13 [i_0 - 2]) : ((((arr_13 [i_2]) ? var_3 : (arr_1 [1]))))))));
                            var_20 = ((((((((6291456 ? 2 : -7))) ? -1 : ((-1 ? 1021444234 : 1289814210))))) ? 65531 : 1213545750));
                            var_21 = (((((4856488557596068322 ? 3081421546 : 0))) ? ((1945389200 ? 12085013670065920990 : 0)) : (((0 ? (((var_9 ? (arr_12 [i_0 - 2] [i_0 - 2] [i_2] [i_0 - 2] [i_0 - 2]) : (arr_10 [8] [i_1] [8])))) : ((100663296 ? var_18 : (arr_12 [i_0] [11] [11] [19] [i_3]))))))));
                        }
                    }
                }
                arr_15 [i_1] [i_0] = (((((18446744073709551614 ? 5287649920604699352 : (-127 - 1)))) ? ((18446744073709551615 ? var_1 : (arr_10 [i_0] [i_0 + 1] [i_0]))) : ((1213545750 ? (arr_10 [i_0] [i_0 - 4] [i_1]) : (arr_10 [i_0] [i_0 - 4] [i_0])))));
                var_22 *= (((((0 ? 2946581370607364610 : 134217727))) ? ((-25147 ? var_1 : var_4)) : (((4027275715 ? 0 : 175259368)))));
            }
        }
    }
    #pragma endscop
}
