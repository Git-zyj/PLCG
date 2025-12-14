/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219636
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((int) var_6)), (((/* implicit */int) arr_8 [i_0] [i_1]))))) ? (((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1]))) + (var_7))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    arr_10 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) arr_2 [i_0]))))) && (((/* implicit */_Bool) arr_2 [i_2]))));
                    arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) ((arr_7 [i_1] [(unsigned short)13] [i_1] [i_1]) < (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_0])))))), (((((/* implicit */_Bool) 1717800141)) ? (arr_7 [i_2] [i_2] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                    var_20 = ((/* implicit */unsigned char) var_13);
                    var_21 = (((((-(((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_0] [18ULL])))))) + (2147483647))) << (((((((((int) (~(2147483647)))) - (-2147483624))) + (30))) - (6))));
                }
            } 
        } 
    } 
    var_22 = ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) -1132327931173110634LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12)))) + (2147483647))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_11)))) - (24589)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)));
    var_23 = ((/* implicit */unsigned long long int) var_8);
    var_24 = ((/* implicit */int) var_14);
}
