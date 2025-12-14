/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32495
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
    var_11 |= ((/* implicit */int) ((long long int) ((((/* implicit */long long int) ((var_7) - (((/* implicit */int) (signed char)-25))))) - (min((var_3), (((/* implicit */long long int) var_10)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((129271896) >> (((((/* implicit */int) (short)-25880)) + (25896)))));
        var_12 = ((/* implicit */unsigned short) (short)25879);
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -8150308125253073088LL)) ? (((/* implicit */int) arr_2 [i_0])) : (129271896)));
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)25866)) / (((/* implicit */int) (_Bool)1))));
        var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1 + 2]))))) ? (((/* implicit */int) arr_6 [(signed char)0] [(signed char)0])) : ((~(((/* implicit */int) arr_5 [i_1]))))));
    }
    for (short i_2 = 3; i_2 < 20; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] = min((min((min((var_0), (((/* implicit */long long int) (signed char)111)))), (((/* implicit */long long int) ((signed char) arr_5 [i_2]))))), (((/* implicit */long long int) (unsigned short)41993)));
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)-25880)) ? ((+(3950595296U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_3))))) <= (((int) var_9))))))));
            var_16 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)18220)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_7 [i_2 + 2])) < (var_3))))) : (((((/* implicit */_Bool) (short)-12538)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25867))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_11 [i_2 + 1] [i_2])), ((~(848335329U)))))));
            var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (((unsigned int) arr_10 [i_2] [i_2 + 1]))));
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_2] [i_2 + 2])) >> (((min((((/* implicit */int) ((short) var_2))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) arr_8 [i_2])))))) + (19437)))));
            arr_12 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) (+(((min((((/* implicit */unsigned long long int) (short)-25863)), (var_8))) * (((/* implicit */unsigned long long int) arr_11 [i_2] [i_2]))))));
        }
        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            var_19 = ((/* implicit */long long int) (-(arr_10 [i_2] [i_2])));
            arr_17 [20LL] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25873)) ? (min((min((((/* implicit */long long int) arr_10 [(unsigned short)12] [(unsigned short)12])), (arr_14 [i_4] [i_2 + 2]))), (((/* implicit */long long int) 254U)))) : (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18573))))) * (((/* implicit */int) arr_8 [i_2 - 3])))))));
        }
        var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7724))) : (((max((var_8), (var_1))) + (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_7)), (2803375717U))))))));
        var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2008065530)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (unsigned short)8))))) : (((503316480U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)25880))))))), (((/* implicit */unsigned int) ((arr_7 [i_2 - 3]) + (arr_7 [i_2 - 3]))))));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            arr_22 [i_2] [i_2] = ((/* implicit */unsigned short) (signed char)-25);
            var_22 = ((/* implicit */signed char) var_1);
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 20; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_23 = ((/* implicit */int) 3211444014289908216LL);
                        var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) arr_8 [i_6 - 1])))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (+((-(((var_7) + (((/* implicit */int) arr_16 [i_2 - 1] [i_5] [i_5])))))))))));
                        var_26 = ((/* implicit */_Bool) var_8);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_8 = 2; i_8 < 20; i_8 += 1) 
                        {
                            arr_31 [i_2 - 2] [i_5] [i_6] [i_6] [i_8] [i_6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_8 - 2] [i_7] [i_6 - 2])) ? (((/* implicit */int) arr_16 [i_8 + 2] [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) arr_16 [i_8 - 2] [i_7] [i_6 - 1]))));
                            arr_32 [i_8 + 1] [i_2] [i_6] [i_5] [i_2] [i_2] = ((/* implicit */unsigned int) ((signed char) arr_28 [i_6 + 2] [i_2 - 1]));
                        }
                        /* vectorizable */
                        for (short i_9 = 2; i_9 < 20; i_9 += 4) 
                        {
                            var_27 = ((((/* implicit */_Bool) arr_11 [i_6] [i_2])) ? (((/* implicit */long long int) arr_11 [i_2] [i_2])) : (var_9));
                            var_28 = (signed char)-2;
                            var_29 = ((/* implicit */unsigned int) arr_11 [i_2] [i_2]);
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((long long int) arr_15 [i_7])))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned short) (~(((unsigned int) arr_10 [i_2] [i_2 - 1]))));
                            var_32 = ((/* implicit */unsigned int) ((int) ((unsigned short) 0U)));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                for (int i_12 = 4; i_12 < 21; i_12 += 3) 
                {
                    for (int i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        {
                            arr_51 [i_13] [i_12] [i_2] [i_2] [i_5] [i_2 + 2] [i_2] = ((unsigned short) arr_20 [i_2] [i_2]);
                            arr_52 [i_2] [i_2] [i_2] [i_11] [i_12 + 1] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((int) arr_21 [i_2 - 1] [i_12 + 1] [i_12 - 3]))) % (arr_43 [i_2] [i_2] [i_11] [i_12 - 4])));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) arr_34 [i_2 - 3] [i_2] [i_2 - 1] [i_2] [i_2 + 1])) | (((/* implicit */int) var_4)))));
        }
    }
}
