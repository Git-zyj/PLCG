/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226264
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */int) ((signed char) 251658240U))) : (((/* implicit */int) (unsigned short)28735))));
        var_22 += arr_1 [i_0] [i_0];
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) >> (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */int) ((signed char) max((((/* implicit */signed char) arr_2 [i_1])), ((signed char)6))))) : (((int) (((_Bool)1) || (((/* implicit */_Bool) 2310443614U)))))));
        arr_4 [i_1] [i_1] = ((/* implicit */signed char) min((arr_2 [i_1]), (((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (!(((/* implicit */_Bool) 1984523693U)))))))));
        var_24 = ((/* implicit */signed char) (~(((unsigned long long int) ((348771890) | (((/* implicit */int) var_8)))))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_1 [i_1] [i_1]))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65531))) | (var_5))), (((/* implicit */unsigned int) arr_1 [i_1] [i_1])))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)248)))))))));
        arr_5 [i_1] = ((/* implicit */short) min(((-(min((1263506337U), (2310443591U))))), (((/* implicit */unsigned int) ((unsigned short) var_11)))));
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            {
                arr_11 [(unsigned char)9] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) 5U))))) ? (((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) ((((/* implicit */int) (short)-1)) <= (var_17)))))) : (((/* implicit */int) (unsigned short)59281))));
                arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned char) arr_6 [i_3]))), (max((arr_8 [i_2] [i_3] [i_3]), (((/* implicit */long long int) arr_7 [i_2]))))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_26 ^= ((/* implicit */int) arr_6 [i_5]);
                            arr_17 [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_11)))) * (((3363158U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48470))))))) - (((/* implicit */unsigned int) (-(-1274418443))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_14)) - (103)))))) ? (((((/* implicit */int) (signed char)-46)) + (((/* implicit */int) (unsigned short)48445)))) : ((-(((/* implicit */int) (unsigned char)7))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_9)), (var_12)));
    var_29 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)48482)) || (((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) (_Bool)1)))))))) / (((((/* implicit */_Bool) var_13)) ? (min((var_17), (var_17))) : (((var_9) ? (var_1) : (((/* implicit */int) (signed char)-44))))))));
}
