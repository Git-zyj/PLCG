/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30187
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_14))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (min((var_14), (((/* implicit */long long int) var_13))))))) : (((((unsigned long long int) var_13)) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-3902842345422481271LL), (((/* implicit */long long int) 2719887993U))))) ? (((/* implicit */int) arr_1 [i_0])) : (((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_6)))))));
                    arr_11 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_0 - 1] [19U])) ? (arr_6 [i_0 - 2] [i_1] [i_0 + 1]) : (arr_6 [i_0] [i_1] [i_0 + 1])))) ? (min((((/* implicit */long long int) arr_6 [i_0 - 2] [i_1] [i_0 - 1])), (arr_9 [18U] [i_0 + 1] [(unsigned short)7]))) : (min((arr_9 [i_1 - 3] [i_0 - 2] [i_0]), (((/* implicit */long long int) arr_6 [(unsigned char)8] [i_1] [i_0 - 1]))))));
                    var_17 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned long long int) 7759736126073992756ULL))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_0] [7ULL] [i_0])) : (((/* implicit */int) var_11))))) : (((var_1) ? (arr_6 [20] [20] [i_0]) : (((/* implicit */unsigned int) arr_8 [i_0 + 1])))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(signed char)8] [(_Bool)1])) ? (arr_6 [i_0 - 2] [(_Bool)1] [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned int) min((var_0), (((/* implicit */int) arr_7 [i_2] [(signed char)1] [i_0]))))) : (min((arr_6 [i_0] [(unsigned char)16] [i_2]), (((/* implicit */unsigned int) var_4))))))));
                    var_18 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((arr_0 [(unsigned char)18] [(unsigned char)18]) + (2147483647))) << (((((/* implicit */int) arr_7 [i_2] [i_1 + 2] [i_0])) - (45)))))) ? (arr_9 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_7)))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0 - 1]))) ? (((/* implicit */int) min((arr_1 [i_0 - 1]), (((/* implicit */unsigned char) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))))));
                }
            } 
        } 
    } 
    var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */long long int) ((unsigned int) var_3))) : (min((((long long int) var_9)), (((/* implicit */long long int) min((var_5), (((/* implicit */unsigned char) var_6)))))))));
    var_21 = (!(((/* implicit */_Bool) 2022768006)));
}
