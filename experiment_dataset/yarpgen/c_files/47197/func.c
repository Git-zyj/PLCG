/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47197
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
    var_17 = (-((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (var_8))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (~((~((+(arr_1 [i_0]))))))))));
        arr_3 [i_0] = ((/* implicit */signed char) max(((_Bool)1), ((_Bool)0)));
    }
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) min(((!(((/* implicit */_Bool) 4294967295U)))), ((!(((/* implicit */_Bool) var_8))))))) | (((/* implicit */int) ((((/* implicit */_Bool) min((arr_8 [i_1]), (arr_8 [i_2])))) && (((/* implicit */_Bool) var_8)))))));
            var_20 = ((/* implicit */unsigned char) (_Bool)1);
        }
        for (signed char i_3 = 3; i_3 < 23; i_3 += 3) 
        {
            arr_13 [i_1] [i_1] = ((/* implicit */signed char) ((max((((/* implicit */long long int) (unsigned short)1023)), (arr_11 [i_3 + 1] [i_3 - 2]))) & (arr_11 [i_3 + 1] [i_3 + 1])));
            var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? ((+(arr_11 [i_3 - 3] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)213)))))));
        }
        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            var_22 = ((/* implicit */long long int) max((var_22), (arr_14 [i_1] [i_4] [i_1])));
            var_23 *= ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)-97)), (min((((((/* implicit */int) arr_15 [i_4])) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((arr_7 [i_1]), (((/* implicit */unsigned short) (short)15956)))))))));
        }
        var_24 = ((/* implicit */long long int) arr_8 [i_1]);
        var_25 *= (unsigned short)1023;
    }
}
