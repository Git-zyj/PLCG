/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -106;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_19 = (max((max((min(var_5, var_10)), (((var_1 ? 32745 : var_7))))), (~0)));
        arr_2 [i_0] = ((((arr_0 [i_0 + 1]) & (arr_0 [i_0 + 1]))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_20 += (arr_8 [i_2] [i_1]);
            var_21 = (arr_4 [i_1] [i_1]);
            var_22 = ((!(arr_4 [i_2] [i_1 - 1])));
            var_23 |= (((((-(((arr_5 [i_1] [i_2]) ? 4528179604747804278 : 5220452103869523086))))) ? ((min(((((arr_5 [i_1] [i_2]) == 8986021471353661619))), ((var_6 ? 308676996 : var_11))))) : -5246509121004642458));
            var_24 = (max(5246509121004642455, (min(((13271344884786079851 ? 1638351002126141383 : 16611289792193558814)), -436113236266299028))));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            var_25 = (arr_9 [i_1]);
            var_26 = (min(var_26, (((((1 ? (arr_10 [i_1] [2] [i_1]) : 127)) | (var_1 | var_15))))));
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        var_27 = arr_4 [i_1 + 1] [i_3 + 1];
                        var_28 = arr_4 [i_5] [i_4 - 3];
                        var_29 = ((~((11578064868849372508 - (arr_16 [i_3])))));
                    }
                }
            }
        }
        var_30 = (max(((((var_6 & (arr_7 [4]))))), (((((-8986021471353661620 ? 18446744073709551615 : 1))) ? (-219566504 + var_3) : (arr_19 [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1])))));
    }
    var_31 = (((max(var_10, var_14)) / (~var_8)));
    #pragma endscop
}
