/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31183
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
    var_14 = ((/* implicit */unsigned char) ((signed char) var_7));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((int) ((((/* implicit */int) ((_Bool) arr_0 [(short)4]))) + (((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0]))))))))));
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((max((((arr_1 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 3] [i_0 - 2]))) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 3] [i_0])))))))) + (((/* implicit */unsigned long long int) ((((unsigned int) arr_0 [i_0])) / (((unsigned int) arr_1 [i_0 - 1] [i_0])))))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0]))))) ? (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-31))) <= (-8LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [(_Bool)1] [i_0 - 4])))) : (((arr_0 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 4294967295U))) << (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 4] [i_0 - 4])) == (((/* implicit */int) arr_1 [(unsigned char)3] [i_0]))))))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((int) ((unsigned long long int) arr_1 [i_0] [i_0]))), (((/* implicit */int) ((((/* implicit */int) ((signed char) arr_0 [(signed char)2]))) <= (((/* implicit */int) arr_1 [i_0] [i_0 - 4]))))))))));
    }
}
