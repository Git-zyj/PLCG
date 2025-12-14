/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((((max((-32767 - 1), var_9))) ? var_7 : (((var_7 ? var_2 : var_10))))), ((((385231916 / var_5) % -4375093378023436917)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    var_14 *= (min(var_6, ((min((max((arr_4 [i_0]), -17761)), (min(var_0, (arr_4 [i_2 - 2]))))))));
                    arr_6 [i_0] [i_0] [i_0] [i_0] = 1;
                    var_15 = min((arr_5 [i_0] [i_0] [i_0]), ((15411 * (max((arr_2 [i_1]), var_8)))));
                }
            }
        }
    }
    var_16 = 1667163847;
    var_17 = ((var_2 ? -15418 : ((3690409972 + ((-15421 ? 12590175524139454018 : 15420))))));
    var_18 = ((((((min(var_4, 15394))) ? 16046175122867816739 : (!var_6))) >> (var_12 - 1080)));
    #pragma endscop
}
