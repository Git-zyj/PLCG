/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243642
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)32501)) : (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_6)) ? ((~(var_10))) : (((/* implicit */unsigned long long int) ((int) -452619410)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_19 = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (806806888U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30685)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_0])))))) : (((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0]))) ? (((arr_8 [i_0] [i_1] [i_0]) - (((/* implicit */unsigned long long int) arr_2 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)9071)) ? (((/* implicit */long long int) arr_5 [10] [i_1] [i_1])) : (arr_2 [i_0]))))))));
                    arr_9 [i_2] [i_0] [i_0] [15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (arr_3 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_3 [i_0])) : (arr_6 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_3 [i_0])) : (arr_6 [i_0] [(signed char)1] [i_2])))));
                }
                var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0]))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (806806888U)))) ? (arr_6 [(_Bool)1] [i_1] [i_0]) : (((long long int) arr_12 [i_3]))))) ? (((long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)21680))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3]))))))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_7 [i_3]))))) ? (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) arr_7 [i_0])))) : (((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_7 [i_4]))))));
                            var_22 -= ((((_Bool) ((((/* implicit */_Bool) -1LL)) ? (arr_14 [i_1] [i_3] [i_3] [i_1] [i_1]) : (((/* implicit */unsigned long long int) 402653184))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_1])) ? (arr_5 [i_0] [i_1] [i_4]) : (((/* implicit */int) arr_13 [i_4] [i_0] [i_3] [(unsigned char)1] [(unsigned short)2] [i_0])))))))) : (((((/* implicit */_Bool) (~(arr_3 [i_1])))) ? (((int) arr_6 [i_4] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [(signed char)8] [i_0] [(signed char)8] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_1] [i_3] [i_4])))))));
                        }
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0] [i_1]))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_1])))))) < (((((/* implicit */_Bool) -3775187178544128525LL)) ? (arr_6 [i_0] [0] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (short)21663))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_7);
}
