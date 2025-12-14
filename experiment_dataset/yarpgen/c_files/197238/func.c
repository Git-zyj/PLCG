/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197238
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_18))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0])))))))))))));
        var_20 = ((/* implicit */long long int) ((unsigned long long int) max(((~(arr_1 [i_0] [i_0]))), (arr_1 [i_0] [i_0]))));
        var_21 = ((/* implicit */unsigned char) min((((var_1) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)100)) ^ (((/* implicit */int) (unsigned short)2388)))))));
        var_22 += ((/* implicit */unsigned char) min((7224741318236012640ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) min((var_23), (((unsigned char) arr_0 [(unsigned char)1]))));
            var_24 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned short)63147)) ^ (((/* implicit */int) var_6))))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    {
                        var_25 ^= ((((/* implicit */_Bool) (+(10424041317588339165ULL)))) ? (min((((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [7ULL] [i_0]))) : (7224741318236012640ULL))), (((/* implicit */unsigned long long int) arr_2 [i_2] [i_2 + 2])))) : (((/* implicit */unsigned long long int) (((((-2147483647 - 1)) / (((/* implicit */int) (unsigned char)121)))) + (((/* implicit */int) arr_4 [i_2 - 1] [i_2] [i_2]))))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_7 [i_3] [i_0])) % (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 - 2] [i_2 + 3]))) ^ (7224741318236012640ULL)))));
                    }
                } 
            } 
            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) max((max(((unsigned char)0), (arr_11 [i_0] [i_0] [i_0]))), (((unsigned char) arr_3 [i_0] [i_2 + 1] [i_2]))))) ? ((-(((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2]))) : (var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) var_11)) : (18446744073709551615ULL))) > (((/* implicit */unsigned long long int) var_7))))))));
        }
        for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 4) /* same iter space */
        {
            arr_16 [i_0] [i_5] &= var_14;
            arr_17 [13ULL] [(unsigned short)7] = ((/* implicit */unsigned long long int) max((max((var_17), (((/* implicit */unsigned short) arr_9 [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 1])))), (((/* implicit */unsigned short) ((arr_10 [i_5 - 1]) == (arr_10 [i_5 + 2]))))));
            arr_18 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_0]) ^ (arr_7 [i_0] [i_5 + 1])))), ((~(var_1)))));
        }
    }
    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(var_11)))), (var_5))))));
}
