/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247873
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                var_12 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)30489)) <= (((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (6921853242489740310ULL)))))) ? ((-(((/* implicit */int) (unsigned short)65529)))) : (((int) 5614481475489093596LL))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned int) min((var_13), (((((((/* implicit */int) arr_3 [i_0])) == (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3] [i_2])))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1355787571U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))));
                        var_14 = ((/* implicit */unsigned short) ((short) arr_6 [i_0] [i_1] [i_2] [i_2]));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) (~(arr_2 [i_0] [i_0])));
                        arr_12 [i_0] [(signed char)23] [i_1 - 1] [(_Bool)1] [i_4] [i_1 - 1] = ((/* implicit */unsigned short) (unsigned char)217);
                    }
                    arr_13 [i_0] [(_Bool)1] [i_2] [i_0] |= ((/* implicit */unsigned int) ((arr_5 [i_1 - 1] [i_2]) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_1 + 1])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_7 [i_0] [i_1] [(unsigned short)7] [i_2] [i_2]))));
                    arr_14 [i_0] [i_1] = ((/* implicit */long long int) ((unsigned short) arr_10 [i_1] [i_1] [i_1] [i_1 + 1]));
                }
                /* vectorizable */
                for (unsigned short i_5 = 4; i_5 < 23; i_5 += 2) 
                {
                    var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65511)) >> (((((/* implicit */int) (signed char)-86)) + (109)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1U)))))) : ((((-9223372036854775807LL - 1LL)) + (7739310583495715746LL)))));
                    arr_19 [i_5] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535))));
                    var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [(_Bool)1])) ? (((((/* implicit */_Bool) (unsigned short)37246)) ? (496ULL) : (((/* implicit */unsigned long long int) 20U)))) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1 - 1] [i_1] [i_0]))));
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                }
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31764))) & (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (35184372088831ULL))), (((arr_15 [i_0] [i_1]) ? (13192157817821949250ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */int) var_4)), ((-(((/* implicit */int) (_Bool)1))))))) != (((min((((/* implicit */long long int) var_9)), (var_7))) - (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) var_6)))))))));
}
