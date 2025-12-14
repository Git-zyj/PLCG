/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240426
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_13) | (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 - 1]))))) ? ((~(arr_2 [i_0] [i_2 + 2]))) : (((((/* implicit */_Bool) (short)25298)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_2 [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1])) ? (arr_7 [i_1] [i_1 - 2] [i_1] [i_1 + 1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25315)))))));
                                arr_12 [i_0] [i_1 + 1] [5ULL] [i_2] [19ULL] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_13) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 - 3] [i_1 - 3] [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_2 - 2] [i_2 + 2])))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_2 + 1] [i_4]))))) : (((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 + 2])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 + 2] [(unsigned short)20])))))));
                                var_19 = ((((/* implicit */int) ((((arr_6 [15LL] [15LL] [i_1 - 1] [i_2 + 3] [i_3] [15LL]) >> (((/* implicit */int) var_6)))) != (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_9 [(signed char)11] [i_4])))))))) % ((-(((/* implicit */int) arr_4 [i_2] [i_2 - 1] [i_4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        for (unsigned short i_6 = 1; i_6 < 14; i_6 += 2) 
        {
            {
                arr_20 [i_5] [i_6] = ((/* implicit */unsigned int) var_8);
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_6]))))) >= (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) < (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)70)) && (((/* implicit */_Bool) (short)-25279))))))))));
                arr_21 [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_8 [i_6] [i_6] [i_6 - 1])), (arr_0 [i_6] [i_6 + 1]))))));
                arr_22 [i_6] = ((/* implicit */_Bool) arr_1 [i_5]);
            }
        } 
    } 
}
