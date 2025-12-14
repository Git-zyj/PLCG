/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243816
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((((/* implicit */int) (signed char)91)) & (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_14))))))) * (((/* implicit */int) (signed char)127)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = (~(((/* implicit */int) (short)-7620)));
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 2])) ? (arr_1 [i_0 - 2] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((2147483647) ^ (((/* implicit */int) (signed char)(-127 - 1))))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
        {
            var_16 ^= ((/* implicit */unsigned long long int) (signed char)-107);
            arr_6 [4LL] [i_1] |= ((/* implicit */unsigned int) (-(((long long int) arr_0 [i_0]))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)30138))));
            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
            /* LoopSeq 1 */
            for (long long int i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_3 = 3; i_3 < 14; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((unsigned short) 11643404323393537176ULL));
                        var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */int) (unsigned char)241)) : (-1140569302)));
                    }
                    var_20 = ((/* implicit */long long int) (unsigned char)6);
                    var_21 = ((/* implicit */unsigned char) ((unsigned long long int) arr_9 [i_0] [i_1]));
                }
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((arr_11 [i_0 + 1] [i_0 + 1] [i_0] [i_0]) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_18 [i_0] [i_1])))) * (((((/* implicit */int) arr_10 [i_5] [(signed char)9])) / (((/* implicit */int) (unsigned char)255)))))))));
                            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4018527611173629665LL)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) arr_14 [i_0] [(unsigned char)3] [i_0] [i_2] [1LL] [i_6]))))) ? (arr_5 [i_2 - 1] [9] [i_0 - 1]) : (((/* implicit */unsigned long long int) 72057044282114048LL)));
                        }
                    } 
                } 
                var_24 = ((/* implicit */int) ((long long int) (~(7484449297310380407ULL))));
            }
        }
        for (short i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
        {
            arr_24 [i_0 - 1] [i_0] = ((/* implicit */_Bool) (-(3807444319U)));
            var_25 ^= ((/* implicit */unsigned char) (!(arr_22 [i_0 + 1] [i_0] [i_7])));
            arr_25 [(short)0] [4] |= ((/* implicit */unsigned char) (~(arr_1 [i_0] [(unsigned short)15])));
        }
        for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 3; i_9 < 15; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    for (long long int i_11 = 3; i_11 < 16; i_11 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))));
                            var_27 = ((/* implicit */signed char) -3443990402995601296LL);
                            var_28 = ((/* implicit */signed char) (unsigned char)229);
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((/* implicit */int) (short)30596)) - (30572)))))) ? (((((/* implicit */_Bool) (unsigned char)234)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-113))))) : (arr_33 [i_9] [i_0 - 2] [i_9 + 2] [i_9] [i_11 + 1])));
                            var_30 = ((/* implicit */signed char) ((short) 2147483647));
                        }
                    } 
                } 
                var_31 &= ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_17 [i_9] [8LL] [i_0 - 2] [i_9 + 2] [i_9 - 2])));
                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)17163)))) && ((!(((/* implicit */_Bool) var_0)))))))));
            }
            var_33 = ((/* implicit */unsigned char) 2147483647);
        }
        var_34 = ((/* implicit */signed char) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_35 = ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) arr_16 [16] [i_0 + 1] [i_0 - 2] [i_0])) : (((/* implicit */int) arr_16 [i_0] [i_0 - 2] [i_0] [i_0])));
    }
}
