/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50760
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (_Bool)1))))));
                    arr_9 [i_0] [i_1] [i_1] [3ULL] = ((/* implicit */short) var_8);
                    arr_10 [17U] [i_0] [(unsigned short)20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(short)16] [i_0] [(short)16] [i_2 + 1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (var_11)))) : ((~(var_1)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] = ((/* implicit */signed char) 3212247920118133827ULL);
                                var_12 |= ((/* implicit */unsigned short) var_2);
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15234496153591417782ULL)) ? (29389614) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_14 = (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])));
        var_15 = ((/* implicit */long long int) (~(var_0)));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 4; i_5 < 17; i_5 += 3) 
    {
        var_16 -= ((/* implicit */_Bool) var_2);
        var_17 = ((/* implicit */_Bool) ((short) var_3));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_1)));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967276U)) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) (unsigned char)202))));
    }
    var_20 = ((/* implicit */unsigned int) var_7);
    var_21 += ((/* implicit */signed char) (((+(var_7))) == (((((/* implicit */_Bool) var_4)) ? (min((var_7), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
}
