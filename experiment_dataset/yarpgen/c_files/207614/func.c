/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207614
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_8))))) ? (((/* implicit */int) min((var_6), (var_8)))) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((_Bool) max((var_5), (((/* implicit */unsigned long long int) (_Bool)0))))))));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 2])))) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 1]))) > (arr_1 [i_0 - 2]))))));
    }
    var_14 = ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 4) 
            {
                {
                    arr_10 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_7 [i_1] [i_1] [i_3])), (((var_10) & (((/* implicit */long long int) ((/* implicit */int) var_4)))))))), (max((arr_1 [i_3 + 1]), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-1)), (2047))))))));
                    arr_11 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_5))))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 17; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_5] [i_1] [(signed char)0] [i_1] [i_1])) || (((/* implicit */_Bool) var_11))))), (max((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_1])), (var_5)))))) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))), ((+(var_5))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))), (((((/* implicit */int) (short)-16)) ^ (((/* implicit */int) (_Bool)0)))))))));
                                arr_17 [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_9 [i_1] [i_4] [i_5])) ? (arr_9 [i_1] [i_4] [i_5]) : (((/* implicit */unsigned int) arr_4 [i_3] [(unsigned short)9])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) arr_6 [i_1] [i_2] [i_4])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_14 [(signed char)1] [9] [i_2] [i_3] [i_3] [i_4] [i_5])) : (((/* implicit */int) var_6)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
