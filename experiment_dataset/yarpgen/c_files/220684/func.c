/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220684
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
    var_16 = ((/* implicit */long long int) var_3);
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_3)))))))) / (((/* implicit */int) ((((/* implicit */_Bool) ((var_0) | (var_0)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_13))))))))));
    var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) var_7)) != (((/* implicit */int) var_4)))))))) > (((((((/* implicit */long long int) ((/* implicit */int) var_1))) + (var_10))) % (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_15)))))) * (((var_10) / (((/* implicit */long long int) ((/* implicit */int) var_4))))))) != (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [13ULL] = ((/* implicit */unsigned char) ((((arr_4 [i_0] [3ULL]) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [9LL] [i_1])) && (((/* implicit */_Bool) arr_3 [(_Bool)1]))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(arr_4 [i_0] [i_1]))) != (((/* implicit */unsigned long long int) (+(arr_3 [i_0]))))))))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [12LL]))) >= (arr_4 [(unsigned char)7] [i_0]))))) != (((((/* implicit */unsigned long long int) arr_3 [i_0])) & (arr_4 [i_0] [i_1]))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
            }
        } 
    } 
}
