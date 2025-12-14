/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_5 ? ((((min(1, 27143))))) : ((49733 ? 10647741405218841835 : 8052771627460514387)));
    var_14 = -10393972446249037224;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (((!-61) >> (((max((~2700177221638346165), (arr_2 [i_0]))) - 15746566852071205426))));
        arr_5 [9] |= (~4611123068473966592);
    }
    var_15 = ((((-var_4 ? (max(20740, 17525720709274289476)) : (var_5 && var_10)))) || var_11);
    #pragma endscop
}
