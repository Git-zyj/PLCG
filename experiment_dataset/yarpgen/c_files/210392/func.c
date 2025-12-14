/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210392
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
    var_13 = min((((/* implicit */unsigned long long int) var_6)), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222))) - (var_11))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_14 &= ((/* implicit */unsigned short) (!(max(((!(((/* implicit */_Bool) var_0)))), (((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) (short)-10805))))))));
        var_15 = ((/* implicit */_Bool) min(((-(arr_2 [i_0 - 2]))), ((-(arr_2 [i_0 - 2])))));
        var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1])))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1]))) : ((-(arr_2 [i_0 - 1])))));
        var_17 = ((unsigned int) min((((((/* implicit */unsigned int) arr_0 [i_0])) + (2587789832U))), (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)0)), (arr_0 [i_0]))))));
    }
    for (signed char i_1 = 3; i_1 < 14; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] &= ((/* implicit */signed char) min(((((-(((/* implicit */int) arr_4 [i_1])))) > (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)0)), (arr_3 [i_1])))))), (var_1)));
        arr_6 [i_1 - 2] = ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 2]))) - (var_0))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_4 [i_1 - 2])), ((~(((/* implicit */int) (_Bool)1)))))))));
    }
    for (signed char i_2 = 3; i_2 < 14; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_2]))));
            var_19 = ((/* implicit */long long int) (+(var_11)));
            var_20 *= ((/* implicit */unsigned int) ((arr_7 [12LL]) & (arr_7 [2])));
            /* LoopNest 3 */
            for (unsigned short i_4 = 4; i_4 < 15; i_4 += 3) 
            {
                for (long long int i_5 = 1; i_5 < 14; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        {
                            var_21 *= ((/* implicit */unsigned short) var_11);
                            arr_18 [i_2] [i_2] [i_4] [i_2] [i_6 - 1] = ((/* implicit */unsigned char) (+(arr_13 [i_2] [i_3] [i_4] [i_5] [i_6 - 1])));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_20 [i_2] [i_7] [i_2]), (((/* implicit */short) arr_4 [i_2 + 2]))))) ? (arr_21 [i_2] [i_2]) : ((-(((/* implicit */int) arr_20 [i_2] [i_2] [i_2]))))));
            var_23 |= ((/* implicit */unsigned short) (+((-(arr_19 [i_2 + 2] [i_2 - 3] [i_2 - 1])))));
        }
        arr_22 [(unsigned char)10] [(unsigned char)10] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_16 [i_2 - 2] [i_2 + 2] [i_2 - 3] [i_2] [i_2 + 2] [i_2]), (arr_16 [i_2] [i_2] [i_2] [i_2] [i_2 + 2] [i_2 - 2]))))) > (2166692834013940458ULL)));
    }
    var_24 *= (+(((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)480))))) : (((/* implicit */int) ((var_11) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)255)) ? (var_12) : (var_11)))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)10805))))))) : ((~(var_4)))));
}
