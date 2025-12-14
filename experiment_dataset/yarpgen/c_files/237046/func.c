/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237046
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) max((min((var_7), (var_4))), (((unsigned char) (short)3072)))))));
    var_13 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((unsigned int) (signed char)-86))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59))) + (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [0U] [0U] &= ((/* implicit */int) ((((/* implicit */_Bool) 67108736U)) ? (min((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_1] [i_1]))) + (var_9))), (((/* implicit */long long int) var_3)))) : ((-(var_9)))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 3; i_2 < 7; i_2 += 1) 
                {
                    arr_11 [(short)4] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)32751))));
                    arr_12 [i_0] [i_1] [i_2 + 1] [i_2 + 1] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                }
                for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    arr_15 [(unsigned short)8] [8U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned short)44234)))), (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)132))))) : (max((((/* implicit */long long int) arr_9 [(short)0] [i_0 - 2] [(short)0])), (9223372036854775807LL)))));
                    arr_16 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) var_4))) > (-9223372036854775807LL))), ((((-(-4194304))) > (((/* implicit */int) (unsigned short)48530))))));
                }
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    arr_20 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1)))), (67108732U)))) != (min((((0LL) | (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (short)(-32767 - 1)))))));
                    arr_21 [i_0] [i_0 - 1] [10LL] = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */long long int) max(((unsigned short)61311), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (17592186044408LL))))));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (~(((unsigned int) var_8))));
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((/* implicit */int) var_0))))), (((min((-1347745617909605216LL), (var_9))) / (((/* implicit */long long int) ((/* implicit */int) ((short) var_10))))))));
}
