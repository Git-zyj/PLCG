/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38844
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
    var_10 = ((unsigned char) var_1);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_1])) >= (((/* implicit */int) arr_2 [i_1])))));
                arr_6 [i_1] [i_1] [6ULL] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1472500877U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)84))) : (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1)))) : ((+(arr_0 [i_1])))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 15; i_2 += 2) /* same iter space */
                {
                    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_0] [i_1] [i_2]))))))))));
                    var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 - 1])) ? (((/* implicit */int) arr_8 [i_0] [(unsigned short)13] [i_2 + 2])) : (((/* implicit */int) (unsigned char)178))));
                    var_13 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))))) ? (arr_1 [i_0] [i_2 - 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) arr_9 [i_0] [(unsigned char)2] [i_1])) : (((/* implicit */int) (unsigned short)65523))))));
                    arr_10 [i_1] = ((/* implicit */unsigned char) arr_4 [i_1]);
                    arr_11 [i_0] [i_2 + 1] [i_1] [9U] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)154)) ^ ((~(((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))))));
                }
                for (short i_3 = 2; i_3 < 15; i_3 += 2) /* same iter space */
                {
                    arr_16 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1408480173U))))) : (((/* implicit */int) arr_13 [i_0]))))) ? ((~(((unsigned long long int) (unsigned char)164)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
                    arr_17 [6ULL] [i_1] [0ULL] = ((/* implicit */unsigned short) (-(max((max((arr_7 [i_0] [(unsigned short)12]), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (short)12288))))));
                }
                for (short i_4 = 2; i_4 < 15; i_4 += 2) /* same iter space */
                {
                    arr_21 [i_1] = max((((short) min((11886316196451778474ULL), (((/* implicit */unsigned long long int) 0U))))), (((/* implicit */short) ((((/* implicit */int) (short)30654)) != (((/* implicit */int) arr_12 [i_4 - 2]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 14; i_6 += 3) 
                        {
                            {
                                arr_28 [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) ((arr_15 [i_1] [i_5 - 1] [i_6 + 2]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [(unsigned short)0] [i_4] [i_5])))))) != (((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_4] [(unsigned char)12] [i_6 - 1])) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (unsigned short)36315)))))));
                                arr_29 [i_0] [i_1] [i_5 + 1] [i_4] &= ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-5615))))), (arr_14 [i_5 + 1] [i_5] [i_5 - 2] [i_6])));
                                var_14 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_0] [i_1] [i_4] [i_5] [(unsigned short)3])) ^ (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) min(((unsigned char)73), ((unsigned char)131)))))));
                                arr_30 [(short)16] [i_1] [i_4] [i_1] [i_0] = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) ((unsigned char) ((unsigned char) ((((/* implicit */int) arr_13 [i_0])) << (((((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [14ULL] [i_1])) - (210)))))))) : (((/* implicit */unsigned int) ((unsigned char) ((unsigned char) ((((/* implicit */int) arr_13 [i_0])) << (((((((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [14ULL] [i_1])) - (210))) + (173))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 2) 
                        {
                            {
                                arr_37 [i_8] [(unsigned short)10] [i_1] [13U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_25 [(unsigned short)12] [i_1] [i_4 + 1] [i_1] [i_8 + 3]), ((unsigned short)491))))) : (min((((/* implicit */unsigned int) (unsigned char)10)), (var_6)))))) ? ((-(((/* implicit */int) arr_26 [i_0] [i_1] [i_1] [i_7] [i_8])))) : (((/* implicit */int) ((((/* implicit */_Bool) min(((short)11881), (((/* implicit */short) arr_26 [(unsigned char)17] [i_8 + 1] [11U] [11U] [4ULL]))))) && (((/* implicit */_Bool) min((arr_24 [(unsigned char)17] [i_7] [i_4] [i_1] [i_0]), (arr_26 [i_8 + 3] [(unsigned short)5] [i_4] [(unsigned short)6] [i_0])))))))));
                                arr_38 [i_1] [i_8 + 1] [i_8] [i_8 + 2] [(unsigned char)16] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((1948676405U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) min((min((max((var_6), (((/* implicit */unsigned int) arr_32 [i_0] [17ULL] [i_0] [i_0] [i_4] [i_4])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) arr_22 [i_4]))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_24 [i_4] [i_1] [(short)1] [i_0] [i_0])))))));
                }
                var_16 = ((/* implicit */unsigned char) 2391806812U);
                var_17 -= ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned short) 0U))), (var_9)));
            }
        } 
    } 
    var_18 = ((/* implicit */short) (unsigned char)110);
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((var_5), (2391806829U)))) & (min((11886316196451778455ULL), (((/* implicit */unsigned long long int) (short)-8803))))))) ? (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)62440))) ? (((28ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)120))))))) : (((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) (short)-3607))))) ? (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) (unsigned char)181))))) : (max((((/* implicit */unsigned long long int) var_2)), (11886316196451778478ULL)))))));
}
