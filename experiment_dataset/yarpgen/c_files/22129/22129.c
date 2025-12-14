/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((((max(var_18, var_3))) ^ ((-(3221225472 && 1)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [7] = 4080522066097843897;
                var_21 = ((255 ? ((-(max(7722475672712651035, 4199949634)))) : (((-(arr_1 [i_1]))))));
                arr_7 [1] [i_1] [i_0] = (min(((-7722475672712651024 % ((max(2076140966, 29970))))), (arr_4 [i_1] [4])));
            }
        }
    }
    var_22 = var_5;
    var_23 = (var_15 || 56);
    #pragma endscop
}
