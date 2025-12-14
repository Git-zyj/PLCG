/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28708
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) max((max(((-(arr_0 [0ULL]))), (((((/* implicit */unsigned int) arr_1 [(unsigned char)5] [i_0])) + (arr_0 [(unsigned short)5]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [3U] [9])) ? (1364375734607919037ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) && (((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 9; i_2 += 2) 
            {
                {
                    var_17 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) ^ (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-61))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_2 - 3] [9LL] [i_2] [9LL] [i_0] [9LL]))));
                                arr_15 [i_0] = max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_0] [2ULL] [i_0])) - (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)64))) : (((long long int) arr_12 [i_0] [i_3])))), (((/* implicit */long long int) arr_7 [i_0] [i_1] [(unsigned char)3])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_13)))))))), ((-(max((((/* implicit */long long int) var_5)), (var_8)))))));
    var_20 -= ((/* implicit */short) (~(((/* implicit */int) var_5))));
}
