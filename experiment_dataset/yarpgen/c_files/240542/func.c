/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240542
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_2] |= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (unsigned short)65533)), (var_11))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_2] [i_2] [i_1 + 1])) ^ (((/* implicit */int) var_9)))))));
                    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) == (10523194659913426124ULL)))) - ((-(((/* implicit */int) var_9)))))) & (((/* implicit */int) ((unsigned short) arr_0 [i_0])))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (short i_3 = 3; i_3 < 11; i_3 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) ((unsigned short) ((((((/* implicit */_Bool) 0U)) ? (var_1) : (var_14))) << (((-140550738) + (140550738))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                {
                    var_17 = ((unsigned int) ((((/* implicit */int) ((unsigned short) var_14))) << (((((var_1) | (((/* implicit */unsigned int) var_7)))) - (2130388989U)))));
                    arr_14 [i_5] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_10)))) - ((+(var_14)))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_1))));
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        arr_17 [i_3] [i_4] [i_4] [i_6] = ((/* implicit */unsigned short) max(((-(0ULL))), (((/* implicit */unsigned long long int) ((unsigned int) 441518757)))));
                        arr_18 [i_3 - 3] [i_3 - 3] [2LL] [i_4] = (~(((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_0))))));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) + (max((1731124524U), (((/* implicit */unsigned int) arr_8 [i_3 + 1] [i_6])))))))));
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            arr_22 [i_3] [i_5] [i_3] |= ((/* implicit */unsigned char) var_8);
                            var_20 = ((/* implicit */short) (-(max((((((/* implicit */_Bool) var_4)) ? (7923549413796125492ULL) : (((/* implicit */unsigned long long int) var_12)))), (((7923549413796125491ULL) + (((/* implicit */unsigned long long int) -1669112267761752673LL))))))));
                            var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1045529359U)) ? (((/* implicit */int) (!(var_6)))) : (min((((/* implicit */int) var_2)), (var_7)))))), (((((/* implicit */_Bool) ((unsigned int) var_11))) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                        }
                        for (unsigned int i_8 = 2; i_8 < 11; i_8 += 2) 
                        {
                            arr_26 [i_8] [i_4] [i_3 - 2] [i_5] [i_4] [i_3 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (845776658072740625LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-3719)))));
                            var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 11260322958444132018ULL)) ? (((/* implicit */unsigned long long int) -1LL)) : (11260322958444132018ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-118)))))))) ? (((441518757) + (var_13))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                        }
                        arr_27 [i_5] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */short) (+(var_11)));
                    }
                    for (int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        var_23 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_6 [i_3 - 3] [(unsigned short)13]) ^ (441518767)))) >= (max((max((7923549413796125492ULL), (((/* implicit */unsigned long long int) 140550738)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))))));
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (!((_Bool)0))))));
                        arr_31 [i_4] = ((/* implicit */short) ((unsigned int) (+(((/* implicit */int) ((var_6) || ((_Bool)1)))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_25 = ((((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((short) (short)2787)))))) / (((/* implicit */long long int) ((/* implicit */int) ((short) arr_9 [i_3 - 1])))));
                        arr_36 [i_4] [i_3] [i_4] [(unsigned short)2] [i_5] [(short)1] = var_2;
                    }
                }
            } 
        } 
    }
    for (short i_11 = 3; i_11 < 11; i_11 += 1) /* same iter space */
    {
        arr_40 [i_11] [i_11] = (short)7430;
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(var_7)))), (((var_1) + (var_1)))))) || (((/* implicit */_Bool) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) <= (var_11)))))));
    }
    /* vectorizable */
    for (short i_12 = 3; i_12 < 11; i_12 += 1) /* same iter space */
    {
        arr_43 [i_12] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) + (140550743))) + (((/* implicit */int) ((short) var_7)))));
        arr_44 [(short)5] [i_12 + 1] |= ((/* implicit */int) ((unsigned int) 18446744073709551615ULL));
    }
}
