/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53593
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    arr_11 [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)47))));
                    var_10 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_2])), (var_3))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)56212)) > (((/* implicit */int) (unsigned short)50347))))))));
                }
                for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    var_11 = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (unsigned short)57344)))) - ((+(((/* implicit */int) (unsigned short)8192)))))) != (min((((/* implicit */int) arr_8 [i_3] [i_0] [i_1] [i_0])), (((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) var_4))))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 13; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 3) 
                        {
                            {
                                var_12 *= ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
                                var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_8 [i_0] [i_4 + 1] [i_4 + 1] [i_5 + 1])) : (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_0] [i_4 + 1] [i_4] [i_5 + 1])) : (((/* implicit */int) arr_8 [i_0] [i_4 + 1] [i_5] [i_5 + 3])))))));
                                arr_19 [i_0] [i_1] [(unsigned short)1] [i_4] [(signed char)6] = ((/* implicit */unsigned long long int) var_9);
                                var_14 *= ((/* implicit */signed char) ((((((/* implicit */int) arr_17 [i_4 + 1] [i_4 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 3])) >> (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_12 [4ULL])))) - (52910))))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_9 [i_3] [i_4] [i_5]) & (((/* implicit */long long int) ((/* implicit */int) arr_12 [10ULL])))))))))));
                                arr_20 [i_1] [i_1] [i_1] [i_4] [i_5] [8LL] [i_5 + 1] = ((/* implicit */signed char) arr_14 [i_0] [i_1] [i_3] [i_4] [i_5]);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) min(((unsigned short)55479), (((/* implicit */unsigned short) (signed char)0))))))));
                    var_16 *= ((/* implicit */signed char) min((var_3), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_6))))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [(signed char)3])) : (((/* implicit */int) var_5)))))))));
                    arr_21 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (arr_6 [i_0] [i_0] [i_3]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (unsigned short)8191))))), (max((((/* implicit */unsigned long long int) (unsigned short)58640)), (arr_4 [(unsigned short)8] [i_1]))))));
                }
                var_17 -= ((/* implicit */unsigned short) ((max((arr_1 [i_0]), (((/* implicit */long long int) var_7)))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) var_9)))))) != (((unsigned long long int) (unsigned short)8191))))))));
                arr_22 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0]))) != (1015029768224202292ULL))))) / (((((/* implicit */_Bool) arr_18 [i_1] [i_0] [13LL] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_1]), (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((arr_14 [6LL] [0LL] [i_0] [i_0] [i_0]) << (((((/* implicit */int) (unsigned short)6895)) - (6894)))))))));
            }
        } 
    } 
    var_18 ^= ((/* implicit */signed char) (+(((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40980))) : (var_1))))));
    /* LoopNest 3 */
    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
    {
        for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 4) 
        {
            for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)6902))) != (arr_27 [i_6] [i_6] [(signed char)19] [i_6])))), (var_8))))) > (((unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_6] [(signed char)17] [i_8] [i_8])) ? (arr_25 [9LL] [i_7] [i_6]) : (((/* implicit */unsigned long long int) var_3)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)57354))))) ? (((((/* implicit */_Bool) -756072146686294291LL)) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (signed char)-61)))) : (((/* implicit */int) arr_26 [(unsigned short)10] [4LL]))))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_32 [i_9 + 2] [i_9 - 1] [i_9 - 2] [i_9 - 1]), (5937594064534001012LL)))) ? (((((arr_32 [i_9 - 2] [i_9 + 2] [i_9 - 2] [i_9 - 1]) + (9223372036854775807LL))) << (((((/* implicit */int) var_6)) - (36196))))) : (((((/* implicit */_Bool) (unsigned short)6895)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14776))) : (arr_32 [i_9 + 1] [i_9 + 2] [i_9 - 1] [i_9 + 1])))));
                    }
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), ((~(((((/* implicit */_Bool) (unsigned short)57350)) ? (((/* implicit */unsigned long long int) 4058461280552930600LL)) : (8989982283364012679ULL)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min(((((-(2147352576LL))) | (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) -8467393944113402129LL)) ? (var_2) : (((/* implicit */unsigned long long int) var_3)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (unsigned short)40421))))))))))))));
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 17431714305485349324ULL)) ? (((/* implicit */int) (unsigned short)46168)) : (((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) (unsigned short)50746)) : (((/* implicit */int) (signed char)56))))));
}
