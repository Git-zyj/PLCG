/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((20 ? var_6 : ((min((min(20, -1732667012)), (251 < 26))))));
    var_18 = (min((((!196046224226553545) * var_13)), (!var_1)));
    var_19 ^= (min((min(var_13, var_9)), var_9));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_0 [i_0] [i_0]) + 2147483647)) << (((min(1732667012, 1732667002)) - 1732667002))));
        var_20 = (max(var_20, (((-(arr_0 [i_0] [8]))))));
        arr_3 [12] = (((((-(min(1, 3))))) ? (min((arr_1 [i_0]), var_6)) : (((((min(var_8, -112))) ? (~56) : ((2904909186 ? -2147483633 : 1732667011)))))));
        var_21 ^= (0 < 281457796841472);
    }
    #pragma endscop
}
