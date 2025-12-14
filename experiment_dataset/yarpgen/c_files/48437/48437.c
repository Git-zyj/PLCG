/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((~var_3), var_6));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(var_4, ((3330529312 ? 144115188059078656 : -144115188059078657))))) < ((var_1 ? (max(-144115188059078651, 17097291144586550431)) : (((var_6 ? -432264872609830343 : 144115188059078656)))))));
        arr_3 [i_0] [i_0] = (min(((196 ? 144115188059078656 : (arr_1 [11] [i_0 + 2]))), var_9));
        var_13 = (min(-18601, 17097291144586550431));
    }
    #pragma endscop
}
