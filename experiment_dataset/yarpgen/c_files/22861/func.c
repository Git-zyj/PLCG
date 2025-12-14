/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22861
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [(signed char)11] [i_2] [i_2] [(signed char)10] [i_2] [4LL] = ((/* implicit */unsigned short) arr_2 [i_0]);
                                arr_14 [i_3] = ((/* implicit */long long int) var_8);
                                arr_15 [i_0] [i_0] [i_3] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                                arr_16 [9ULL] [i_1] [i_1] [i_1] [i_1] [i_3] = ((((/* implicit */_Bool) 1211337526782766299LL)) ? (1211337526782766299LL) : (((/* implicit */long long int) 2075965415)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_10 = ((/* implicit */unsigned int) min((min((min((arr_1 [(_Bool)0] [i_1]), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65535))))))), (((/* implicit */long long int) ((1392889176U) < (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-114), (var_9))))))))));
                        arr_19 [i_0] [i_0] [i_2] [i_5] = ((/* implicit */short) ((((int) ((((/* implicit */_Bool) 2849571513U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) : (1392889176U)))) - (((/* implicit */int) ((((((/* implicit */int) (short)32767)) >> (((586798515) - (586798490))))) <= (min((arr_11 [i_0] [i_0] [i_5] [i_0] [i_0]), (((/* implicit */int) var_9)))))))));
                        arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) | (var_1))) != (((/* implicit */long long int) ((((/* implicit */int) (short)874)) * (((/* implicit */int) var_7))))))))));
                    }
                }
                var_11 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
            }
        } 
    } 
    var_12 = max((((/* implicit */unsigned int) var_5)), ((~(((((/* implicit */_Bool) (signed char)2)) ? (417447126U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))));
}
