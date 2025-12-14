/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196369
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
                    {
                        var_11 = ((/* implicit */signed char) ((((((/* implicit */int) arr_9 [i_1 + 1] [i_2] [i_2])) ^ (((/* implicit */int) arr_10 [i_1 - 2] [10ULL] [i_3] [i_3] [i_3] [i_3])))) <= (((/* implicit */int) arr_4 [i_3] [i_3] [i_3]))));
                        var_12 = ((/* implicit */long long int) min((((1473381742U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))), (((/* implicit */unsigned int) var_6))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
                    {
                        arr_13 [i_0] [(short)9] [(_Bool)1] [i_4] [(short)9] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)30)) + (((/* implicit */int) (signed char)-110))));
                        var_13 = max((((/* implicit */unsigned short) (signed char)-77)), ((unsigned short)65530));
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 22; i_5 += 4) 
                    {
                        for (short i_6 = 1; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_21 [(signed char)7] [3ULL] [i_1] [i_2] [i_2] [i_5] [i_6 + 3] = ((/* implicit */unsigned int) var_8);
                                arr_22 [(unsigned char)5] [(unsigned char)5] = ((/* implicit */short) arr_12 [i_5] [i_0]);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */short) ((1988662453) / (((/* implicit */int) (short)32767))));
                    arr_23 [i_0] [i_0] [i_1 + 2] [(short)20] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1571751096)) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_2] [i_0]))));
                    arr_24 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)9622)) / (((/* implicit */int) (signed char)83))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_0);
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) max((((var_5) < (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-96))) < (var_3))))))) : (var_3)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_7 = 3; i_7 < 18; i_7 += 1) 
    {
        arr_27 [i_7] = var_1;
        arr_28 [i_7] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [(signed char)16] [i_7])) + (((((/* implicit */int) (signed char)-110)) + (((/* implicit */int) (unsigned char)2))))));
    }
    var_17 = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (241961880U))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))) ? (1U) : (((/* implicit */unsigned int) -612805797))))));
}
