/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229614
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
    var_14 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) max((var_8), (arr_2 [(signed char)19])))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        var_16 = ((/* implicit */long long int) (signed char)40);
        var_17 = ((/* implicit */_Bool) ((signed char) (unsigned short)9));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_2 = 2; i_2 < 21; i_2 += 4) 
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1648238947)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (signed char)37))))) * ((-(0U)))))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) (short)8837)) : (((/* implicit */int) (short)-6763))))) : (702164265309829406ULL))))))));
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_1] [(_Bool)1])), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (arr_6 [i_1] [i_2])))))))))));
        }
        for (unsigned short i_3 = 1; i_3 < 20; i_3 += 4) 
        {
            arr_11 [i_3] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-38))));
            var_20 = ((/* implicit */int) max((((/* implicit */long long int) (signed char)43)), (((((/* implicit */_Bool) arr_6 [i_3 - 1] [i_3 - 1])) ? (((/* implicit */long long int) (-2147483647 - 1))) : (-9223372036854775781LL)))));
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) 18446744073709551615ULL))));
            arr_15 [17U] [i_1] [17U] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)38690))));
        }
        arr_16 [i_1] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_14 [i_1] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1]))))) : (((((/* implicit */int) (short)16171)) & (5)))));
        arr_17 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -9223372036854775778LL))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_22 = ((/* implicit */int) ((max((((long long int) var_5)), (((/* implicit */long long int) 0)))) + (((/* implicit */long long int) ((/* implicit */int) (short)-22244)))));
            arr_22 [i_1] [(short)20] = ((/* implicit */_Bool) max(((short)-22244), ((short)-29327)));
        }
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */short) (_Bool)1);
        var_24 &= ((/* implicit */int) ((4143206794603684991LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6])))));
    }
    for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((unsigned long long int) ((arr_5 [i_7]) <= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_7])))))))));
        var_26 = var_10;
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((unsigned long long int) ((var_3) + (((/* implicit */int) arr_21 [i_7] [i_7])))))));
    }
    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned char)154)))), (((/* implicit */int) var_7))))) ? (var_5) : (((/* implicit */int) var_0))));
    var_29 = ((/* implicit */short) ((max(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (signed char)30)))))) >= ((-(((/* implicit */int) var_9))))));
}
