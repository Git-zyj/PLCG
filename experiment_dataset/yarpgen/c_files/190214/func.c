/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190214
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((short) (~(4294967276U))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned long long int) (+(4294967284U)));
            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (+((~(6723646833662789357ULL))))))));
        }
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) (short)4050)) != (((/* implicit */int) (short)0)))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) arr_8 [i_2]);
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_8 [i_2])) & (arr_7 [i_2])));
        var_17 = ((/* implicit */unsigned short) (+(((int) arr_8 [i_2]))));
        arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_11))) - (((/* implicit */int) ((signed char) (unsigned char)176)))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
    {
        arr_13 [i_3 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_3)), (var_0)))) ? (((/* implicit */int) (short)683)) : (((/* implicit */int) max((((/* implicit */unsigned char) var_1)), ((unsigned char)202))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)209))) : ((+(9223372036854775807LL)))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 3; i_4 < 20; i_4 += 2) 
        {
            for (signed char i_5 = 2; i_5 < 18; i_5 += 2) 
            {
                {
                    var_18 = ((((((/* implicit */_Bool) arr_12 [i_3 - 1])) ? (arr_16 [i_3 - 1]) : (arr_16 [i_3 + 1]))) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_4 - 1] [i_5 + 4])) << (((((/* implicit */int) arr_12 [i_3 - 1])) - (70)))))));
                    var_19 &= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_12 [i_3 - 1])))) ? (((/* implicit */int) ((signed char) ((signed char) var_12)))) : (((/* implicit */int) var_0))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) arr_17 [i_3] [i_3]);
        var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_3])) ? (max((arr_16 [i_3]), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) arr_14 [i_3]))))) != ((~(max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)209))))))));
        var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_15 [(unsigned short)7] [i_3 + 1])) : (((/* implicit */int) arr_11 [2ULL]))))) ? (((/* implicit */int) arr_11 [i_3 - 1])) : (((arr_18 [17U] [i_3 - 1] [i_3] [i_3 + 1]) / (((/* implicit */int) arr_11 [i_3]))))));
    }
    var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)57)) ? (5795043904891889147LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-58)))))) || (((/* implicit */_Bool) max((4611686017353646080ULL), (((/* implicit */unsigned long long int) var_10))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((((/* implicit */int) ((9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)15)))))) == ((~(((/* implicit */int) (short)-32742)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17183))))) : (((/* implicit */int) ((max((3104505901501791433ULL), (((/* implicit */unsigned long long int) (unsigned short)51493)))) <= (((/* implicit */unsigned long long int) 3311628519U))))))))));
}
