/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_10 != (!9218868437227405312)));
    var_20 *= ((var_9 ? ((((!((max(var_10, var_9))))))) : ((var_0 / (~255)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [12] [i_0] &= min((!9227875636482146311), ((231 ? (max(9227875636482146304, 4294967291)) : ((9218868437227405299 ? 20 : 3922628168815789547)))));
        arr_4 [i_0] [i_0] = (((((559287609 ? 3922628168815789547 : (~9218868437227405312)))) ? 49536 : 1801093922));
    }
    var_21 = (max(var_21, (((((max(var_7, var_10))) == var_12)))));
    #pragma endscop
}
