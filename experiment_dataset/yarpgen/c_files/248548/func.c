/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248548
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
    var_10 |= ((/* implicit */signed char) max((var_5), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 6; i_0 += 1) /* same iter space */
    {
        var_11 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0 + 4]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0 - 1]))));
        /* LoopSeq 4 */
        for (short i_1 = 1; i_1 < 7; i_1 += 3) /* same iter space */
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) 0U));
            var_12 = ((/* implicit */unsigned long long int) (short)-1219);
        }
        for (short i_2 = 1; i_2 < 7; i_2 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        var_13 ^= ((/* implicit */signed char) (+((-(4294967295U)))));
                        arr_15 [i_0] [i_2] [i_2] [i_2 + 3] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0 - 2] [i_0]))));
                        arr_16 [i_0] [i_0] [i_3] [i_0] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 4294967295U)) & (var_6)));
                        arr_17 [i_0 - 2] [i_0] [i_0] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_8))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) var_9))))));
                    }
                } 
            } 
            var_14 += ((/* implicit */long long int) 4294967288U);
            var_15 = ((/* implicit */_Bool) min((var_15), (arr_10 [i_2] [i_2] [i_0 - 3])));
            var_16 = ((/* implicit */short) (-(((/* implicit */int) var_9))));
        }
        for (short i_5 = 1; i_5 < 7; i_5 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned long long int) var_9);
            var_18 = ((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_5] [i_5] [i_5] [i_5] [i_0]));
            arr_20 [i_0] [i_5 + 3] = ((/* implicit */unsigned int) var_6);
        }
        for (short i_6 = 1; i_6 < 7; i_6 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) (!(arr_3 [i_0] [i_0] [1U])));
            var_20 = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
            /* LoopSeq 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                arr_26 [4LL] [i_7] [i_7] [i_7] &= ((/* implicit */_Bool) ((signed char) arr_12 [i_0]));
                arr_27 [i_0] [i_6] [i_7] = ((((/* implicit */_Bool) arr_25 [i_0 - 1] [i_6 + 1] [(unsigned short)2] [i_0 + 4])) ? (arr_7 [i_6] [i_6 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0]))));
            }
            for (unsigned long long int i_8 = 1; i_8 < 7; i_8 += 3) 
            {
                /* LoopSeq 1 */
                for (short i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0 - 2] [i_6 + 1] [i_8 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)3))));
                    var_22 = var_4;
                    arr_34 [i_0 + 1] [i_0] [i_8] [i_0 + 1] = ((/* implicit */short) (_Bool)1);
                    var_23 = ((var_4) << (((/* implicit */int) arr_30 [i_0] [i_0 + 1] [i_0])));
                }
                arr_35 [i_0] = (!(((arr_10 [i_0] [i_0] [i_8]) && (((/* implicit */_Bool) (short)1214)))));
            }
            for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_6] [i_6 - 1]))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 2; i_11 < 8; i_11 += 2) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_44 [8ULL] [i_0] [i_10] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) >> (((/* implicit */int) arr_37 [i_0 + 3] [i_0 + 3] [i_0] [i_11])))) - (((/* implicit */int) ((short) var_7)))));
                            var_25 = ((/* implicit */unsigned long long int) var_8);
                        }
                    } 
                } 
                var_26 = ((/* implicit */int) ((signed char) arr_1 [i_0]));
            }
            arr_45 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((14867671103223662442ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6 + 1] [i_6] [i_0])))))) != (((/* implicit */int) ((-1) == (((/* implicit */int) arr_14 [i_0 - 4] [i_0] [i_0] [i_6] [i_0])))))));
            var_27 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_31 [i_0])) && (((/* implicit */_Bool) arr_25 [i_0] [i_0 + 1] [i_0 + 1] [i_6 + 3]))))));
        }
    }
    for (unsigned long long int i_13 = 4; i_13 < 6; i_13 += 1) /* same iter space */
    {
        arr_49 [i_13] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_9))));
        arr_50 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_43 [i_13 - 1] [i_13 - 2] [i_13 + 1] [i_13 + 2] [i_13 - 1]))))) ? (((/* implicit */int) ((_Bool) arr_32 [i_13 - 1] [i_13 - 2] [i_13 + 1]))) : (((/* implicit */int) min((((/* implicit */short) var_8)), (arr_43 [i_13 - 1] [i_13 - 2] [i_13 + 1] [i_13 + 2] [i_13 - 1]))))));
        var_28 = ((/* implicit */long long int) (((-((+(arr_7 [i_13 + 2] [i_13 + 2]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) var_4))) < (arr_11 [i_13 + 3] [i_13 + 3] [i_13] [i_13 - 2] [i_13])))))));
        /* LoopSeq 2 */
        for (short i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
        {
            arr_54 [i_14] [i_13] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_48 [i_13 + 1])) ? ((-(((/* implicit */int) arr_47 [i_14])))) : (((((/* implicit */_Bool) arr_48 [i_14])) ? (-922642425) : (((/* implicit */int) var_8))))))));
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (~((+(919970616407531452ULL))))))));
            arr_55 [i_14] &= ((/* implicit */unsigned short) ((short) 4294967293U));
        }
        for (short i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
        {
            var_30 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) var_8))));
            var_32 = 17526773457302020164ULL;
        }
        var_33 = ((/* implicit */_Bool) arr_48 [(signed char)3]);
    }
    for (unsigned long long int i_16 = 4; i_16 < 6; i_16 += 1) /* same iter space */
    {
        arr_62 [i_16] = (~(((((/* implicit */_Bool) arr_24 [i_16] [i_16 - 2] [8] [i_16 + 1])) ? (17526773457302020177ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5583))))));
        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((unsigned long long int) 6U)))));
        arr_63 [i_16] = ((/* implicit */short) var_6);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_17 = 1; i_17 < 7; i_17 += 3) 
        {
            arr_66 [i_16] [i_17] [i_17 + 1] = 2335936897188897865ULL;
            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_56 [i_16 + 1])) : (((/* implicit */int) arr_56 [i_16 - 1])))))));
        }
    }
    var_36 = ((/* implicit */signed char) max((((/* implicit */int) (short)32767)), (max(((~(((/* implicit */int) (signed char)127)))), (((/* implicit */int) ((_Bool) var_3)))))));
    var_37 = (-(((int) max((((/* implicit */unsigned long long int) var_9)), (var_4)))));
}
