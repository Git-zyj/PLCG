/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((max(var_10, var_12)))) ? var_1 : (((76 ? 1 : 32745)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (max(((1 ? (((max(1, -22301)))) : (((arr_0 [i_0]) ? var_2 : (arr_0 [i_0]))))), ((min((((arr_1 [i_0] [i_0]) ? var_8 : (arr_1 [3] [3]))), (min(585642721, var_7)))))));
        arr_3 [i_0] [i_0] |= (min(1170857918, ((max(var_12, ((min((arr_0 [i_0]), (-127 - 1)))))))));
        arr_4 [i_0] [i_0] = ((5927 ? (((((var_7 ? var_8 : var_2))) ? (min(var_4, var_2)) : (arr_0 [i_0]))) : (((((1808785159889785001 ? 16637958913819766600 : 1072693248)))))));
        arr_5 [i_0] = ((-1225 && ((max((~var_8), var_4)))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_9 [i_1] = (((((2437764393 ? -17 : 59609))) ? (max(((59625 ? 1 : -2518387786230751535)), 80)) : (((max((17 <= 191), var_8))))));
        arr_10 [i_1] = max(32755, 14644288569867530017);
        arr_11 [i_1] = (((min(var_1, (29957 >= 1))) >= 1));
        arr_12 [1] = ((var_3 ? -28083 : ((var_6 ? ((max((arr_7 [i_1]), (arr_7 [i_1])))) : ((8326332980740418517 ? 3 : (arr_6 [i_1])))))));
    }
    #pragma endscop
}
