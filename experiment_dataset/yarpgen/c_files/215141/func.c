/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215141
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((var_2) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) var_6))))))))));
    var_11 = ((/* implicit */unsigned char) (((-(((var_7) * (4448659887572586487ULL))))) * (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_3))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)13321))))))))));
    var_12 += ((/* implicit */unsigned char) ((((int) var_8)) / ((((+(2147483647))) / (((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((max(((((_Bool)1) ? (((/* implicit */long long int) arr_2 [(unsigned char)15] [i_1])) : (var_3))), (-6049060684978048365LL))), (((/* implicit */long long int) arr_0 [i_1]))));
                var_14 = ((/* implicit */unsigned char) ((_Bool) max((((((/* implicit */unsigned long long int) 2147483647)) * (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                var_15 |= ((/* implicit */unsigned char) ((unsigned long long int) ((long long int) (+(((/* implicit */int) (short)13696))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_3)))))) ? (min((arr_2 [i_0 + 1] [i_1 + 1]), (arr_2 [i_0 - 1] [i_1 - 1]))) : (((/* implicit */int) max((arr_6 [i_4] [i_1] [i_0 - 2] [i_1]), (arr_6 [i_3] [i_3] [i_0 + 1] [i_1]))))));
                                arr_11 [(unsigned short)5] [i_1] [i_0] [i_0] [i_0] [i_0] = ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22522))) / (var_3)));
                                var_17 |= ((/* implicit */short) (-(((((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_4 + 2])) / (((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_4 - 1]))))));
                                arr_12 [i_3] [i_3] [7LL] [(unsigned short)2] [i_3] [i_3] [i_1] = ((/* implicit */long long int) ((int) (-(((/* implicit */int) arr_4 [i_4] [i_4 - 1] [i_4 + 2])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65535)))));
}
