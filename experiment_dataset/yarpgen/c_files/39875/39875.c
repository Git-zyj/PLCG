/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [7] [i_1 - 1] [i_2] = ((3613462078 / ((-3868490332466947842 + (arr_1 [i_0 - 3])))));
                    var_17 ^= (32759 ^ (arr_5 [i_1] [i_1] [i_1] [i_1]));
                    var_18 ^= ((((((((arr_3 [i_0]) * (arr_3 [i_2])))))) > (((((1 ? 1 : 14156973426806203272))) ? 14143463116214527696 : 2707237755845889229))));
                    var_19 = (min((((((2707237755845889229 ? 681505218 : (arr_3 [i_0])))) ? (arr_2 [11]) : ((min((arr_5 [i_0] [i_0 - 2] [i_1] [i_2]), (-127 - 1)))))), (((15277773620179951108 ? -1073741824 : 681505217)))));
                }
            }
        }
    }
    var_20 = (max(var_9, (((1 == -116) * 127))));
    var_21 = (max(var_21, var_9));
    #pragma endscop
}
