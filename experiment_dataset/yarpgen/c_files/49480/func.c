/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49480
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
    var_10 += ((/* implicit */signed char) min(((((~(var_8))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_1)) : (var_9)))))), (min((max((var_4), (((/* implicit */unsigned long long int) var_0)))), (min((((/* implicit */unsigned long long int) var_3)), (var_4)))))));
    var_11 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [24LL] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))) >= (((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))));
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */unsigned int) arr_0 [i_0] [i_1])) > (((((/* implicit */_Bool) ((var_6) ? (arr_1 [i_2]) : (arr_2 [i_2] [i_2])))) ? (((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_2]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_2])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((var_7) / (((/* implicit */long long int) arr_0 [i_0] [i_2]))))))) & (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [(signed char)13])) ? (var_7) : (((/* implicit */long long int) arr_6 [i_2]))))), (min((var_4), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))))));
                    arr_9 [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) arr_2 [i_2] [i_2])) | (var_9)))));
                }
            } 
        } 
    } 
    var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (var_2) : (var_8))), (min((((/* implicit */unsigned long long int) var_6)), (var_8)))))) || (((/* implicit */_Bool) ((var_8) / (max((var_8), (((/* implicit */unsigned long long int) var_7)))))))));
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (var_3)))) ? (((/* implicit */long long int) var_0)) : (max((var_9), (((/* implicit */long long int) var_3))))))) <= (max((max((((/* implicit */unsigned long long int) var_5)), (var_4))), (((/* implicit */unsigned long long int) min((var_0), (var_5)))))))))));
}
