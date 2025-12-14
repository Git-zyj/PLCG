/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196970
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_8 [i_0] = ((/* implicit */signed char) max(((-(arr_1 [i_0 - 1]))), (((/* implicit */unsigned int) ((unsigned short) arr_1 [i_3])))));
                        var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_9)) == (((((/* implicit */int) var_13)) | (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])))))))));
                        arr_9 [i_3] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_16))))) ? (((/* implicit */int) min(((short)-12801), (((/* implicit */short) (signed char)-12))))) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (((((/* implicit */_Bool) 3072908447737555857LL)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 - 2] [i_3])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_3])) : (var_10)))))));
                        arr_10 [i_0] [i_2] [i_2 - 3] [i_1] [i_0] = max((((arr_7 [i_0 - 1] [i_1] [i_2 - 3] [i_3]) % (((/* implicit */unsigned long long int) var_5)))), (((var_8) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))))));
                    }
                    for (long long int i_4 = 2; i_4 < 21; i_4 += 3) 
                    {
                        arr_13 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) max((arr_7 [i_0] [i_1] [i_0] [i_4 + 3]), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_0] [i_0] [(_Bool)1])) | (((/* implicit */int) (short)12807)))) > (((((/* implicit */int) var_16)) - (var_4))))))));
                        var_18 = ((/* implicit */unsigned short) max((var_18), (min((((unsigned short) (+(((/* implicit */int) (signed char)33))))), (((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) <= (5ULL))), (((_Bool) (_Bool)1)))))))));
                    }
                    for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        var_19 ^= ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-23))));
                        arr_17 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_12)), ((~(arr_12 [i_0 - 1] [i_1] [(signed char)12] [i_5] [i_2] [i_0])))))) ? (max((arr_0 [i_0] [i_0]), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [(signed char)13] [i_5]))) : (arr_0 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_15 [i_0] [i_1])), (min((((/* implicit */short) (signed char)-20)), ((short)0)))))))));
                    }
                    arr_18 [i_0] = ((/* implicit */unsigned int) var_10);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60746))) : (1911858374U)))) ? (max((41945489U), (((/* implicit */unsigned int) (unsigned short)60534)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
}
