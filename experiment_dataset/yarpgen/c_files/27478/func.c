/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27478
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_2 + 2] [i_2] [i_0] [i_2])) != (((/* implicit */int) var_0))))) >> (((((((/* implicit */_Bool) arr_10 [i_1 + 3] [i_2] [i_2 + 1] [i_0] [(short)8])) ? (((/* implicit */int) (unsigned short)16359)) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_3 + 2])))) - (16345))))))));
                        arr_11 [(short)20] [i_1] [i_2] [(unsigned char)19] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42352))) <= (16932505681589943084ULL)));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        arr_15 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_7))));
                        var_12 -= (!(((/* implicit */_Bool) var_6)));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 2) 
                    {
                        var_13 = (+(((((/* implicit */_Bool) min((15612318766930759959ULL), (((/* implicit */unsigned long long int) arr_5 [(unsigned short)19] [(unsigned short)19] [16U]))))) ? (((((/* implicit */int) arr_2 [i_0])) + (2147483620))) : (((/* implicit */int) arr_2 [i_1 + 2])))));
                        var_14 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned char)82)))) - (((/* implicit */int) var_5))));
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_4 [i_1])) < (((/* implicit */int) arr_9 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) arr_9 [i_2]))))) || (((/* implicit */_Bool) max(((unsigned short)18592), (((/* implicit */unsigned short) var_9))))))))) : (max((((/* implicit */unsigned long long int) 1826207246U)), (11903212321159429540ULL)))));
                    }
                }
            } 
        } 
    } 
    var_15 = min((min((((6543531752550122076ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56))))), (((/* implicit */unsigned long long int) 4294967295U)))), (((/* implicit */unsigned long long int) var_0)));
}
