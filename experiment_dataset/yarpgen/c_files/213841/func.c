/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213841
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min(((_Bool)1), (var_18)))), (max((((/* implicit */unsigned long long int) (unsigned short)39345)), (8796093022144ULL)))));
                                arr_16 [i_4] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_9))) * (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1 - 1]))))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                                var_21 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))));
                                var_22 = ((/* implicit */int) (-(((unsigned long long int) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_3] [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 7; i_6 += 2) 
                        {
                            {
                                arr_23 [0U] [i_5] = ((/* implicit */unsigned short) arr_3 [i_1] [i_1] [i_6]);
                                var_23 = ((((/* implicit */unsigned int) (~(arr_18 [i_6 - 1] [i_1] [i_6] [i_5] [i_1 + 1])))) != (((unsigned int) arr_18 [i_6 + 1] [i_1] [i_6] [i_6] [i_1 + 1])));
                                arr_24 [i_6 + 2] [(_Bool)1] [i_5] [i_5] [i_1 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) 0U);
                    arr_25 [i_2] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)11))) ? (((/* implicit */int) (short)0)) : (((var_18) ? (-10) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_14 [i_2] [i_1 + 1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1])))) : (((((/* implicit */_Bool) arr_20 [i_0] [i_1 - 1] [i_2] [i_0] [i_0] [i_1 - 1] [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1 - 1])) : (arr_20 [i_0] [i_1 - 1] [i_1] [i_1 + 1] [i_2] [i_1] [i_1]))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((unsigned short) ((int) ((((/* implicit */unsigned long long int) arr_6 [i_0])) != (arr_21 [i_0]))))))));
    }
    var_26 = ((/* implicit */unsigned char) (-(max((((/* implicit */int) max((((/* implicit */short) var_13)), (var_12)))), (var_8)))));
}
