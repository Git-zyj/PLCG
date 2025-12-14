/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45398
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
    var_10 = ((/* implicit */_Bool) (~(var_2)));
    var_11 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 17044367365680700956ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_4))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (var_4)))))), (min((var_6), (((/* implicit */unsigned long long int) var_8))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0 - 1] [i_1] [i_2] [i_3] = ((/* implicit */short) ((unsigned int) arr_1 [i_0]));
                            arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) max((var_8), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1])) * (((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(signed char)16] [i_1] [i_2] [i_3])) ? (var_1) : (((/* implicit */int) var_8))))))))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) max((1973121409), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)30970)) : (((/* implicit */int) (signed char)-39))))))) : (min((((/* implicit */unsigned int) min(((unsigned short)12230), (((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0] [i_1 + 2]))))), (((unsigned int) (unsigned char)156))))));
                arr_12 [i_0 + 2] [i_1] = ((/* implicit */_Bool) var_5);
                arr_13 [i_0 - 1] [i_1 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_5 [16U] [i_1 + 2] [i_1 - 4]))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-103))));
                /* LoopSeq 2 */
                for (unsigned short i_4 = 4; i_4 < 21; i_4 += 4) 
                {
                    arr_16 [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) min((arr_8 [3] [i_1 + 1] [i_1] [i_4 - 1]), (((/* implicit */short) arr_3 [i_4]))))) : (((/* implicit */int) ((signed char) arr_2 [i_0] [i_1]))))));
                    arr_17 [i_0] [i_1] [(signed char)11] = (((+(((/* implicit */int) ((unsigned char) var_5))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_4 + 3]))))));
                    var_12 += ((/* implicit */_Bool) ((arr_15 [i_0] [i_1] [i_4]) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_4 + 2] [i_0])) ^ (((/* implicit */int) (unsigned char)255))))), (max((((/* implicit */unsigned int) var_0)), (arr_0 [i_0 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_8 [(_Bool)1] [(_Bool)1] [(short)18] [i_1 - 3]))))));
                    var_13 = ((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)71)), (arr_6 [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 4])))), (max((((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1 - 1])), (var_7)))));
                }
                /* vectorizable */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        arr_24 [i_5] [i_5] = ((/* implicit */signed char) ((_Bool) 310056813U));
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((short) arr_15 [i_1 + 1] [i_5 - 1] [i_5 - 1])))));
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1 - 4] [i_5])) ? (((((/* implicit */_Bool) 8255391114533370576ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)308))) : (arr_0 [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_6] [i_6] [i_5] [i_6])) & (((/* implicit */int) arr_3 [i_6]))))))))));
                    }
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        var_16 = ((/* implicit */_Bool) var_5);
                        arr_28 [i_5] [i_5] [i_5 - 1] [i_5] [i_7] [i_5] = ((/* implicit */long long int) ((unsigned int) 1516338823));
                    }
                    arr_29 [i_5] [i_1] [(signed char)8] [i_5] = ((/* implicit */unsigned char) 13653911759989013061ULL);
                }
            }
        } 
    } 
}
