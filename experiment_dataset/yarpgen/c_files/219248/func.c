/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219248
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
    var_20 = ((/* implicit */unsigned char) ((max((((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((int) var_18))))) - (((/* implicit */long long int) (~(((/* implicit */int) (short)-31245)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((var_17) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_2] [i_0 - 3])), (arr_1 [i_1] [i_0 - 3])))) : (min(((~(var_4))), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_3 [11LL] [11LL]))))))));
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_7 [i_0 - 1] [i_0] [i_0]))) ? (((((unsigned long long int) (short)32757)) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)58)) >> (((((arr_5 [i_2] [i_1] [i_0] [i_0 - 3]) & (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_0 - 2] [i_0 - 2]))))) - (5523822157537513463LL))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        arr_11 [i_1] [(short)5] [0ULL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) * (var_19)))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_18)) ? (2650971651U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_0 + 1] [i_0] [i_0]))))), (((/* implicit */unsigned int) ((_Bool) arr_9 [(unsigned char)8] [i_0]))))))));
                        var_23 = ((/* implicit */unsigned char) min(((!(arr_10 [i_0 + 1] [i_0 + 1]))), (((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) >= (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))))));
                        var_24 *= ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 3] [i_0 - 1]))) >= (arr_7 [i_0 - 2] [i_0] [i_0 + 1])))));
                        var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_13))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_5 [i_0 - 2] [i_1] [i_2] [i_3]))))), (arr_7 [i_0 - 3] [i_0 - 3] [i_0 - 3])))));
                    }
                    var_26 += ((/* implicit */int) (signed char)76);
                }
            } 
        } 
    } 
}
