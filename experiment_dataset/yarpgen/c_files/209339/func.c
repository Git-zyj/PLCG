/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209339
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
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned int) arr_1 [i_0 - 1]);
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                arr_8 [i_2 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) -1)) && (arr_7 [i_0] [i_1] [i_2])))) & (((/* implicit */int) arr_7 [i_0 + 1] [i_2 + 1] [i_2 + 1]))));
                var_11 = ((/* implicit */unsigned char) var_5);
            }
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                arr_12 [i_0] [i_1] [i_3] [(short)9] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0 - 1])) - (((/* implicit */int) (signed char)36)))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (var_2))))));
                arr_13 [i_1] = 4941319350727524615ULL;
                arr_14 [(signed char)6] [i_1] [9LL] [i_3] |= ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_0 - 1])) <= (((/* implicit */int) ((((/* implicit */int) arr_6 [(unsigned short)5] [(_Bool)1] [i_0 - 1])) <= (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1])))))));
            }
            var_12 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0] [i_0 - 1]))));
        }
        for (int i_4 = 1; i_4 < 8; i_4 += 4) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 - 1] [i_4] [i_4 - 1] [i_4 + 1]))) >= (var_5)))) < (((((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_4 + 2])) % (((/* implicit */int) arr_11 [i_0 - 1] [i_4] [i_0] [i_4 + 1])))))))));
            var_14 = ((/* implicit */long long int) arr_2 [i_0]);
        }
        for (int i_5 = 1; i_5 < 8; i_5 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_9))));
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        {
                            arr_31 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_29 [i_0 + 1] [i_5 - 1] [i_5 - 1])))))) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6]))) + (((((/* implicit */unsigned int) var_9)) ^ (2494837109U)))))));
                            arr_32 [i_5] [(_Bool)1] [i_6] [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (1800130195U)));
                            var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        }
                    } 
                } 
            } 
            arr_33 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((3367321945U) >= (((/* implicit */unsigned int) -1673330505))))) < (((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 1]))));
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 8; i_9 += 4) /* same iter space */
        {
            var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (short)-12418))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) ^ (((/* implicit */int) (unsigned char)147)))))));
        }
        var_19 *= ((/* implicit */short) ((((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0 - 1])) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0 - 1]))) > (var_5))))));
        var_20 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) <= (16ULL)))) >> (((((/* implicit */int) (unsigned char)113)) - (94)))));
        arr_37 [i_0] &= ((/* implicit */_Bool) var_6);
    }
    /* vectorizable */
    for (short i_10 = 1; i_10 < 10; i_10 += 4) /* same iter space */
    {
        arr_41 [i_10] [i_10] = ((/* implicit */_Bool) ((2494837100U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [10ULL])))));
        arr_42 [i_10 - 1] [i_10 - 1] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_27 [i_10] [(signed char)2] [i_10] [1])) + (2147483647))) >> (((-2090574448) + (2090574461)))));
    }
    /* vectorizable */
    for (short i_11 = 1; i_11 < 10; i_11 += 4) /* same iter space */
    {
        arr_45 [i_11 + 1] = ((/* implicit */int) ((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(signed char)2] [i_11] [i_11])))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_43 [i_11])) < (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_3)))))));
        arr_46 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_43 [5])) >= (((/* implicit */int) (signed char)-39)))) || (((/* implicit */_Bool) arr_9 [i_11] [i_11 + 1] [i_11 - 1]))));
    }
    /* vectorizable */
    for (short i_12 = 1; i_12 < 10; i_12 += 4) /* same iter space */
    {
        var_22 = ((arr_34 [0] [i_12 + 1] [i_12 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))));
        arr_50 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (4294967284U)));
        arr_51 [i_12 - 1] = ((/* implicit */signed char) arr_16 [10ULL] [i_12 + 1] [i_12 + 1]);
    }
    var_23 += ((/* implicit */int) ((12288548194794906334ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91)))));
    /* LoopSeq 1 */
    for (unsigned char i_13 = 4; i_13 < 8; i_13 += 3) 
    {
        arr_56 [i_13] [i_13] = ((/* implicit */_Bool) ((var_9) - (2046490203)));
        var_24 = ((/* implicit */unsigned short) var_6);
        var_25 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((0ULL) == (((/* implicit */unsigned long long int) arr_55 [i_13 + 2])))))) + (arr_55 [i_13 - 2])));
        arr_57 [i_13] = ((/* implicit */_Bool) arr_25 [i_13 - 4] [i_13] [i_13]);
    }
    /* LoopNest 2 */
    for (unsigned int i_14 = 4; i_14 < 18; i_14 += 4) 
    {
        for (unsigned char i_15 = 3; i_15 < 18; i_15 += 3) 
        {
            {
                var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)228)) & (((/* implicit */int) (unsigned char)97))))) + (arr_58 [i_14 + 1])));
                arr_62 [i_15] = ((/* implicit */unsigned short) arr_60 [i_14] [i_15]);
                arr_63 [i_15] = ((/* implicit */signed char) (unsigned char)243);
                var_27 = ((/* implicit */int) arr_61 [i_14 + 1] [i_14] [i_14]);
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) var_8))));
}
