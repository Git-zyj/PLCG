/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211152
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -814403193741098747LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_1 - 1])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_17 = ((/* implicit */_Bool) ((unsigned char) -2606066082143096557LL));
                    arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) 814403193741098744LL))) * (((/* implicit */int) var_9))));
                    var_18 *= ((/* implicit */unsigned char) ((signed char) var_8));
                }
                for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 2; i_4 < 12; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(arr_11 [i_1 + 1] [i_1 + 1] [i_4] [i_4 - 2])))) >= ((+(max((arr_4 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_8))))))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [i_3])), (arr_12 [i_0] [i_4 - 1] [i_4] [i_4 - 1] [i_4])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_3] [i_3] [i_4])) ? (((/* implicit */int) arr_9 [(unsigned short)12] [i_0] [i_1] [11U])) : (arr_12 [i_1 + 1] [(signed char)0] [i_3] [i_4] [i_4])))) : (max((arr_11 [i_4] [i_4] [0] [i_4 - 2]), (((/* implicit */unsigned int) (unsigned char)0))))));
                        arr_13 [i_0] [i_3] [i_4] = ((/* implicit */signed char) ((arr_3 [i_0] [i_0]) && (((/* implicit */_Bool) min((arr_12 [i_1 - 2] [i_4 + 1] [9ULL] [12] [i_4]), (arr_12 [i_1 - 1] [i_3] [i_1 - 1] [i_4] [i_4]))))));
                        var_21 = ((/* implicit */unsigned char) arr_2 [i_1 - 1]);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_22 &= ((/* implicit */_Bool) var_12);
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_12 [i_0] [i_1 + 1] [i_3] [i_5] [i_5]), ((~(((/* implicit */int) var_14))))))) ? (((/* implicit */int) arr_8 [i_1 - 2] [i_1 - 1] [i_1 - 1])) : (((((/* implicit */_Bool) 814403193741098757LL)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)-5))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((_Bool) 840781699225259968ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12))) & (72022409665839104ULL)))));
                    arr_21 [i_0] [i_0] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)3)) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)25168)) : (((/* implicit */int) var_7)))))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) max((-1), (((/* implicit */int) (unsigned char)1))))))));
    var_25 -= ((/* implicit */unsigned short) min((var_11), (max((((/* implicit */short) (!(((/* implicit */_Bool) var_10))))), (var_14)))));
}
