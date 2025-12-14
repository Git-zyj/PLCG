/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (max(((var_9 ? 11975 : (min(5774398286886991012, 5774398286886991012)))), -1640587331317271987));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((-1650564038 ? 65535 : 44954));
        arr_3 [i_0] = (max(-1640587331317271996, 1));
        var_13 *= (((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 1])));
    }
    #pragma endscop
}
