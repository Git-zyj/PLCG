/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41172
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_1] [i_3] = ((/* implicit */signed char) 1013712877357290285LL);
                        var_20 = ((/* implicit */int) ((((/* implicit */int) (short)-3906)) > (((/* implicit */int) (_Bool)1))));
                        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */short) arr_8 [i_0] [i_0 + 2] [i_3] [i_3] [i_0])), (arr_7 [14]))))));
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 3; i_4 < 15; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_4] [i_2] [i_4] [i_5] [i_5] [i_4 - 3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_4] [i_4] [i_5])) || (((/* implicit */_Bool) arr_1 [i_0] [i_1 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5718665320654430522ULL))))) : (((/* implicit */int) arr_3 [i_1 - 1])))) : (((/* implicit */int) ((((unsigned long long int) var_5)) <= (((/* implicit */unsigned long long int) ((arr_9 [i_0 - 2] [i_1] [i_2] [i_4] [i_5]) * (((/* implicit */int) arr_3 [i_5]))))))))));
                                arr_16 [11LL] [i_4] [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned long long int) var_11);
                                var_22 = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_0 [i_4 - 1])))), ((+((~(((/* implicit */int) var_7))))))));
                                var_23 = min((((/* implicit */int) var_14)), (((((/* implicit */_Bool) arr_8 [i_4 + 1] [i_4 - 2] [i_4 - 3] [i_4 - 1] [i_4 + 1])) ? (((/* implicit */int) ((short) (short)-9721))) : (((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_1 + 2] [i_2] [i_4])) ? (arr_9 [i_0 + 2] [i_1 + 2] [i_1] [i_2] [i_5]) : (((/* implicit */int) var_10)))))));
                                var_24 = ((/* implicit */short) -1801018260);
                            }
                        } 
                    } 
                    var_25 &= min(((+(((((/* implicit */unsigned long long int) -1160468996204326954LL)) / (13076200375567510806ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-5353))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) ((4094) & (((/* implicit */int) arr_7 [i_0]))));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 15; i_6 += 4) 
        {
            for (long long int i_7 = 1; i_7 < 14; i_7 += 1) 
            {
                for (short i_8 = 3; i_8 < 15; i_8 += 2) 
                {
                    {
                        var_27 -= ((/* implicit */unsigned int) ((((min((arr_20 [i_8] [i_6] [i_6 - 1] [i_7 + 2]), (arr_14 [i_0 - 1] [i_6] [i_6 - 1]))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (short)-19830)) ? (arr_14 [i_0] [i_6] [i_6 + 1]) : (arr_14 [i_0 + 2] [i_6] [i_6 - 1]))) + (8558261219080535776LL)))));
                        var_28 -= ((/* implicit */long long int) arr_7 [i_0 + 2]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_9 = 1; i_9 < 15; i_9 += 2) 
                        {
                            var_29 = ((/* implicit */short) min((var_29), (arr_23 [(unsigned char)12])));
                            arr_26 [i_0 + 1] [i_6 - 1] [i_9] [i_8] [i_8 + 1] [i_8 + 1] [i_9] = ((/* implicit */long long int) ((unsigned long long int) var_18));
                            var_30 = arr_25 [i_0] [i_0];
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_8 + 1] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_6])) : (((/* implicit */int) arr_4 [i_0 - 2] [i_6 - 1]))));
                            var_32 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_0 [i_8 - 2])) : ((-(var_11)))));
                        }
                        arr_27 [i_0] [i_6] [i_7 - 1] [i_0] &= ((/* implicit */signed char) max((max((arr_24 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_23 [i_0])))), (((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_6]))) : (var_4)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            for (int i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        var_33 *= ((7271340001880741164ULL) >= (((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_10] [i_11] [i_12] [i_11])));
                        var_34 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_12]))))) * (0ULL)));
                    }
                    /* vectorizable */
                    for (short i_13 = 4; i_13 < 15; i_13 += 1) 
                    {
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_13 [(unsigned char)6] [i_10]))) ? (arr_24 [i_13 - 2] [i_0 - 2] [i_13] [i_13 + 1] [i_13 - 2] [i_10]) : (((/* implicit */unsigned long long int) ((arr_4 [i_11] [i_13]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17596))) : (1U))))));
                        var_36 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-543)) : (arr_9 [i_0] [i_0] [i_10] [i_11] [i_13])))));
                    }
                    /* vectorizable */
                    for (signed char i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        var_37 &= ((/* implicit */short) ((((/* implicit */int) arr_25 [i_11] [i_0 - 2])) >> (((((/* implicit */int) arr_37 [i_0] [i_0] [i_0])) + (30761)))));
                        var_38 = ((/* implicit */unsigned char) var_3);
                    }
                    arr_41 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)20731)) ? (97157763784374548LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0 - 1] [i_10] [i_10])) ? (arr_28 [i_11] [i_0 + 2] [i_0 - 2]) : (((/* implicit */long long int) arr_9 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_10]))))));
                    arr_42 [i_0] [i_10] [i_11] = ((/* implicit */short) arr_31 [i_0]);
                }
            } 
        } 
    }
    var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_18), (((/* implicit */signed char) var_13)))))) ^ (((((/* implicit */_Bool) 2087485479)) ? (((/* implicit */unsigned long long int) var_12)) : (var_8)))))))));
    var_40 = (-(min(((+(((/* implicit */int) var_18)))), (((/* implicit */int) var_7)))));
    /* LoopNest 3 */
    for (long long int i_15 = 1; i_15 < 9; i_15 += 4) 
    {
        for (unsigned char i_16 = 1; i_16 < 11; i_16 += 4) 
        {
            for (signed char i_17 = 0; i_17 < 12; i_17 += 2) 
            {
                {
                    arr_49 [i_15] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) 8128)), (9223372036854775807LL))) << (((((((/* implicit */_Bool) var_5)) ? (arr_32 [i_15]) : (6538508240476068374LL))) - (296290933352208618LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((max((var_4), (((/* implicit */unsigned long long int) arr_37 [i_17] [i_17] [i_17])))) >= (((/* implicit */unsigned long long int) arr_47 [i_15 + 2] [i_16] [i_17])))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) 2388309842894598653LL)) ? (var_11) : (arr_1 [i_17] [i_15])))) + (arr_36 [i_17] [i_17] [i_16 + 1] [i_16 - 1])))));
                    /* LoopNest 2 */
                    for (signed char i_18 = 2; i_18 < 11; i_18 += 4) 
                    {
                        for (int i_19 = 3; i_19 < 11; i_19 += 4) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned char) ((min((arr_36 [i_16] [i_16] [i_16 + 1] [i_19 - 2]), (arr_36 [i_15] [i_15 + 2] [i_16 + 1] [i_19 - 2]))) % (((arr_36 [i_15] [i_16 + 1] [i_16 + 1] [i_19 + 1]) | (arr_36 [i_15] [i_15] [i_16 - 1] [i_19 - 1])))));
                                arr_56 [i_15] [i_16] [i_17] [(short)7] [i_19] [i_17] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_36 [i_15] [i_16] [i_16] [i_19])), (arr_5 [i_15] [i_16] [i_17]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_17])) ? (((/* implicit */int) ((_Bool) 1721467010))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_15 + 1] [i_15 + 3] [i_15] [i_15] [i_15]))))))))));
                            }
                        } 
                    } 
                    arr_57 [i_16] = ((/* implicit */unsigned long long int) (+(max(((+(272513777U))), (((/* implicit */unsigned int) (signed char)32))))));
                    var_42 = (short)(-32767 - 1);
                }
            } 
        } 
    } 
    var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) max((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_2))))))), (var_9))))));
}
