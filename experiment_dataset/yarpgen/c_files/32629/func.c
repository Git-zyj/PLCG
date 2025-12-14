/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32629
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
    var_18 = ((/* implicit */unsigned long long int) var_15);
    var_19 ^= ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) ((18178420938473045939ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))), (((/* implicit */int) var_16))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((var_4) <= ((-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_6))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) 18178420938473045924ULL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3 - 2] [i_0])) ? (arr_1 [i_3 + 3] [i_1]) : (arr_1 [i_3 + 3] [i_1]))))));
                                arr_15 [i_0] [i_0] [(short)4] [i_0] = ((/* implicit */unsigned char) arr_1 [i_4] [i_0]);
                                var_21 = ((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_4]) < (((((((/* implicit */_Bool) 1772370803967995250ULL)) ? (16674373269741556366ULL) : (((/* implicit */unsigned long long int) 0LL)))) & (18178420938473045939ULL)))));
                            }
                        } 
                    } 
                    var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((arr_4 [(signed char)11] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2])))))))) ? (((((arr_9 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) var_17))));
                    var_23 ^= ((/* implicit */long long int) arr_14 [i_2] [i_2] [i_1] [i_1] [i_1] [i_0]);
                }
            } 
        } 
    }
}
