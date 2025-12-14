/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229950
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
    var_20 = (-(((/* implicit */int) (short)-12572)));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_15))));
    var_22 = ((/* implicit */unsigned char) (-(((((((((/* implicit */int) (short)-12554)) + (2147483647))) << (((-505783907923861781LL) + (505783907923861781LL))))) * (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)69))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_23 = ((/* implicit */signed char) (-((+((+(((/* implicit */int) (signed char)69))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) 35184372086784LL))));
                                arr_14 [i_0] [i_1 - 1] [(signed char)10] [i_3] [i_3] [i_3] [i_0] |= ((/* implicit */unsigned short) min((((/* implicit */int) (signed char)39)), (var_1)));
                                var_25 += min((((2767055188541272547LL) << (((((/* implicit */int) (signed char)32)) - (32))))), (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1])) << (((((((/* implicit */int) var_3)) << (((((/* implicit */int) var_2)) - (26792))))) - (262120)))))));
                                var_26 ^= ((/* implicit */signed char) min((max((((((/* implicit */long long int) ((/* implicit */int) (signed char)59))) + (var_9))), (((/* implicit */long long int) ((921269127) != (((/* implicit */int) var_15))))))), (((((var_9) + (9223372036854775807LL))) << (((((((((/* implicit */int) var_17)) | (((/* implicit */int) arr_2 [(signed char)2])))) + (35))) - (30)))))));
                            }
                        } 
                    } 
                }
                var_27 -= (~((~(((/* implicit */int) var_2)))));
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) : (((((/* implicit */_Bool) 1590315752)) ? (2111952074) : (((/* implicit */int) var_2))))))) != (4294967295U)));
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 10; i_5 += 1) 
                {
                    for (unsigned short i_6 = 3; i_6 < 13; i_6 += 1) 
                    {
                        {
                            var_29 = ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)121))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) | (var_9))))) * (((/* implicit */long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))))));
                            arr_19 [i_1] [i_1] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)34)) ? (1104379522) : (((((/* implicit */_Bool) (signed char)-101)) ? (1179414784) : ((~(((/* implicit */int) (short)8201))))))));
                            var_30 &= ((((/* implicit */_Bool) min((arr_9 [i_6 - 2] [i_6 + 1] [(short)10] [10]), (((/* implicit */unsigned long long int) (signed char)-52))))) ? (((((/* implicit */_Bool) var_4)) ? (arr_9 [i_6 - 2] [i_6 + 1] [(signed char)4] [(signed char)4]) : (arr_9 [i_6 - 3] [i_6 + 1] [(signed char)10] [i_6 + 1]))) : (((arr_9 [i_6 + 1] [i_6 - 1] [(unsigned char)8] [i_6 - 2]) * (arr_9 [i_6 - 2] [i_6 - 3] [(_Bool)1] [i_6]))));
                            arr_20 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_8 [i_0]), (arr_8 [i_6 - 1])))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                            arr_21 [9] [i_1] [i_5 + 2] [i_1] = (+(((((/* implicit */int) arr_16 [i_1 + 1] [i_5 + 2] [i_1 + 1] [i_6 + 1])) / (((/* implicit */int) var_15)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
