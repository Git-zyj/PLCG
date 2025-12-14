/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37570
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
    var_11 = ((/* implicit */_Bool) var_7);
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) | (((/* implicit */int) ((var_9) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (-7LL) : (((/* implicit */long long int) arr_2 [i_0]))))))) ? (min((min((arr_0 [i_2]), (arr_0 [13U]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-89))))))) : (((/* implicit */unsigned long long int) max((arr_2 [i_0]), (-2147483645))))));
                    var_14 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)88)), ((unsigned char)155))))) == (min((((/* implicit */unsigned long long int) (unsigned short)35612)), (arr_5 [i_1 + 3] [i_1 - 1] [i_1 + 2] [i_1 + 2])))));
                    arr_7 [i_2] [i_1] [16ULL] [i_2] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_6 [i_1 + 2] [(unsigned char)11] [(unsigned char)11] [i_1]))))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
    }
    var_15 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((unsigned char) ((unsigned char) var_0)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86))) / (1076630484U)))) < ((~(var_9)))))));
}
