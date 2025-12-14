/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238229
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
    var_19 ^= ((/* implicit */signed char) var_16);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_1] [19ULL] = arr_0 [15];
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 20; i_2 += 3) 
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2] [i_2 + 1] [i_2 - 3])) ? (arr_3 [i_2] [i_2 + 1] [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_2 - 1] [i_2 - 2])))));
                    var_21 ^= ((/* implicit */int) arr_3 [i_2] [i_1] [i_2 - 3]);
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    var_22 = ((/* implicit */int) arr_9 [i_0] [i_0]);
                    var_23 = ((/* implicit */unsigned int) (signed char)76);
                    var_24 -= ((/* implicit */int) arr_7 [i_0] [i_1] [i_3]);
                }
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -7586292522971003295LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))) : (((unsigned long long int) (unsigned char)51)))))));
                    arr_14 [0LL] [i_1] [(_Bool)1] [i_4] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]);
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) arr_11 [i_0]))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        arr_17 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_15 [i_0] [(signed char)2] [i_0]))));
                        arr_18 [i_0] = ((/* implicit */unsigned short) (+(3742963227U)));
                        arr_19 [i_0] [i_1] [(unsigned char)3] [i_5] = ((/* implicit */unsigned short) arr_8 [i_1] [(unsigned char)8] [i_4] [i_5]);
                        var_27 = ((/* implicit */unsigned int) arr_16 [6LL] [i_1] [i_4] [i_5]);
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25201))))))));
                    }
                }
                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-1)), ((unsigned short)25201)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_11 [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_1] [19LL] [i_1]))))) : (((unsigned long long int) 3121203980U)))))))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)20)) ? (min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)7075))))), ((+(7586292522971003307LL))))) : (((/* implicit */long long int) ((int) (short)18162)))));
}
