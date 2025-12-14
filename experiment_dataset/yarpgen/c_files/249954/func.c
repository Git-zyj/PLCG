/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249954
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
    var_11 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_0)), ((+(((((/* implicit */long long int) ((/* implicit */int) var_10))) - (8493305069359249058LL)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = -5915907327110555308LL;
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */short) 3424486609U);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 2; i_4 < 7; i_4 += 2) 
                {
                    arr_14 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9390)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)21))) : (-4408813236005751543LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)21))) : (min((3061726984U), (((/* implicit */unsigned int) (signed char)-22))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                arr_21 [i_6] [i_5] [i_4 - 2] [i_3] [(unsigned char)3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_5] [i_4 + 4] [i_3] [i_2]))))), (((((/* implicit */_Bool) 3061726996U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 2147481600U))))))) ? (((/* implicit */int) ((signed char) (signed char)-34))) : (((/* implicit */int) arr_4 [i_4 + 2] [i_3] [i_3]))));
                                arr_22 [i_6] [i_5] [i_5] [i_2] [i_2] [i_2] = max((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 2147485696U)))) > (32767U)))), ((signed char)14));
                                var_12 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((min((var_0), (((/* implicit */int) (short)-11415)))) != (((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)2171)) ? (((/* implicit */int) (unsigned short)7359)) : (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) arr_4 [i_2] [i_2] [i_2])), (1233240311U)))))));
                    /* LoopNest 2 */
                    for (short i_7 = 3; i_7 < 9; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 7; i_8 += 2) 
                        {
                            {
                                arr_27 [i_8 + 1] [i_7] [i_7] [2LL] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (signed char)33))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_26 [i_7] [i_7] [i_7 + 1] [i_7] [i_7] [i_7] [i_4]))));
                                arr_28 [8LL] = ((/* implicit */_Bool) max(((~(((((/* implicit */_Bool) 288230371856744448ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_10 [i_8])))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)4095)) % (((/* implicit */int) (signed char)-21))))) < ((+(3061726984U))))))));
                            }
                        } 
                    } 
                }
                arr_29 [i_3] [2] = var_3;
                arr_30 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((long long int) var_3))))) ? (((/* implicit */int) (unsigned short)34709)) : (((/* implicit */int) arr_4 [(short)17] [i_3] [19LL]))));
                var_14 = ((/* implicit */unsigned int) (unsigned char)177);
            }
        } 
    } 
}
