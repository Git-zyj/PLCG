/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((max(((4704224085053317580 + (-9223372036854775807 - 1))), var_9)) | var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((((arr_0 [i_1]) ? ((max(4061851766, 73))) : ((var_8 ? var_11 : 61440))))) ? (((((max((arr_4 [i_0]), var_4))) || ((max(var_2, (arr_4 [i_1]))))))) : ((min((((!(arr_2 [14] [i_0] [i_1])))), (arr_2 [12] [i_1] [i_1]))))));
                arr_7 [i_0] [i_1] [i_0] = (((arr_0 [i_0]) < ((1 ? 2968029751 : ((61433 ? 27838 : 4061851766))))));
            }
        }
    }
    var_15 = var_11;
    #pragma endscop
}
