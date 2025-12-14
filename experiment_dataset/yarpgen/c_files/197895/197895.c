/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = var_8;
                arr_6 [i_0] [i_1] |= (max(-1010197589, -15588));
                arr_7 [i_1] = ((-998821611 + ((var_0 ? 1871711172 : (arr_0 [i_0])))));
            }
        }
    }
    var_12 = ((var_1 >> ((((max(2170682305, 2170682328))) ? (min(0, var_4)) : 2097151))));
    var_13 = (((max(var_9, ((160 ? 0 : 1677430049)))) >> (!12260697618976662064)));
    #pragma endscop
}
