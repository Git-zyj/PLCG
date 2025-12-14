/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53385
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
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_0 - 2]), (arr_0 [i_0 - 2])))) ? (((/* implicit */unsigned long long int) min((arr_0 [i_0 - 2]), (arr_0 [i_0 + 2])))) : (((unsigned long long int) arr_0 [i_0 - 1]))));
        var_12 = ((/* implicit */long long int) arr_0 [i_0]);
        var_13 = ((/* implicit */long long int) var_4);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 3) 
    {
        arr_5 [i_1 + 1] = ((/* implicit */unsigned int) 12971406643851336313ULL);
        arr_6 [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 + 2]))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            arr_9 [i_2] |= ((/* implicit */unsigned int) ((arr_3 [i_1 + 2] [i_2 + 4]) + (arr_3 [i_2 + 2] [i_1])));
            arr_10 [i_1] [i_2] [16U] = ((/* implicit */unsigned char) ((var_2) + (((/* implicit */unsigned long long int) arr_4 [i_2 + 3] [i_1 - 3]))));
            var_14 = ((/* implicit */unsigned char) (+(((var_3) << (((var_0) - (4010295041U)))))));
        }
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            arr_13 [i_3] = ((/* implicit */unsigned char) (-((+(var_0)))));
            /* LoopSeq 1 */
            for (long long int i_4 = 1; i_4 < 23; i_4 += 4) 
            {
                var_15 = ((/* implicit */unsigned int) (+((+(0ULL)))));
                /* LoopSeq 2 */
                for (unsigned int i_5 = 2; i_5 < 21; i_5 += 2) 
                {
                    var_16 = var_3;
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((arr_16 [i_1 + 2]) > (((/* implicit */unsigned long long int) var_5)))))));
                    var_18 = ((/* implicit */unsigned char) var_7);
                    var_19 = arr_17 [i_1 - 1] [i_3] [i_4 + 1] [i_5 - 2];
                }
                for (unsigned int i_6 = 1; i_6 < 22; i_6 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) ((6556979340320743334LL) - (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(((var_2) - (((/* implicit */unsigned long long int) 2680159294622700224LL)))))))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_7 = 2; i_7 < 23; i_7 += 1) 
                {
                    arr_24 [i_1] [i_3] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6556979340320743343LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_2)))) ? ((~(arr_18 [i_1] [i_1 - 2] [i_1 + 2] [i_1 - 2]))) : (((((/* implicit */_Bool) -6556979340320743335LL)) ? (((/* implicit */long long int) arr_20 [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1])) : (arr_4 [i_3] [i_4 + 1])))));
                    var_22 = ((/* implicit */unsigned long long int) ((arr_18 [i_1] [i_7 - 1] [i_4] [i_7 - 2]) - (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                    var_23 = ((/* implicit */long long int) (((+(arr_21 [i_1 - 1] [(unsigned char)7] [(unsigned char)7] [(unsigned char)7] [i_1] [i_1]))) ^ (((unsigned int) arr_8 [i_7 - 1]))));
                    arr_25 [i_7] [i_4 - 1] [i_3] [i_1] = ((/* implicit */unsigned int) var_6);
                }
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    arr_28 [i_1] [i_1] [i_3] [i_4] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)64)) >> (((-6556979340320743350LL) + (6556979340320743363LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))) : (((/* implicit */int) (unsigned char)24))));
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 4; i_9 < 20; i_9 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (4138025797189588231ULL) : (((/* implicit */unsigned long long int) var_7)))))));
                        var_25 = ((long long int) (-(var_3)));
                    }
                    for (unsigned int i_10 = 4; i_10 < 20; i_10 += 4) /* same iter space */
                    {
                        arr_33 [i_1 + 2] [i_3] [i_4] [i_8] [i_10] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_1] [3LL] [i_1 - 3] [3LL] [i_1] [i_1])) ? (((/* implicit */long long int) var_7)) : (((5901746596733843467LL) >> (((arr_29 [i_10]) - (17716097006260426589ULL)))))));
                        arr_34 [(unsigned char)20] = ((/* implicit */unsigned char) arr_32 [i_1] [i_1] [i_3] [i_3] [i_8] [i_10 - 4]);
                    }
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) var_1))));
                    var_27 = ((unsigned long long int) ((long long int) var_3));
                }
                /* LoopSeq 4 */
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_0)) : (-9101528609166948217LL))) - (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((arr_17 [i_11] [i_4] [i_3] [i_1]) < (var_0))) ? ((-(arr_22 [i_1] [i_3] [i_4] [i_11]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (16777215U))))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 1; i_12 < 23; i_12 += 4) /* same iter space */
                    {
                        arr_41 [i_12] [i_3] [21U] [i_1] [i_12] = ((/* implicit */unsigned char) (~(arr_8 [i_1 - 3])));
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_11]))) ^ (16777217U)))));
                    }
                    for (unsigned char i_13 = 1; i_13 < 23; i_13 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_1 - 1] [(unsigned char)17] [i_4] [i_4 - 1] [i_4 + 1] [i_13 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_3] [i_4]))))))) : (((arr_40 [i_1] [i_3] [i_4 - 1] [i_11] [i_3]) << (((arr_17 [i_13 - 1] [i_3] [i_4] [10ULL]) - (932780392U)))))));
                        arr_44 [i_13] [i_11] [i_4] [i_1 + 2] [i_1 + 2] &= ((/* implicit */unsigned int) (~(15091373200650281510ULL)));
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (unsigned char)253))));
                        var_33 = (-(4278190082U));
                    }
                }
                for (unsigned char i_14 = 0; i_14 < 24; i_14 += 3) /* same iter space */
                {
                    var_34 = ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (arr_19 [i_3] [i_4 + 1] [i_4 - 1] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_1 - 2] [(unsigned char)2])))))));
                    arr_47 [i_1] [i_3] [i_14] [i_14] = ((/* implicit */unsigned char) (-(arr_17 [i_1 - 1] [i_1 - 3] [i_1 + 2] [i_3])));
                    /* LoopSeq 2 */
                    for (unsigned int i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        arr_52 [4LL] [i_14] [i_3] = arr_8 [i_15];
                        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((unsigned long long int) arr_4 [i_4] [i_4 + 1])))));
                    }
                    for (unsigned char i_16 = 1; i_16 < 22; i_16 += 4) 
                    {
                        var_36 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) & ((~(arr_23 [7ULL] [i_3] [i_14] [i_16 + 1])))));
                        var_37 += ((var_7) << (((arr_12 [i_4 - 1]) + (1942489750370587407LL))));
                    }
                    var_38 = 3355370873059270095ULL;
                }
                for (unsigned char i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
                {
                    arr_59 [i_1 + 2] [i_1 + 2] [i_3] [i_4] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)91)) << (((arr_31 [i_1] [i_3] [i_3] [i_4 + 1] [i_4 - 1] [i_4 + 1]) - (4319976514350791876LL)))))) : (((((/* implicit */_Bool) arr_49 [i_1] [i_1] [i_3] [i_4] [i_17])) ? (((/* implicit */long long int) 2148570521U)) : (var_5)))));
                    var_39 = ((/* implicit */unsigned long long int) ((unsigned char) 4294967277U));
                }
                for (unsigned char i_18 = 0; i_18 < 24; i_18 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_19 = 1; i_19 < 20; i_19 += 2) 
                    {
                        arr_64 [i_1 + 2] [i_1 - 2] [i_1] [i_1] [8ULL] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_38 [i_3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_0)));
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_1 - 2] [i_1] [i_1 - 1])) << (((/* implicit */int) var_8))));
                        var_41 ^= (~(arr_17 [i_1] [i_1] [i_1 + 1] [2U]));
                    }
                    var_42 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
                    arr_65 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_30 [i_1] [i_3] [i_1] [i_18] [19U]) : (((/* implicit */unsigned long long int) arr_17 [i_1] [i_3] [i_4] [14ULL])))));
                }
            }
        }
        for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 1) 
        {
            var_43 = var_9;
            arr_68 [i_20] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) & (arr_35 [i_1] [i_1 - 2] [i_1 - 2] [i_20] [i_20])));
            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_67 [i_1 - 2] [i_1 + 1] [i_1 + 1])) ? (arr_67 [i_1 - 3] [i_1 - 3] [i_1 - 3]) : (arr_67 [i_1 - 2] [i_1 - 3] [i_1 - 3])));
        }
    }
    var_45 = ((/* implicit */long long int) 14308718276519963384ULL);
    var_46 += ((((/* implicit */_Bool) (-(2148570521U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) var_2))) > (((long long int) 0U)))))) : (var_3));
}
