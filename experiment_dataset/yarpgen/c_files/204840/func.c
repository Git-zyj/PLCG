/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204840
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) var_17))))), (((long long int) var_17))))) / (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_11)) : (var_15))) + (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_15)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) max((var_5), (((/* implicit */int) arr_7 [(short)3]))));
                            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_17)) ? (min((((/* implicit */long long int) var_13)), (var_18))) : (((/* implicit */long long int) min((((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_0] [i_1])), (arr_4 [i_0] [i_0] [i_0]))))))));
                        }
                        for (long long int i_5 = 1; i_5 < 8; i_5 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_17)), (((long long int) arr_14 [i_0] [i_1] [i_1] [i_1] [i_1]))));
                            arr_16 [i_0] = ((/* implicit */long long int) ((((unsigned int) var_15)) & (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_12))));
                            var_21 = ((/* implicit */unsigned int) ((unsigned long long int) 2LL));
                        }
                        for (long long int i_6 = 1; i_6 < 8; i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_6] [i_6 + 2] [i_0] [i_0]))) / (var_4))), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_6 [i_0] [i_6] [i_6] [i_6] [i_6 - 1] [i_6])), (arr_9 [i_6] [i_6] [i_6] [i_6] [i_6 - 1] [i_0] [i_6]))))));
                            arr_20 [i_0] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                        }
                        var_22 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_17 [i_2] [4] [i_2] [i_1] [(short)7])) & (137170518016ULL)))) ? (((((/* implicit */_Bool) arr_14 [i_3] [i_1] [i_2] [i_3] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [(_Bool)1] [(_Bool)1] [i_1] [i_2] [i_2] [i_3] [i_2]))) : (var_12))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25845))))))))), (((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_13 [i_2] [i_2] [i_2] [i_2] [(unsigned char)4]))))) ? (((var_15) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [7LL] [i_0] [7LL] [i_0])))))));
                        var_23 = ((/* implicit */unsigned int) min((((max((((/* implicit */long long int) var_1)), (var_14))) + (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))))), ((-(((arr_6 [i_0] [i_1] [1] [i_3] [i_0] [1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_1] [5]))) : (var_4)))))));
                        arr_21 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-25815)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1]))) : (var_0))) % (min((((long long int) var_18)), ((~(arr_5 [i_2] [i_2] [i_2])))))));
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_25 [i_0] [3U] [3U] [3U] [i_7] = ((/* implicit */_Bool) (~(var_11)));
                        arr_26 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_0 [i_0]))));
                    }
                    var_24 -= ((/* implicit */unsigned long long int) min((arr_22 [i_0] [i_1] [i_1] [i_0] [i_2] [i_0]), (((/* implicit */long long int) arr_14 [i_2] [i_1] [i_1] [i_2] [2ULL]))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) min((min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))), (((var_0) % (((/* implicit */long long int) ((/* implicit */int) var_1))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))))))));
    var_26 = ((/* implicit */int) var_2);
}
