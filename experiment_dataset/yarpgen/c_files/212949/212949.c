/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_8 [15] [14] [i_0] = (((((45428 ? (arr_1 [i_0] [i_1]) : (arr_1 [i_1] [i_0])))) && (((45442 ? -6608529326696401738 : 20097)))));
                arr_9 [6] [6] = 45429;
                var_19 = ((((min(((20119 ? 45423 : 20097)), ((((arr_1 [i_0] [i_1]) != var_5)))))) ? (((arr_1 [i_0] [i_1]) / 45421)) : 3178066072));
            }
        }
    }
    var_20 = (((((max(3178066071, var_7)) | (var_13 > 1))) == (((min(var_13, ((max(40, -64)))))))));
    var_21 = var_16;
    #pragma endscop
}
