/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26886
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_3 [i_0])) - (((/* implicit */int) arr_3 [i_1]))))));
                    var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) -6LL)) & (18446744073709551615ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_3 [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (+(((arr_2 [i_3] [i_3]) + (arr_2 [i_3] [i_4]))))))));
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 14; i_5 += 2) 
                {
                    arr_16 [i_3] [(short)2] &= (((!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (signed char)-1))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_3))))));
                    var_15 -= ((/* implicit */unsigned long long int) (+(((-5232320481052086725LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-32766)))))));
                    var_16 -= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)86)))))));
                }
                var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)32765))));
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(3631578837U)))) + (((arr_18 [i_6 - 2] [i_6 + 1] [i_6 + 2] [i_6]) * (((/* implicit */unsigned long long int) var_8)))))))));
                    arr_19 [i_4] [i_4] [i_4] [(signed char)10] = ((/* implicit */signed char) (((+(((/* implicit */int) (signed char)127)))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) > (7ULL))))));
                    var_19 = (i_4 % 2 == zero) ? (((((((/* implicit */int) arr_15 [i_4] [i_6 - 3] [(signed char)5] [i_4])) << (((((/* implicit */int) arr_15 [i_4] [i_6 + 3] [i_6] [i_4])) - (126))))) << ((((~(arr_14 [i_4] [i_6 - 1] [i_6 - 3]))) - (13646154910240944790ULL))))) : (((((((/* implicit */int) arr_15 [i_4] [i_6 - 3] [(signed char)5] [i_4])) << (((((((/* implicit */int) arr_15 [i_4] [i_6 + 3] [i_6] [i_4])) - (126))) + (91))))) << ((((((~(arr_14 [i_4] [i_6 - 1] [i_6 - 3]))) - (13646154910240944790ULL))) - (2852494679073635876ULL)))));
                    arr_20 [i_4] = ((/* implicit */unsigned int) (((((+(((/* implicit */int) (_Bool)1)))) & ((~(((/* implicit */int) (short)(-32767 - 1))))))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_6] [i_6 - 1] [i_6 - 3]))) < (32767U))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_7 = 2; i_7 < 14; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */int) arr_12 [i_4])) << (((/* implicit */int) (signed char)0))));
                        var_21 = ((/* implicit */short) (-(((/* implicit */int) var_11))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_25 [6ULL] [6ULL] [6ULL] [i_6] [i_8] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) != (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-25)) && (((/* implicit */_Bool) arr_17 [i_4] [i_4])))))));
                        arr_26 [i_3] [i_4] [i_8] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_14 [i_4] [i_6 - 2] [i_6 - 3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) & ((+(((/* implicit */int) arr_13 [i_4]))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            var_22 = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_23 [i_6 + 2] [i_6 + 2] [i_6] [i_10]))))));
                            var_23 = ((/* implicit */long long int) (((+(606294913U))) < (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)19176)))))) ^ (var_10)))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_14 [i_4] [i_6 + 1] [i_6 - 2])))) && (((((((/* implicit */long long int) var_9)) | (-1073741824LL))) > (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                            arr_35 [i_3] [i_4] [i_6] [i_9] [i_11] = ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-16))))) % ((~(((/* implicit */int) arr_28 [i_3] [(signed char)1] [i_6] [i_3])))));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((3688672382U) & (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) & (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) (_Bool)0))))))))));
                        }
                    }
                }
                for (unsigned long long int i_12 = 3; i_12 < 12; i_12 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 15; i_13 += 3) /* same iter space */
                    {
                        arr_42 [i_3] [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))))) >> (((5503659810608338237ULL) - (5503659810608338235ULL)))));
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (short)19176)))))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned int) (((~(((/* implicit */int) (signed char)25)))) ^ (((((/* implicit */int) (unsigned char)248)) << (((var_10) - (1394488962U)))))));
                        arr_45 [i_4] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) ^ (((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned char)244))))) - (arr_22 [i_4] [(signed char)9] [i_12 - 2] [i_12 + 1] [9LL])))));
                    }
                    for (unsigned char i_15 = 0; i_15 < 15; i_15 += 3) /* same iter space */
                    {
                        arr_48 [i_4] [i_4] [i_4] = ((/* implicit */signed char) (((+(0ULL))) < ((-(0ULL)))));
                        arr_49 [i_4] [(unsigned char)6] [i_12] [i_12 - 3] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_7))))));
                    }
                    arr_50 [i_4] = ((/* implicit */_Bool) (~(((((/* implicit */int) (short)15887)) << (((var_1) - (938640597U)))))));
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (long long int i_17 = 2; i_17 < 11; i_17 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) (+((-(5941966357248340264LL)))));
                                arr_55 [i_3] [i_4] [i_12] [i_4] [i_16] [i_17 - 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255)))))));
                                arr_56 [i_4] [i_4] = ((/* implicit */unsigned int) (((+(arr_9 [i_3]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 10076904734427986815ULL))))))));
                                var_29 *= ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (var_1)))));
                                arr_57 [i_17] [i_4] [i_12] [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_12 - 1])) != (((/* implicit */int) (unsigned char)7))))) ^ (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_3 [i_12 + 2])))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (~(((/* implicit */int) (short)20899)))))));
                }
            }
        } 
    } 
}
