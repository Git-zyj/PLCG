/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190416
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [(signed char)14]))))) ? (((/* implicit */int) ((short) arr_2 [(_Bool)1] [(_Bool)1]))) : ((-(((/* implicit */int) var_7))))))), ((~(min((((/* implicit */unsigned int) arr_5 [i_0] [i_1 - 2] [i_1 - 2] [(unsigned short)5])), (arr_2 [i_0] [i_0])))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_13 *= ((/* implicit */unsigned short) (((-(max((arr_4 [i_3]), (((/* implicit */int) var_2)))))) / (((/* implicit */int) max((((/* implicit */unsigned short) ((short) arr_1 [(_Bool)1]))), (var_4))))));
                        arr_10 [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) arr_2 [i_1 - 2] [i_1 - 1]));
                    }
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        arr_14 [6] [6] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */int) ((signed char) var_8))) : (((((/* implicit */int) var_7)) << (((((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned short)9] [i_0])) - (14897)))))))) : (min((min((var_8), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 - 1] [i_1 - 1]))))));
                        arr_15 [i_0] [i_1 + 2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_4]))));
                        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_12 [i_1 + 1] [i_1 + 2] [2U] [i_4]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_12 [i_1 - 2] [i_1 + 2] [4] [i_1])))) : (min((((/* implicit */long long int) arr_12 [i_1 + 2] [i_1 - 1] [18U] [(short)10])), (var_6)))));
                    }
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_11), (var_10))))))))));
}
