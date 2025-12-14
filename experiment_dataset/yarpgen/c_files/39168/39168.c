/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((max(11817087362405808593, (!var_0))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((((((var_2 | (arr_2 [i_0])))) ? (max(60559, (arr_1 [i_0] [i_0]))) : (arr_1 [i_0 + 1] [i_0]))) % (((11817087362405808584 ? 4977 : 57663))));
        var_15 = 116;
        var_16 = var_6;
        arr_5 [i_0] [i_0] = (max(-15569160537356089069, (arr_0 [i_0 + 1])));
        arr_6 [i_0] = (max((!10881969155691119818), (!var_12)));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_9 [14] = (arr_2 [i_1 + 3]);
        arr_10 [i_1] = (min((((arr_0 [i_1 + 2]) ? 11665 : (arr_0 [i_1 + 1]))), (((!(arr_0 [i_1 + 1]))))));
        var_17 = (max(var_17, 6585384553890509122));
    }

    /* vectorizable */
    for (int i_2 = 4; i_2 < 17;i_2 += 1)
    {
        arr_14 [i_2] = ((((!(arr_8 [i_2]))) ? (-2189903532413115935 / 16) : ((((!(arr_8 [i_2])))))));
        arr_15 [2] = 10377270494787645090;
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_18 -= -var_8;
        var_19 -= var_11;
    }
    var_20 += var_2;
    #pragma endscop
}
