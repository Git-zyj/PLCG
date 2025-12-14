/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193263
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -556377463)) ? (((/* implicit */long long int) 229513704)) : (arr_1 [i_0])))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)32768))))) < (arr_1 [i_0 + 1]))))));
                        var_21 = ((/* implicit */unsigned short) ((signed char) var_15));
                    }
                    var_22 += (~((-(229513704))));
                    arr_12 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (-229513705) : (((/* implicit */int) var_10))));
                    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) (_Bool)1)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_4 = 3; i_4 < 10; i_4 += 3) 
        {
            var_24 = ((/* implicit */int) ((arr_3 [i_4 + 1] [i_0] [i_0 - 2]) / (arr_3 [i_4 - 1] [i_0] [i_0])));
            var_25 = ((/* implicit */unsigned int) ((unsigned short) arr_7 [i_0 - 2] [i_4]));
        }
        var_26 &= (!(((/* implicit */_Bool) arr_10 [i_0 - 1])));
    }
    for (short i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_27 -= ((/* implicit */int) ((min((3922612714U), (((/* implicit */unsigned int) (unsigned short)25101)))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 7523718019700583900LL)), (19ULL)))) ? ((~(((/* implicit */int) arr_18 [i_5])))) : (((/* implicit */int) arr_18 [i_5])))))));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            for (unsigned char i_7 = 3; i_7 < 22; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            {
                                var_28 |= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) -5145555880513533852LL)))))));
                                var_29 *= ((/* implicit */unsigned char) min(((+(((/* implicit */int) var_4)))), (((arr_32 [i_9] [i_9] [i_9 + 1] [i_9 + 1] [i_9]) ? (((/* implicit */int) arr_26 [i_9] [i_9] [i_9] [i_9 + 1] [i_9] [i_9 + 1])) : (((/* implicit */int) arr_30 [i_9] [i_9] [i_9 + 1] [i_9 + 1] [i_9]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 4; i_10 < 22; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            {
                                arr_38 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-15601)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_10] [i_6] [i_5])) ? (((/* implicit */int) (unsigned char)28)) : (var_3)))) & (((((/* implicit */_Bool) 7261352350545662750LL)) ? (17793781300624491937ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : ((-(((((/* implicit */_Bool) 62286725U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_5] [i_5] [i_5]))) : (18446744073709551597ULL)))))));
                                var_30 = ((/* implicit */short) (-(((652962773085059678ULL) * (((/* implicit */unsigned long long int) 584480947U))))));
                                var_31 = arr_20 [i_7 - 2];
                                var_32 = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_32 [i_10 - 1] [i_10 - 1] [i_6] [i_6] [i_5]))))) / (min((((/* implicit */unsigned long long int) 634416110)), (652962773085059679ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        /* LoopNest 3 */
        for (short i_13 = 0; i_13 < 15; i_13 += 4) 
        {
            for (long long int i_14 = 3; i_14 < 14; i_14 += 2) 
            {
                for (long long int i_15 = 4; i_15 < 14; i_15 += 3) 
                {
                    {
                        var_33 = ((/* implicit */unsigned char) min((33554431LL), (((/* implicit */long long int) min(((unsigned char)41), (arr_18 [i_15 + 1]))))));
                        var_34 = ((/* implicit */int) arr_26 [i_13] [i_14] [i_13] [i_15 - 1] [i_13] [i_13]);
                        var_35 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (arr_42 [i_14 - 3]) : (arr_42 [i_14 - 1]))) - (min((arr_42 [i_14 - 3]), (((/* implicit */unsigned long long int) 1994556409))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_16 = 0; i_16 < 15; i_16 += 2) 
        {
            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) min((17793781300624491937ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-32503))))))))));
            arr_51 [i_12] [i_16] = ((/* implicit */unsigned short) ((int) ((arr_20 [i_12]) % (((/* implicit */unsigned int) ((/* implicit */int) var_18))))));
        }
    }
    /* LoopNest 3 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        for (unsigned char i_18 = 0; i_18 < 20; i_18 += 1) 
        {
            for (unsigned short i_19 = 4; i_19 < 16; i_19 += 3) 
            {
                {
                    var_37 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35724))) : (33554431LL)))))) ? (min((((/* implicit */unsigned long long int) 1994556409)), (652962773085059679ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (_Bool)0))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43045))) : (arr_57 [i_19 + 2] [i_19 + 1]))))));
                    /* LoopNest 2 */
                    for (long long int i_20 = 0; i_20 < 20; i_20 += 2) 
                    {
                        for (unsigned char i_21 = 2; i_21 < 19; i_21 += 4) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned long long int) var_13);
                                var_39 = ((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) arr_30 [i_21 + 1] [i_19 - 1] [i_19] [i_19] [i_19])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_22 = 3; i_22 < 19; i_22 += 2) 
                    {
                        arr_70 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */signed char) (+(((long long int) (-(arr_60 [i_18]))))));
                        arr_71 [i_22] = ((/* implicit */short) arr_37 [i_17] [i_17] [i_18] [i_17] [i_19] [i_22]);
                    }
                }
            } 
        } 
    } 
}
