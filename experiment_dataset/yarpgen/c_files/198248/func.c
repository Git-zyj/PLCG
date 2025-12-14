/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198248
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
    var_14 *= ((/* implicit */unsigned char) (short)9988);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_4 [i_1]))) << (((min((1804105987), (((/* implicit */int) (unsigned char)123)))) - (110)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (799498134805936580LL) : (((/* implicit */long long int) 67076096U)))) | (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : (((14327018560693944254ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0])) / (((/* implicit */int) (short)3136)))))))));
                var_15 = ((/* implicit */long long int) ((((((/* implicit */int) var_1)) >> (((((((/* implicit */_Bool) -799498134805936581LL)) ? (var_13) : (((/* implicit */int) (_Bool)1)))) - (2139326841))))) ^ (((/* implicit */int) var_1))));
                arr_8 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (247065857) : ((-(((/* implicit */int) arr_6 [i_1] [i_1] [(unsigned char)1]))))))) ? (((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))))))) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
                var_16 = ((/* implicit */unsigned char) min((max((((/* implicit */int) var_12)), (((var_0) ? (((/* implicit */int) (unsigned char)121)) : (var_13))))), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (1673992818U))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) var_12))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((unsigned long long int) ((var_11) - (((/* implicit */unsigned long long int) var_7))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_13) > (1244170414))))) == (arr_9 [i_2]))))))))));
        var_18 = ((/* implicit */unsigned char) min((((((67076096U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-3137))))) ? (((/* implicit */int) ((var_1) || (((/* implicit */_Bool) (signed char)-7))))) : (((/* implicit */int) (unsigned char)120)))), ((+(((/* implicit */int) arr_5 [i_2]))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1920)) ? (((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_4 [i_2]))))))) : (var_2)));
    }
}
