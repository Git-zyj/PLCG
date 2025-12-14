/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36454
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
    var_18 = ((/* implicit */unsigned int) (~(var_11)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 4; i_2 < 16; i_2 += 2) 
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (arr_5 [i_2] [i_1] [i_2 + 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((15513151403374675679ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) : ((~(((((/* implicit */_Bool) var_6)) ? (arr_7 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) arr_3 [i_1] [i_2]))))))));
                arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((var_10) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [4ULL])))));
                var_20 = ((/* implicit */short) var_9);
                var_21 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (max((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])), (var_17))) : (((/* implicit */int) ((unsigned char) var_16)))))), (((((/* implicit */_Bool) (-(arr_6 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27866))) : (((((/* implicit */_Bool) 2933592670334875945ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_3 [i_1] [i_1])))))));
                arr_9 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_1 [i_2 - 1] [i_2 - 4]))))));
            }
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                var_22 = ((/* implicit */long long int) ((unsigned int) ((arr_6 [i_0]) / (arr_6 [i_0]))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        {
                            arr_19 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) arr_18 [i_0] [12LL] [i_0] [i_4] [i_1]))), (min((((/* implicit */unsigned long long int) arr_7 [i_5] [i_1] [i_0])), (var_11)))))) ? (var_11) : (((/* implicit */unsigned long long int) ((min((arr_11 [i_1] [(unsigned short)13] [i_4] [i_5]), (((/* implicit */unsigned int) (short)-27867)))) | (((/* implicit */unsigned int) ((/* implicit */int) ((var_15) != (((/* implicit */long long int) 2924103576U)))))))))));
                            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)27866))) * (arr_5 [i_3] [i_3] [i_3]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((((/* implicit */int) ((unsigned char) arr_6 [i_0]))) - (141))))))));
            }
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_0] [2U]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_10))), (min((((/* implicit */long long int) ((var_17) - (var_17)))), ((~(-593152292991236559LL))))))))));
            var_26 ^= ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_1] [i_1]);
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            arr_22 [i_0] [i_6] [i_6] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (short)-29252))))));
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_6] [i_6])) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_6]))))));
            arr_23 [i_0] [i_6] = ((/* implicit */signed char) var_2);
            arr_24 [i_0] = arr_16 [4U] [i_6] [i_6] [i_6] [i_6] [i_0] [i_0];
        }
        var_28 += ((/* implicit */unsigned int) arr_13 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 3; i_7 < 16; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                {
                    arr_31 [i_0] [i_0] &= var_5;
                    arr_32 [i_0] [i_7] [i_0] = ((/* implicit */long long int) (~((((!(((/* implicit */_Bool) (short)62)))) ? (14685865738470666968ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)84)))))));
                    arr_33 [i_7] [i_7] = ((/* implicit */unsigned char) (~(((8632783367537697353ULL) & (((/* implicit */unsigned long long int) -8503055992369088784LL))))));
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        for (long long int i_10 = 4; i_10 < 16; i_10 += 4) 
                        {
                            {
                                arr_39 [(unsigned short)15] [(unsigned short)15] [i_8] [i_9] [i_7] = ((/* implicit */unsigned short) arr_38 [i_7 + 1] [6ULL] [i_10 - 3] [i_10] [i_10]);
                                var_29 -= ((/* implicit */unsigned char) ((unsigned long long int) (+(((arr_29 [i_10] [i_8] [i_10 - 3]) + (((/* implicit */int) arr_16 [i_9] [i_9] [i_9] [i_8] [i_0] [i_7] [i_0])))))));
                            }
                        } 
                    } 
                    arr_40 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((9854480457923997853ULL), (((/* implicit */unsigned long long int) (short)-6252)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-13)) && (((/* implicit */_Bool) -9223372036854775786LL)))))))) ? ((~(((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [1] [i_0] [i_7 + 1] [i_8] [i_8] [i_8])) ? (((/* implicit */int) (unsigned char)236)) : (var_5)))) ? (((/* implicit */int) arr_0 [i_7 + 1])) : ((+(((/* implicit */int) var_14))))))));
                }
            } 
        } 
        var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */signed char) var_1)), (arr_28 [i_0] [i_0])))) % (((((/* implicit */_Bool) (short)-27867)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0]))))))) ? ((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (var_10)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-27877))))) ? (((/* implicit */int) arr_26 [i_0] [i_0])) : (((/* implicit */int) ((unsigned short) var_8)))))));
    }
    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
    {
        var_31 *= ((/* implicit */unsigned char) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 2; i_12 < 7; i_12 += 4) 
        {
            for (unsigned short i_13 = 1; i_13 < 7; i_13 += 1) 
            {
                {
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) max((var_2), (((/* implicit */short) var_13)))))))))));
                    var_33 += ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_13 + 3])) ? (((((/* implicit */_Bool) arr_51 [i_11])) ? (15206721216413644233ULL) : (2933592670334875939ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (((/* implicit */short) var_8)))))))));
                    arr_52 [i_11] [i_11] [i_11] = ((/* implicit */long long int) (~(arr_49 [8LL] [i_13] [i_11])));
                    arr_53 [i_11] [(signed char)2] [i_13] = ((/* implicit */_Bool) var_14);
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned int) max(((!((!(arr_15 [i_11] [i_11]))))), (var_12)));
        var_35 += ((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned char) min((arr_2 [i_11]), (arr_2 [i_11]))))));
    }
    var_36 = ((/* implicit */unsigned long long int) -3723586531858733120LL);
    var_37 = ((/* implicit */unsigned long long int) var_7);
    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (signed char)60))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))));
}
