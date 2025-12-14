/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198534
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
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_10 = ((/* implicit */unsigned char) (+(max((arr_3 [i_2]), (-835307855)))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_6 [i_0 - 3] [i_1 + 1])) ? (((/* implicit */int) arr_6 [i_0 - 2] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_0 - 2] [i_1 - 1]))))));
                    arr_8 [i_0] [i_0 - 3] = ((/* implicit */_Bool) min((arr_3 [i_2]), (((((/* implicit */_Bool) min((903772478), (((/* implicit */int) (_Bool)1))))) ? (arr_2 [0ULL] [i_1 - 2]) : (((int) 14132415392652151852ULL))))));
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (749471068) : (arr_5 [i_3])))))))));
                    var_12 = ((/* implicit */long long int) ((unsigned char) arr_5 [i_0 - 1]));
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_9 [7U] [i_0 + 1] [i_1 - 1]) : (arr_9 [i_0] [i_0 - 1] [i_1 - 2]))))));
                }
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (short)-1488))));
                                var_15 += ((/* implicit */unsigned int) (~((-(((6241259059960411700ULL) << (((-1557430394) + (1557430452)))))))));
                            }
                        } 
                    } 
                } 
                arr_20 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_4);
                arr_21 [i_0 + 1] [i_1] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3488438195U)) ? (2017856698) : (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) ((((_Bool) arr_17 [7] [7] [i_0] [i_0 - 2] [i_0] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))) : (arr_17 [2ULL] [2ULL] [(_Bool)1] [i_0] [i_0] [2ULL])))) : (arr_15 [i_0] [9LL] [i_1] [i_0] [i_0])));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_4))));
}
