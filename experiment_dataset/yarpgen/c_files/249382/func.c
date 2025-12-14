/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249382
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned char) ((arr_1 [i_0]) < (((/* implicit */long long int) (+(arr_6 [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 2]))))));
                    var_21 = ((/* implicit */signed char) 2147483647);
                }
            } 
        } 
        var_22 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (arr_5 [i_0])))) ? (((/* implicit */int) max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)14444)) : (((((/* implicit */_Bool) (unsigned short)41943)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (arr_6 [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_3] [11LL])) ? (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_0 [i_3]))))) : (((((/* implicit */int) arr_0 [i_3])) ^ (((/* implicit */int) ((unsigned short) arr_5 [i_3])))))));
        var_24 = ((/* implicit */unsigned short) max((((unsigned long long int) var_18)), (((/* implicit */unsigned long long int) var_19))));
        var_25 = ((/* implicit */_Bool) (((~(((/* implicit */int) max((arr_9 [i_3] [9]), (arr_9 [i_3] [i_3])))))) % (((((/* implicit */int) var_11)) + (((((/* implicit */int) (unsigned short)14444)) ^ (((/* implicit */int) (unsigned short)46532))))))));
    }
    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (-(((var_7) / ((-(((/* implicit */int) (unsigned short)51092)))))))))));
}
