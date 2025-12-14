/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218222
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
    var_11 -= ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_2] [i_2] [i_2] [i_2 + 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) arr_5 [(signed char)4] [i_2 + 1] [(signed char)4] [i_2 + 1])) ? (arr_5 [i_2] [i_2] [i_2 + 2] [i_2 - 1]) : (arr_5 [i_2] [i_2] [i_2] [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_1] [i_4] [i_4]) ? (var_9) : (arr_8 [i_1] [i_0 + 3] [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_3] [i_4 - 1])) ? (((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_1] [i_1 + 2] [i_4 - 1])) : (((/* implicit */int) (short)2))))) : (arr_3 [i_0])));
                                var_14 = ((/* implicit */unsigned int) (short)2);
                                arr_12 [i_1] [i_1] [i_3] [i_2 + 2] [4ULL] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_1 + 2] [i_1] [i_0 + 2] [i_4 - 1]))) ? (((/* implicit */unsigned long long int) var_2)) : (min((((/* implicit */unsigned long long int) arr_7 [i_1 + 1] [i_1] [i_0 + 2] [i_4 - 1])), (837858716942977250ULL)))));
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((_Bool) arr_2 [i_1] [12])))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_5 = 1; i_5 < 17; i_5 += 2) 
                {
                    arr_17 [i_0 - 1] [i_1] [i_5 + 1] = ((/* implicit */_Bool) var_10);
                    var_16 = ((/* implicit */_Bool) ((long long int) arr_3 [i_0 - 1]));
                }
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        {
                            arr_23 [i_1] [i_1] = ((/* implicit */signed char) -4446399396315839439LL);
                            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_14 [i_1] [i_1] [i_1 + 1]) : (arr_14 [i_1] [i_1 + 1] [i_1 + 1]))))));
                        }
                    } 
                } 
                arr_24 [i_0] [(unsigned char)14] [i_0 + 2] &= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) min((((/* implicit */int) var_1)), (arr_14 [i_0 + 3] [i_0] [i_1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9150488057475004261ULL))))) : (var_8)));
            }
        } 
    } 
    var_18 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (9296256016234547355ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)0)))) | (((((/* implicit */_Bool) var_4)) ? (((int) var_0)) : (((/* implicit */int) var_6))))));
}
