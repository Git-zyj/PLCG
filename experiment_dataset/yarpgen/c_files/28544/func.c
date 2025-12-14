/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28544
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
    var_13 = ((/* implicit */unsigned char) (unsigned short)25779);
    var_14 &= ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)57229)) : (((/* implicit */int) (unsigned short)39758))))))), (var_10)));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0 + 2] [i_1] [(signed char)0] [i_3] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_3] [i_2])) ? (((/* implicit */long long int) ((var_5) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_1] [i_2]))))) : (max((((/* implicit */long long int) var_9)), (arr_8 [i_0] [i_2] [i_3]))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)6335)), (7U))))));
                        var_15 = ((/* implicit */long long int) max((var_15), (((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) var_0)))))) ? (((arr_8 [i_0] [i_0 - 1] [i_0]) & (((/* implicit */long long int) (-(4294967290U)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [(unsigned char)3] [i_1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_10))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) arr_7 [i_2 + 1] [i_2 + 1] [i_2] [2ULL]))))))))))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            arr_15 [i_0] [i_0] [i_0] [(unsigned short)2] [i_3] [12U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) arr_14 [i_2] [i_2 - 1] [i_0 + 1] [6LL] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((arr_11 [i_4 + 2] [i_2 - 2] [(signed char)11] [i_2 - 2]) ? (((/* implicit */int) arr_14 [i_3] [i_2 - 2] [i_0 - 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_14 [i_4] [i_2 - 2] [i_0 + 2] [14U] [i_0] [i_0]))))) : (((((/* implicit */_Bool) 3831896337041825688ULL)) ? (((/* implicit */unsigned long long int) 32767U)) : (14ULL)))));
                            var_16 *= ((/* implicit */signed char) arr_6 [i_2] [(unsigned short)5]);
                            var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((unsigned int) (~(((/* implicit */int) arr_3 [i_0] [i_1]))))) : (((/* implicit */unsigned int) ((arr_5 [i_0 + 2] [i_2 - 2]) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) arr_5 [i_0 - 1] [i_2 + 1])))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            arr_20 [i_0] [(signed char)0] [i_2 - 2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)57229)) ? (((/* implicit */int) (signed char)31)) : (((((/* implicit */_Bool) (unsigned short)57242)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))));
                            var_18 ^= ((/* implicit */signed char) arr_5 [(unsigned short)0] [i_0]);
                            var_19 = ((/* implicit */short) ((((arr_10 [(short)5] [i_1] [i_1] [i_1] [i_1] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) >> (((3941223667U) - (3941223651U)))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            var_20 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)39756))))) ? (((((/* implicit */_Bool) 28ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59183))) : (15U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                            arr_23 [i_0 - 1] [(signed char)15] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) var_3);
                            var_21 = ((/* implicit */short) ((signed char) ((unsigned short) (_Bool)1)));
                            var_22 &= ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) == (min((arr_21 [i_0] [i_0 + 1] [i_0 + 1] [i_2] [i_2] [11U] [i_6]), (((/* implicit */unsigned long long int) var_4))))))), ((~(((/* implicit */int) var_3))))));
                            arr_24 [i_0 + 2] [i_1] [i_2 - 1] [i_3] [1ULL] [i_0] [i_6] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) arr_21 [i_2 - 2] [i_2] [(unsigned short)9] [i_2 - 2] [i_2] [i_2 - 2] [(signed char)4]))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) (signed char)-31))))) ? (((/* implicit */int) ((unsigned short) arr_13 [i_2]))) : (((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)25788)) - (25770)))))))));
                        }
                    }
                    var_23 ^= ((/* implicit */unsigned short) ((signed char) var_6));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((short) (_Bool)1)))));
                    arr_25 [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */short) ((unsigned int) var_0));
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (arr_6 [i_0 + 2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) <= (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                }
            } 
        } 
    } 
}
