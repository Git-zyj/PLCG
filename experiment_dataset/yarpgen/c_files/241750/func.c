/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241750
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
    var_17 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)31185))))) ? (((((/* implicit */_Bool) var_11)) ? (9632381806438782919ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31185))))) : (((/* implicit */unsigned long long int) var_0))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) ((_Bool) 2147483647))) : (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)67)) ? (arr_2 [i_0]) : (((/* implicit */long long int) 2147483647))))) ? (min((((var_12) / (((/* implicit */long long int) ((/* implicit */int) (short)31161))))), (((/* implicit */long long int) var_5)))) : (((long long int) (~(var_13))))));
            var_20 = ((var_5) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (short)31173))))) + (((/* implicit */int) (short)14227)))) : (((/* implicit */int) ((max((var_15), (((/* implicit */int) (signed char)109)))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_9)))))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_2 = 3; i_2 < 11; i_2 += 4) 
        {
            arr_6 [i_2] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (short)0)))), ((-(((/* implicit */int) (_Bool)0))))));
            arr_7 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_3 [i_2 + 1] [i_2 + 3]), (((/* implicit */unsigned long long int) (signed char)-120))))) ? (-933761760) : (((/* implicit */int) var_3))));
            arr_8 [i_2] = ((/* implicit */short) max((((/* implicit */long long int) (+(((/* implicit */int) var_3))))), (max((((long long int) (short)31185)), (((/* implicit */long long int) 0))))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_4 [i_2]), (var_4)))) ? (((/* implicit */long long int) -1015131888)) : ((-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)45))) / (8485083080448162272LL)))))));
        }
        var_22 = ((/* implicit */short) ((max((2228646738878461018LL), (((/* implicit */long long int) var_3)))) / (arr_2 [i_0])));
    }
    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_23 *= ((/* implicit */int) ((((arr_10 [i_3]) ? (min((var_0), (((/* implicit */long long int) 1738501386)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) (signed char)3))))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_10 [i_3])))))));
        var_24 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_10 [i_3])), (var_2))), (((/* implicit */long long int) arr_10 [i_3]))));
        var_25 = ((/* implicit */long long int) -1015131880);
    }
}
