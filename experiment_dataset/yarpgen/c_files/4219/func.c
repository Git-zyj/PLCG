/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4219
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
    var_16 = ((/* implicit */long long int) (((-(((/* implicit */int) (signed char)-20)))) + (((/* implicit */int) max((((short) (_Bool)1)), (((/* implicit */short) (signed char)-1)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) arr_1 [3LL] [i_0]);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [i_0] [i_0])))) ? (((/* implicit */long long int) ((unsigned int) arr_0 [i_0]))) : (max((((/* implicit */long long int) -471802895)), (arr_1 [i_0] [i_0])))));
        var_17 = arr_0 [i_0];
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) (unsigned short)65527);
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((_Bool) max((((/* implicit */signed char) ((var_8) && (((/* implicit */_Bool) -2147483646))))), (((signed char) 36817573631948501LL)))));
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_9 [i_2] [i_1] [i_1]), (((/* implicit */long long int) (unsigned short)45968))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [i_2]))));
            arr_11 [i_2] [i_2] [(_Bool)1] = ((/* implicit */int) ((((arr_6 [i_2] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) ? ((-(max((2300253065U), (1025299507U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 6ULL))))))))));
            var_20 = ((/* implicit */_Bool) ((((arr_4 [i_1]) < (((/* implicit */int) arr_0 [i_2])))) ? (((/* implicit */int) ((signed char) arr_4 [i_1]))) : (arr_4 [i_1])));
            arr_12 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_1]))));
        }
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            var_21 = ((/* implicit */int) max(((unsigned short)45972), (max((((/* implicit */unsigned short) (signed char)-28)), ((unsigned short)45990)))));
            var_22 = ((/* implicit */long long int) ((unsigned int) (-(5ULL))));
            var_23 = ((/* implicit */_Bool) ((((((/* implicit */int) var_3)) <= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_3])) <= (var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46002)))))));
        }
        for (unsigned int i_4 = 1; i_4 < 7; i_4 += 3) 
        {
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((((((-1LL) + (9223372036854775807LL))) << (((arr_6 [i_1] [i_4 + 2]) - (6186149062378389636ULL))))), (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))))));
            var_25 = ((min((((/* implicit */long long int) arr_17 [i_4 - 1] [i_4 + 3] [i_4 + 2])), (arr_9 [i_4 + 2] [i_4 + 1] [i_4 + 1]))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))));
            var_26 = ((/* implicit */_Bool) arr_15 [i_1] [i_1]);
        }
        /* vectorizable */
        for (signed char i_5 = 2; i_5 < 9; i_5 += 4) 
        {
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19579)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))))));
            arr_20 [i_5 - 1] = ((/* implicit */long long int) 4294967283U);
            var_28 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) 4294967295U)))));
        }
        arr_21 [i_1] = ((/* implicit */int) (+((~((~(var_7)))))));
    }
}
