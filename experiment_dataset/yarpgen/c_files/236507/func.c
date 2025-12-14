/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236507
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    arr_6 [(_Bool)1] [i_0] [i_2] = ((/* implicit */unsigned char) arr_2 [8U] [i_0]);
                    var_11 = ((/* implicit */signed char) var_7);
                    arr_7 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0] [(unsigned short)1] [i_0]))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_12 = ((/* implicit */unsigned long long int) arr_8 [i_0]);
                    arr_10 [9U] [1LL] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (var_4) : (((/* implicit */unsigned long long int) var_5))))) ? ((~(arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_3)) < (9223372036854775807LL)))))));
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)65)) ? (2632954310U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-99)))));
                }
                var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) -3753503397791413783LL)) ^ ((((~(arr_3 [i_0]))) % (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-102)))))))));
                var_15 = ((/* implicit */long long int) (~((~(min((((/* implicit */unsigned long long int) var_3)), (var_9)))))));
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned char)12])))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) -4142350719352078901LL)) : (arr_3 [i_0]))))))));
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */int) var_3);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((((var_4) == (((/* implicit */unsigned long long int) var_3)))), (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)99))) : (var_10))) <= (var_7)))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_4))));
    var_18 += ((/* implicit */unsigned char) var_4);
}
