/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226225
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
    var_10 = ((/* implicit */signed char) max((((155179682) << (((var_1) - (1956543242))))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (-1541152409) : (155179682)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) 0LL);
                            arr_11 [i_0] [i_0] [i_1] [i_2] [(signed char)12] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) -1571066060))))) ? (((((/* implicit */_Bool) (unsigned char)254)) ? ((~(arr_5 [i_3] [i_2] [i_1]))) : (((/* implicit */long long int) arr_2 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)87))))) == (arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                            var_12 = ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((0) >> (((/* implicit */int) arr_10 [i_3 + 2] [i_2] [i_2] [i_0])))) : (((/* implicit */int) arr_10 [i_1] [i_2] [i_2 - 3] [12])));
                            var_13 = ((/* implicit */short) ((((/* implicit */int) (signed char)30)) | (((((-1059156152) ^ (((/* implicit */int) (short)-32376)))) >> (((571372107) - (571372107)))))));
                            arr_12 [i_2] [(unsigned char)7] [i_1] [i_2] = ((/* implicit */long long int) arr_4 [i_0] [i_2] [i_3]);
                        }
                    } 
                } 
                var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (arr_6 [i_1] [i_0] [i_0]) : (((/* implicit */int) var_6))))) ? (((var_1) & (arr_6 [(_Bool)1] [i_0] [(signed char)6]))) : (((((/* implicit */_Bool) var_8)) ? (arr_6 [i_1] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [0LL]))));
                var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((min((18U), (((/* implicit */unsigned int) (unsigned char)35)))) * (((/* implicit */unsigned int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) - (581)))))))) : (((/* implicit */unsigned int) (~(arr_7 [i_1] [i_1] [i_0] [i_1]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (1059156145) : (((/* implicit */int) (signed char)-105)))))))) && (((/* implicit */_Bool) var_6))));
    var_17 = ((/* implicit */_Bool) var_2);
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-2147483646), (1059156153)))) ? (max((var_2), (((/* implicit */long long int) (signed char)-25)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_4)), (var_7)))))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_9)) << (((((((/* implicit */_Bool) var_6)) ? (2147483646) : (((/* implicit */int) (_Bool)1)))) - (2147483622)))))));
}
