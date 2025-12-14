/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236397
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_14 |= ((/* implicit */int) (((_Bool)1) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        var_15 = ((/* implicit */int) arr_1 [12]);
        var_16 = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0]))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)21948)) : (-1889401477))) <= (((/* implicit */int) arr_1 [i_0])))))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                {
                    var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((_Bool) (unsigned short)43591))))) < (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_4 [i_1] [i_1])) * (((/* implicit */int) (_Bool)1))))))));
                    var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_8 [5LL] [5LL] [5LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1 - 2]))) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 1])))))) ? ((~(arr_0 [i_1 - 3]))) : (arr_3 [i_1 + 1])));
                    arr_9 [i_1 + 1] [i_2] [i_2] [(unsigned char)2] = ((/* implicit */unsigned short) arr_1 [i_1 - 2]);
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) (unsigned short)21948);
        /* LoopNest 3 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 2; i_5 < 10; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_1 - 3]) / (arr_0 [i_1 - 2])))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_8 [4ULL] [7LL] [i_5])), (arr_0 [i_1])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (arr_12 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5])))));
                        var_22 = ((((/* implicit */_Bool) ((int) (-2147483647 - 1)))) ? (((/* implicit */int) max(((unsigned short)21944), (((/* implicit */unsigned short) arr_4 [i_4 - 1] [i_5 + 1]))))) : (((((/* implicit */_Bool) arr_4 [i_4 - 1] [i_5 - 1])) ? (((/* implicit */int) (unsigned short)21957)) : (((/* implicit */int) arr_4 [i_4 - 1] [i_5 - 2])))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 2203953868U)) && (((/* implicit */_Bool) -9223372036854775799LL)))) ? (((/* implicit */int) arr_13 [i_7] [i_5] [(_Bool)1])) : (((/* implicit */int) ((_Bool) arr_16 [i_1 - 1] [i_4 - 1] [i_5])))));
                            var_24 = ((/* implicit */short) (+(((/* implicit */int) ((628333794427705771LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21938))))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_23 [i_1] [i_1] [i_5] [i_6] [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                            arr_24 [i_5] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? (9720825572061147851ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((((/* implicit */_Bool) arr_5 [i_1 - 4])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) ^ (arr_19 [10] [7LL] [i_5] [i_6] [i_5]))) : (min((min((((/* implicit */long long int) arr_16 [i_5] [i_4 - 1] [i_5])), (arr_7 [i_4] [i_5] [i_5]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))))))));
                            var_25 = ((/* implicit */long long int) (unsigned char)245);
                            arr_25 [i_5] [i_4] [(signed char)0] [i_4 - 1] [i_4] [i_4] [2U] = ((/* implicit */int) ((var_1) % (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 7058188139403790688LL)) ? (5954610181364263738LL) : (((/* implicit */long long int) 238257725))))))));
                            arr_26 [i_1] [i_1] [i_5] [i_5] [i_5] [i_8] &= ((/* implicit */int) ((signed char) (~((+(arr_3 [i_1]))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 628333794427705754LL)) || ((_Bool)1))) ? (((/* implicit */long long int) min((4294967295U), (((/* implicit */unsigned int) var_11))))) : (var_5)))) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (var_13) : (var_8))))))));
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            {
                var_27 = ((/* implicit */short) (~(((/* implicit */int) (short)20521))));
                var_28 = ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) (_Bool)0)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_28 [i_9])))))));
                var_29 = ((/* implicit */_Bool) arr_27 [(unsigned char)5] [i_10]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
    {
        var_30 = max(((+(((((/* implicit */_Bool) (unsigned short)43577)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43582))) : (arr_32 [i_11]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_11] [i_11])) ? (arr_31 [i_11] [i_11]) : (((/* implicit */int) (short)30235))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60))) : (((arr_30 [i_11] [i_11] [17ULL]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_11]))) : (arr_0 [i_11]))))));
        var_31 *= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_11] [i_11])) ? ((-(((/* implicit */int) arr_1 [i_11])))) : ((~(arr_31 [i_11] [i_11])))))), (((min((var_2), (var_4))) << (((/* implicit */int) ((_Bool) (short)21)))))));
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (int i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_15 = 0; i_15 < 16; i_15 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) 4294967295U);
                            var_33 = ((/* implicit */_Bool) arr_40 [i_13] [(short)0]);
                        }
                        arr_44 [6LL] [i_12] [i_13] [i_12] = ((/* implicit */unsigned int) (-(arr_40 [i_11] [i_11])));
                        arr_45 [i_12] = ((/* implicit */unsigned char) ((min((min((-7157316521210895679LL), (((/* implicit */long long int) arr_35 [i_11] [i_11])))), (((/* implicit */long long int) (signed char)18)))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_12] [i_14]))))))));
                    }
                } 
            } 
        } 
        arr_46 [i_11] = ((/* implicit */_Bool) ((unsigned short) ((var_3) >= (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_11] [i_11]))))));
        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((2203953891U), (((/* implicit */unsigned int) arr_42 [i_11] [i_11])))) << (((arr_39 [i_11] [i_11] [i_11] [i_11]) + (1689611401818993164LL)))))) ? ((-(((((/* implicit */_Bool) arr_0 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((short) arr_34 [i_11] [i_11] [i_11]))) == (((/* implicit */int) arr_1 [i_11]))))))));
    }
    for (unsigned short i_16 = 0; i_16 < 10; i_16 += 3) 
    {
        var_35 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2091013432U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_16]))) : (arr_11 [i_16] [i_16] [i_16]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_16] [i_16] [(signed char)4] [(signed char)4] [i_16])))));
        arr_50 [i_16] = ((/* implicit */signed char) arr_41 [i_16] [i_16] [i_16] [10]);
        arr_51 [i_16] [i_16] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30232))) % (var_1)));
    }
    var_36 = ((/* implicit */signed char) ((((/* implicit */long long int) 16U)) > (-7315852762569936804LL)));
}
