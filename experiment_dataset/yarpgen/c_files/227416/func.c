/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227416
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
    var_18 &= ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) (_Bool)0)), (max((4294967295U), (4294967283U))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((signed char) arr_1 [i_0]));
        arr_5 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_9 [i_1] = ((/* implicit */_Bool) min((((((13U) + (2U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967295U)) == (17383399440539672745ULL))))))), ((+(arr_7 [i_1])))));
        var_19 &= ((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) (_Bool)1)), (12U)))));
        arr_10 [i_1] = ((/* implicit */unsigned long long int) max((((_Bool) var_3)), ((_Bool)1)));
    }
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_12))));
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 22; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 4) 
        {
            {
                arr_16 [i_3] [i_3] |= ((/* implicit */unsigned long long int) ((_Bool) (+((-(((/* implicit */int) var_8)))))));
                var_21 = ((((/* implicit */_Bool) 13U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((((/* implicit */_Bool) min((arr_11 [i_3]), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) 1U)) : (((((/* implicit */unsigned long long int) arr_13 [i_2])) / (var_2))))) : (((/* implicit */unsigned long long int) ((int) var_12)))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_23 ^= ((/* implicit */signed char) (~(max((var_9), (arr_11 [i_2 + 1])))));
                                arr_24 [i_2] [i_2] [i_2] [i_5] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_5] [i_6])) ? ((-(var_5))) : ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_12)) : (3755110001235098614ULL)))))));
                                var_24 += ((((-4648166521084540073LL) > (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2 - 2] [i_3 - 2] [i_3 - 1]))))) ? ((+(17383399440539672745ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_19 [i_2 - 2] [i_3 - 2] [i_3 - 1]), (arr_19 [i_2 - 2] [i_3 - 2] [i_3 - 1]))))));
                                arr_25 [i_2] [i_2] [i_3] [i_3] [i_3] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_4);
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [(signed char)6]))) ? ((+(arr_1 [2ULL]))) : (min((arr_13 [i_3 - 2]), (arr_1 [2ULL])))));
            }
        } 
    } 
}
