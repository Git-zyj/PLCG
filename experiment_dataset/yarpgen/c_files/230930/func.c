/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230930
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
    var_13 = ((/* implicit */signed char) var_10);
    var_14 = ((/* implicit */unsigned short) ((_Bool) var_6));
    var_15 = 0LL;
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(131068U)))), (arr_0 [i_0])));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 0LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 3])))))) : ((-(arr_0 [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)15872)))))) : (((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534))) : (arr_0 [i_0 + 3]))))) : (min((((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)))), (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        var_17 = ((/* implicit */short) min(((-(arr_0 [i_0 + 1]))), (arr_0 [i_0 + 1])));
        var_18 *= ((/* implicit */signed char) (~(((/* implicit */int) (((_Bool)1) && ((_Bool)1))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((short) arr_0 [i_0]))), (((((/* implicit */_Bool) (unsigned char)254)) ? (18446744073709551603ULL) : (arr_0 [8LL])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65525)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1)))))) && (((/* implicit */_Bool) max((9223372036854775788LL), (562949953413120LL)))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0])))) ? (arr_0 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0]), (arr_1 [9U])))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)15872))))));
        var_21 ^= ((/* implicit */unsigned long long int) ((signed char) arr_0 [i_1 + 3]));
        var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_1 - 1]))));
    }
    for (signed char i_2 = 3; i_2 < 12; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 2; i_3 < 14; i_3 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) max(((~(arr_9 [i_3 + 1] [i_3 + 1]))), (((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1])) <= (((/* implicit */int) arr_3 [(unsigned char)5])))) ? (((/* implicit */int) arr_1 [i_2 - 3])) : (((/* implicit */int) arr_6 [i_2 + 3])))))));
            var_24 = ((/* implicit */_Bool) min((((/* implicit */long long int) (-((+(((/* implicit */int) arr_3 [i_3]))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)24576)) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) arr_4 [(signed char)11]))))), (arr_5 [i_3 + 1] [i_3 + 1])))));
            var_25 += ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) arr_5 [i_2] [i_3 + 1])))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [4LL])) ? (arr_9 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -9223372036854775788LL)) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) (unsigned short)12)))), (((/* implicit */int) arr_19 [i_2] [i_3] [i_3 - 2] [i_4] [i_4] [(signed char)5] [i_6]))));
                            var_27 = ((/* implicit */unsigned short) -2LL);
                        }
                    } 
                } 
            } 
        }
        var_28 = max((arr_9 [i_2] [i_2]), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_5 [i_2 + 2] [(signed char)7])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_6 [i_2]))))))));
    }
}
