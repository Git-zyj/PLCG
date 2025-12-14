/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199751
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
    var_17 = ((/* implicit */_Bool) var_14);
    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)251)) % (((/* implicit */int) max(((unsigned short)28910), (((/* implicit */unsigned short) var_3)))))));
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (unsigned char)5))));
    var_20 = ((/* implicit */int) var_15);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)36625)))))) < (var_9)));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_22 = ((/* implicit */short) (~(arr_4 [i_1])));
            var_23 = ((((/* implicit */_Bool) arr_1 [4LL])) ? (arr_3 [i_0] [i_1]) : (var_10));
        }
        for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            arr_7 [10LL] [10LL] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) * (arr_3 [i_0] [i_2])));
            /* LoopSeq 1 */
            for (short i_3 = 1; i_3 < 12; i_3 += 3) 
            {
                var_24 = ((/* implicit */_Bool) (short)-23539);
                var_25 = ((/* implicit */int) ((short) 0));
            }
        }
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 0))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            arr_18 [i_4] [(signed char)7] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_4])) != (((/* implicit */int) (unsigned short)16993))));
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1)))))));
            var_28 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned char)88)) : (var_8)))));
            arr_19 [i_5] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((int) arr_17 [i_5]));
        }
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_1))));
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    arr_30 [i_7] [i_6] [10ULL] [2U] [i_8] [i_8] = ((/* implicit */int) ((unsigned int) arr_23 [i_4] [i_6] [i_7] [i_6]));
                    arr_31 [i_7] [i_7] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6] [8ULL] [i_8])) ? (arr_3 [i_4] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [i_7] [i_8])))))) ? (((/* implicit */int) arr_26 [i_6])) : (((/* implicit */int) (_Bool)0))));
                    arr_32 [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_13))));
                }
            }
            /* LoopSeq 3 */
            for (short i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
            {
                arr_36 [(signed char)6] [i_9] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_9] [(unsigned short)4] [i_4])) ? (arr_28 [i_6] [i_9] [i_4] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4)))));
                var_30 ^= ((/* implicit */unsigned int) var_1);
                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((_Bool) arr_4 [i_9])))));
            }
            for (short i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
            {
                var_32 -= ((/* implicit */unsigned char) arr_3 [i_6] [i_6]);
                var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) 9223371761976868864ULL)) ? (((/* implicit */int) arr_35 [i_4] [i_6])) : (((/* implicit */int) arr_35 [i_4] [i_10]))));
            }
            for (long long int i_11 = 3; i_11 < 11; i_11 += 4) 
            {
                var_34 = (!(((/* implicit */_Bool) (signed char)-14)));
                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_11 - 2]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)4))))) : (arr_6 [i_11 - 3])));
            }
        }
        arr_42 [i_4] = ((/* implicit */int) (~(var_15)));
        var_36 = ((/* implicit */unsigned short) arr_0 [i_4] [i_4]);
        arr_43 [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 17160314364784164014ULL))));
    }
}
