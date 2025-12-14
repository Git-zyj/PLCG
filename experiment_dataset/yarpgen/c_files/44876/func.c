/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44876
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (7532451094489400712ULL) : (((/* implicit */unsigned long long int) 0U))))) && (((/* implicit */_Bool) var_0)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_18))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_3] [i_4] = ((/* implicit */int) (_Bool)1);
                            var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_0] [i_4])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [7U] [i_1])))))));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 1]))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 371338152U)) ? (2043367303) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61837))))))));
                            var_24 = ((/* implicit */unsigned int) (unsigned short)23045);
                        }
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] |= ((/* implicit */unsigned short) ((_Bool) (signed char)48));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_6 = 3; i_6 < 7; i_6 += 2) 
                        {
                            var_25 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)45753))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 127U)) ? (arr_8 [i_6 + 3] [i_6 + 3] [i_0] [i_6 + 3] [i_6 + 2]) : (((int) var_9))));
                            var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1917687407)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (852047837281068452LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483630))))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            arr_22 [i_0] [(signed char)2] [i_2] [i_0] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) var_11)), (arr_2 [(_Bool)1] [i_1]))))) ? (max((((/* implicit */int) ((short) (signed char)48))), ((+(((/* implicit */int) arr_3 [i_2] [i_0])))))) : ((+(((/* implicit */int) (short)7746))))));
                            arr_23 [i_0] [i_1] [i_2] [i_0] [i_7] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1 + 2]))) : (15822471748612191972ULL)))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            var_28 ^= ((unsigned short) 2097151U);
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((max((852047837281068452LL), (((/* implicit */long long int) arr_21 [i_0] [i_3])))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_8])) ? (arr_7 [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 1]) : (arr_8 [i_0] [i_1 - 1] [i_8] [i_1 + 2] [i_1 + 1])))))))));
                        }
                        arr_26 [i_0] [i_0] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(11U)))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)212)) / (218870358))))))), (min((((((/* implicit */_Bool) 19ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_6 [i_0] [i_0] [i_2] [5U] [i_3] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)215)) > (((/* implicit */int) var_2)))))))));
                    }
                    var_30 = ((/* implicit */unsigned long long int) var_2);
                }
            } 
        } 
    } 
}
