/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198794
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) max((var_15), (((/* implicit */signed char) var_8))))) % (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (~(var_10)));
                    var_19 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_2] [5LL]) : (((/* implicit */unsigned long long int) arr_4 [i_0 + 2] [(signed char)2]))))) ? (((var_16) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_2]))))) : (var_16)))), (((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1] [i_1] [i_2])) ? (arr_5 [i_1 + 1] [i_1] [i_2] [0ULL]) : (arr_5 [i_1 + 1] [i_2] [i_2] [i_2])))));
                    arr_7 [i_0] [i_1 + 2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1 - 1] [i_1] [i_1]))) ^ (arr_5 [i_2] [i_2] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0])) + ((~(((/* implicit */int) var_8)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) 2147483644);
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 4) 
    {
        var_21 += ((/* implicit */_Bool) arr_3 [i_3] [(unsigned short)15]);
        arr_10 [i_3] [i_3] = ((/* implicit */unsigned int) (!(((14244296979148405381ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3 + 2])))))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 2; i_4 < 20; i_4 += 3) 
        {
            for (short i_5 = 1; i_5 < 18; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    {
                        arr_21 [i_6] [i_6] [i_6] [i_6] [i_4] [i_3] &= ((/* implicit */signed char) var_12);
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((/* implicit */short) arr_2 [i_3] [i_6])), (var_14))))));
                        arr_22 [i_3] [i_4 - 1] [i_4] [i_5] [i_4] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 - 1] [10ULL])) ? (((/* implicit */unsigned long long int) (((-2147483647 - 1)) % (((/* implicit */int) (signed char)38))))) : (arr_5 [i_3 + 2] [i_5 - 1] [i_5] [11LL])))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_3])) != (-2147483647)))) : (((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_5] [i_6]))))) != (min((var_13), (((/* implicit */unsigned long long int) arr_13 [(_Bool)1] [i_6])))))))));
                        arr_23 [(signed char)2] [i_4] [i_4] [(short)5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) & (3785907948U)));
                        var_23 = ((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_4] [i_5] [i_4] [i_6]);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_7 = 1; i_7 < 20; i_7 += 4) 
        {
            arr_28 [i_7] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (2048224058256521940ULL)))) ? (max((var_16), (arr_9 [i_3]))) : (max((((/* implicit */unsigned int) var_11)), (arr_9 [i_7])))))));
            arr_29 [(signed char)6] [(signed char)6] = ((/* implicit */long long int) var_2);
        }
        var_24 -= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) arr_12 [i_3] [i_3 + 1])) != (max((((/* implicit */unsigned long long int) var_4)), (arr_5 [i_3] [i_3] [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) != (6636671740725260202ULL)))) + (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3]))))) : (((arr_14 [i_3 - 2] [i_3 - 2] [i_3 - 1]) + (((/* implicit */unsigned long long int) var_16))))));
    }
    for (int i_8 = 0; i_8 < 17; i_8 += 2) 
    {
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((((/* implicit */_Bool) arr_11 [i_8] [i_8])) ? (max((8017970477460320223ULL), (((/* implicit */unsigned long long int) (signed char)-99)))) : (((/* implicit */unsigned long long int) var_10))))));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((min((((/* implicit */long long int) var_2)), (arr_15 [i_8] [i_8]))) ^ (var_12))))));
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (min((arr_27 [i_8]), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) 2147483647)) : (var_0)))))));
    }
    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned int) var_14)))))));
}
