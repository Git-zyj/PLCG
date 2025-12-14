/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23368
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
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 1) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_2 [i_3 - 1])) ? (((/* implicit */int) arr_2 [i_3 - 1])) : (2147483647))), (((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */int) arr_2 [i_3 + 1])) : (((/* implicit */int) (_Bool)1))))));
                        arr_12 [i_0] [i_0] [i_1] [i_0] &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (_Bool)1))) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))), (max((arr_10 [i_1]), (-1LL)))));
                        arr_13 [i_1] [i_3] [i_2] [i_0 + 1] = ((/* implicit */unsigned short) ((short) ((unsigned char) arr_1 [i_3 + 1])));
                        arr_14 [i_0] [i_3] [i_3] [i_3] [i_3 - 1] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) ((var_10) && (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) && ((_Bool)1)))))) & (((/* implicit */int) arr_1 [i_1]))));
                        var_14 = ((/* implicit */unsigned char) (+(max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) var_1))))));
                    }
                    for (int i_4 = 1; i_4 < 11; i_4 += 1) /* same iter space */
                    {
                        var_15 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) arr_7 [i_0 + 2] [i_2] [i_2] [i_4 - 1]))))), (var_4)));
                        arr_17 [i_0] [i_0] = ((/* implicit */signed char) -1716969771);
                    }
                    for (int i_5 = 1; i_5 < 11; i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0 + 2] = ((/* implicit */short) (((+(((/* implicit */int) (_Bool)0)))) < (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_7))))) <= (((((/* implicit */_Bool) var_4)) ? (arr_10 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                        var_16 = ((/* implicit */signed char) (((+(((/* implicit */int) (signed char)76)))) % (((/* implicit */int) (short)-2247))));
                        var_17 = ((/* implicit */unsigned char) max((((-531140155) / (-1949703980))), (((/* implicit */int) (unsigned char)52))));
                        arr_21 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */int) max((arr_15 [i_1] [i_1] [i_1] [i_5 - 1]), (arr_15 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])))) < ((~(((/* implicit */int) var_9))))));
                        var_18 = (+(4251147574049546871LL));
                    }
                    var_19 *= ((/* implicit */signed char) (_Bool)1);
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_20 -= (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-6904)) * (((/* implicit */int) max((((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_2] [i_1])), ((unsigned char)61))))))));
                        var_21 = ((/* implicit */short) ((((/* implicit */int) max(((unsigned char)154), (arr_2 [i_0 + 3])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 2147483641)))))));
                        var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13543)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)63)) : ((~(((/* implicit */int) (_Bool)1)))))) | (((((/* implicit */_Bool) max((((/* implicit */long long int) 16760832)), (var_6)))) ? (((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */int) (short)7737)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_7 = 1; i_7 < 10; i_7 += 4) 
                    {
                        arr_28 [i_0 + 3] [i_7] [i_0 - 1] [i_0 + 3] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_7] [i_0 + 2]))));
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            arr_32 [i_7] [i_1] = ((/* implicit */unsigned long long int) (signed char)96);
                            var_23 = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)245));
                            arr_33 [i_7] [i_7 - 1] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_0 - 1] [i_0 + 1])) | (((/* implicit */int) arr_26 [i_0 + 1] [i_0 + 3]))));
                        }
                        for (long long int i_9 = 2; i_9 < 10; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) (-(((int) arr_6 [i_9 - 1] [i_0] [i_0] [i_0]))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_2] [i_7 + 2])) ? (-2160671691488797084LL) : (4300118503988229556LL))))));
                        }
                        var_26 = ((/* implicit */unsigned int) arr_29 [i_0 + 2] [i_1] [i_1] [i_1] [i_2] [i_7 - 1]);
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (+(var_6))))));
                        arr_36 [i_0 + 1] [i_0 + 1] [i_2] [i_7] = ((int) (~(((/* implicit */int) var_12))));
                    }
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_28 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) (unsigned char)158)))) < (((/* implicit */int) ((unsigned char) (unsigned char)236))))))) > ((+(arr_16 [i_1] [i_2] [i_1] [i_1] [i_1] [i_0 + 1])))));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((2305807824841605120LL), (((/* implicit */long long int) 2483892788U)))), (((/* implicit */long long int) (_Bool)0))))) ? (-874412774084057488LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483634)) < (((5269484059201241461ULL) >> (((-874412774084057499LL) + (874412774084057541LL)))))))))));
                        arr_41 [i_0] [i_0] = ((/* implicit */int) ((unsigned char) ((int) arr_25 [i_1] [i_10 - 1])));
                    }
                    arr_42 [i_2] = ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned char)203)) ? (((long long int) (signed char)120)) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_8))))))), (((/* implicit */long long int) ((short) (+(((/* implicit */int) (signed char)-36))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_11 = 2; i_11 < 11; i_11 += 4) 
                {
                    var_30 = ((/* implicit */long long int) ((unsigned char) arr_25 [i_1] [i_1]));
                    /* LoopNest 2 */
                    for (short i_12 = 1; i_12 < 10; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            {
                                arr_51 [i_0] [i_0] [i_12] [i_0] [i_0] [i_13] [i_13] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) var_8)))) ^ (((/* implicit */int) ((_Bool) -874412774084057480LL)))));
                                var_31 &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) | (-4300118503988229573LL)));
                                arr_52 [i_0] [i_0] [i_12] [i_12 - 1] [i_0] = ((/* implicit */long long int) arr_43 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1]);
                                var_32 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
                var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) var_6)))));
            }
        } 
    } 
    var_34 = var_2;
}
