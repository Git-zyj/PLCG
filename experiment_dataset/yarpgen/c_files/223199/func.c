/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223199
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_2] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))));
                    arr_10 [i_0 + 1] [i_0] [i_0] = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_2]);
                    /* LoopSeq 4 */
                    for (short i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0 - 2])) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) arr_7 [i_0] [i_2] [i_3]))))))) ? (((/* implicit */int) (unsigned char)113)) : (((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_0 - 1] [i_2] [i_3]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0 + 1] [i_1] [i_3]))))) : ((((_Bool)1) ? (1905535481) : (((/* implicit */int) (unsigned char)61))))))));
                        var_14 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_6 [i_3] [i_1] [i_0]))))) ^ (max((5364433763134646318LL), (((/* implicit */long long int) (unsigned char)61))))))));
                    }
                    for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4]))) : (2097151U)))) ? (max((-5364433763134646318LL), ((-9223372036854775807LL - 1LL)))) : (max((9223372036854775800LL), (((/* implicit */long long int) var_9))))))));
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((long long int) ((short) ((unsigned int) (short)16383)))))));
                    }
                    for (int i_5 = 2; i_5 < 18; i_5 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((int) arr_12 [i_0] [i_5] [i_0 - 2] [i_2] [i_1])), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_6)))))))));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 2] [i_0 - 2])))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_3 [i_1] [i_5] [i_6])) : (((/* implicit */int) arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_6] [i_5] [i_1]))) ^ (arr_11 [i_1] [i_1] [i_1]))))) << (((((unsigned long long int) arr_17 [i_2] [i_1] [i_0] [i_5 + 3] [i_6] [i_0])) - (18446744073709548431ULL))))))));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6])) : (((/* implicit */int) (unsigned char)78))))) ? (((/* implicit */int) ((signed char) (signed char)-98))) : (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_1] [i_2] [i_5] [i_6])) ? (var_2) : (((/* implicit */int) (unsigned char)61)))))))));
                        }
                    }
                    for (int i_7 = 2; i_7 < 18; i_7 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (unsigned char)67))) ^ (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) (short)-8382)), ((unsigned short)13812))))))))));
                        var_21 ^= ((/* implicit */unsigned short) max((var_3), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_4))) && ((_Bool)1))))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((signed char) var_3)))))));
    var_23 = ((/* implicit */short) var_6);
    var_24 = ((/* implicit */long long int) (unsigned short)10565);
}
