/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51619
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (((/* implicit */short) arr_0 [i_0] [i_0])))))) & ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [4] [i_0]))) : (arr_3 [i_2] [i_1] [i_2])))))) : (((((/* implicit */long long int) max((127U), (arr_4 [i_2] [i_0] [i_0])))) | (((((/* implicit */_Bool) 522113280)) ? (22LL) : (((/* implicit */long long int) -2147483641))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        arr_9 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (-2147483641) : (var_5)))))), (((((/* implicit */_Bool) ((unsigned char) -2147483638))) ? (arr_4 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned int) (+(2147483639))))))));
                        var_18 = ((((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_0] [i_0] [i_0]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49174))) * (arr_2 [i_3] [i_2] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_2] [i_0] [i_2]) >= (arr_3 [i_0] [(short)4] [4ULL]))))))) ^ (max((((/* implicit */unsigned int) ((arr_7 [i_0] [i_1] [i_0]) + (((/* implicit */int) (unsigned char)230))))), (((((/* implicit */_Bool) arr_4 [1U] [i_0] [(short)1])) ? (((/* implicit */unsigned int) 2147483646)) : (32768U))))));
                        var_19 = ((/* implicit */unsigned short) ((unsigned long long int) max(((-(arr_2 [(unsigned short)3] [i_2] [i_3]))), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)255)), (var_3)))))));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 7; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned char)206)) << (((18446744073709551615ULL) - (18446744073709551595ULL))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (arr_5 [i_0] [i_4])))))))));
                        arr_12 [i_0] [(signed char)6] [9U] [i_4] [i_0] [i_4 - 1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)35678)) << (((127) - (116)))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_11 [i_4 + 3] [i_4 + 3] [i_0] [i_4 - 1]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_4)))) : (arr_4 [i_0] [i_0] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)2))))) && (((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) (unsigned char)208)))))))))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) var_2);
    var_23 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned long long int) var_6))));
}
