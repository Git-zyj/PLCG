/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219744
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 += ((/* implicit */unsigned short) max((max((var_1), (((/* implicit */unsigned long long int) min((16383LL), (((/* implicit */long long int) arr_1 [i_0]))))))), (var_1)));
                    arr_7 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)30720), (((/* implicit */unsigned short) arr_3 [i_2] [i_1] [i_0]))))) ? (((/* implicit */int) ((unsigned short) arr_3 [i_1] [i_1] [i_1]))) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((_Bool) arr_6 [12ULL]))), (var_5)));
    }
    var_13 = ((/* implicit */short) (-(((((/* implicit */_Bool) max((((/* implicit */long long int) (short)2047)), (var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)28)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
    var_14 *= ((/* implicit */unsigned int) var_5);
}
