/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44694
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_0))));
    var_18 = ((/* implicit */unsigned char) ((long long int) var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) min((arr_5 [(unsigned char)0] [(unsigned char)0]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (((((/* implicit */_Bool) var_10)) ? (-921610788) : (((/* implicit */int) arr_6 [i_0] [i_0])))) : (((/* implicit */int) min((((/* implicit */short) var_8)), (var_4)))))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)31)) ? (max((arr_5 [i_0] [i_2]), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_8 [i_2] [i_2] [i_0]))))))), (((/* implicit */long long int) max((max((((/* implicit */int) (signed char)127)), (921610788))), (arr_9 [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_20 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(signed char)2] [i_4])) ? (var_0) : (((/* implicit */int) arr_3 [i_2]))))) ? (((/* implicit */int) max((var_16), (((/* implicit */short) (unsigned char)111))))) : (((((/* implicit */_Bool) arr_15 [i_1] [(unsigned char)8] [(unsigned char)8])) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_2])) : (((/* implicit */int) var_2))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)145)) <= ((-(((/* implicit */int) (unsigned short)59954))))))) : (max(((-(((/* implicit */int) arr_8 [i_1] [i_1] [i_2])))), (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) << (((((var_0) + (1682337742))) - (4))))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] = ((/* implicit */signed char) arr_0 [i_1]);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) var_15);
                    arr_18 [i_2] = var_8;
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_1))))))) ? (((/* implicit */int) var_14)) : ((+(((/* implicit */int) max((var_8), (var_12))))))));
}
