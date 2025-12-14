/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223739
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
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                    {
                        arr_10 [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_0 + 1] [i_0 + 2]))) : (arr_1 [i_0 + 1])));
                        arr_11 [i_1] [i_1] = ((/* implicit */unsigned int) var_0);
                        arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_2 [i_2 + 1] [i_2 + 1]);
                    }
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 3] [i_2 - 1] [i_2 + 3] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)22775))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_6 [i_1] [(signed char)6] [i_1])) ? (((/* implicit */int) (unsigned short)42760)) : (((/* implicit */int) (unsigned short)23743)))) : (((/* implicit */int) (unsigned char)255))))) : (32369895U)));
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 2])) ? (10275856828074596563ULL) : (((/* implicit */unsigned long long int) max((min((arr_1 [i_0]), (((/* implicit */long long int) (unsigned short)13145)))), (((/* implicit */long long int) (unsigned char)48)))))));
                        var_20 += ((/* implicit */unsigned short) (unsigned char)0);
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2] [i_2])) ? (((/* implicit */int) arr_5 [i_2] [i_2 + 3] [i_2 - 1] [i_2])) : (((/* implicit */int) arr_14 [i_2 - 1] [i_2 + 1] [i_2 + 3] [i_2 - 1] [i_2] [i_2]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)16383)), (arr_14 [i_2] [i_2 + 2] [i_2 + 2] [i_2] [i_2] [i_2 - 1])))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)80)), (arr_5 [i_2] [i_2 + 2] [i_2 + 1] [1LL])))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 4; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) arr_14 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 2])))));
                                arr_20 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_16 [i_0] [i_0] [i_0] [i_0 + 1]), (arr_16 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 - 1])))) ? (((((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0 - 1] [i_0 - 2] [i_0] [i_1]))) : (arr_16 [i_2 + 3] [i_2 + 2] [i_2 + 3] [i_2]))) : (max((arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0]), (arr_16 [i_5] [i_5] [i_5] [i_5])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (unsigned short)26552);
}
