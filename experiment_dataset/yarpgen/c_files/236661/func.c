/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236661
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
    var_10 += ((/* implicit */long long int) max((var_9), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 20ULL)))))));
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) var_7))));
    var_12 *= ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_7)))) | ((+(14714783161704797396ULL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(((var_0) % (((/* implicit */unsigned long long int) 8807301459560186953LL))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_13 += ((/* implicit */unsigned long long int) (unsigned short)33104);
            var_14 = ((/* implicit */unsigned long long int) ((arr_1 [i_0 + 1]) != (((/* implicit */unsigned long long int) (-(arr_0 [i_0]))))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
            {
                arr_9 [i_1] [i_1] |= ((/* implicit */unsigned short) ((long long int) -2006775089404914035LL));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (+((~(70368744177663LL))))))));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (~(arr_11 [(unsigned short)12] [i_1] [i_3] [i_3]))))));
                    var_17 -= ((/* implicit */long long int) ((unsigned short) (~(arr_5 [(unsigned short)5] [i_1]))));
                    var_18 = ((arr_10 [12LL] [i_0 - 1] [i_2] [5ULL] [i_3]) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                }
            }
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_0] [i_1] [8LL]))));
                var_20 = ((/* implicit */long long int) (unsigned short)245);
                var_21 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_5))))));
            }
        }
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (11074574444082535664ULL))))));
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_18 [5LL] [i_6]))));
            var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-8807301459560186953LL))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 12789798907251937436ULL))))));
            arr_20 [i_6] [i_6] [12ULL] &= ((/* implicit */long long int) ((unsigned long long int) arr_5 [i_5 + 1] [i_5 - 1]));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 4) 
            {
                var_25 = ((/* implicit */long long int) 18446744073709551596ULL);
                var_26 = ((/* implicit */unsigned long long int) ((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5])))));
                var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_5] [i_6] [i_7] [i_7] [i_6]))));
                /* LoopSeq 3 */
                for (long long int i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
                {
                    var_28 = ((long long int) arr_22 [i_5] [i_6] [i_7 + 1] [2LL]);
                    var_29 = ((/* implicit */unsigned long long int) (+(arr_0 [i_5])));
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_5] [i_7 - 1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [9LL] [i_7 - 1] [10LL]))) : (arr_11 [8ULL] [i_7 + 3] [i_7 + 3] [i_8])));
                }
                for (long long int i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
                {
                    var_31 = 9223372036854775807LL;
                    var_32 = ((/* implicit */unsigned short) ((((arr_15 [i_6] [i_5]) % (((/* implicit */unsigned long long int) arr_11 [i_5] [i_5] [i_9] [i_5])))) > (((/* implicit */unsigned long long int) (~(arr_17 [i_9] [(unsigned short)2]))))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    var_33 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)48))) / (arr_6 [i_5] [i_6]));
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_7 [i_5 + 1] [i_5 + 1] [i_6] [2ULL])) : ((-(17082882782430244912ULL)))));
                }
            }
        }
    }
}
