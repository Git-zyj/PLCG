/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223597
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
    var_10 = ((/* implicit */unsigned short) (-(var_0)));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_11 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)202)))))))) : (((/* implicit */int) (unsigned char)54))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            var_12 *= (+(((((/* implicit */_Bool) (unsigned short)15520)) ? (arr_3 [i_0] [i_1 + 2] [i_1 - 3]) : (arr_4 [i_0] [i_1 + 3] [i_1 - 2]))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 2) 
                    {
                        {
                            arr_12 [i_4] [(unsigned short)8] [i_2] [(unsigned short)8] [i_0] &= ((/* implicit */unsigned short) (-(((arr_11 [i_0] [i_0] [i_1 - 2] [i_2 + 2] [i_4 - 1] [i_4 - 1]) + (arr_11 [i_1 - 1] [i_1] [i_1 + 2] [i_2 - 1] [i_4 - 1] [(unsigned short)4])))));
                            var_13 = ((/* implicit */short) (((+(((((/* implicit */int) (unsigned char)42)) >> (((987960008) - (987959994))))))) << (((((((/* implicit */int) (unsigned char)194)) << (((((/* implicit */int) (unsigned char)206)) - (195))))) - (397291)))));
                        }
                    } 
                } 
            } 
            var_14 = ((/* implicit */int) ((((long long int) var_4)) <= (((/* implicit */long long int) ((/* implicit */int) var_6)))));
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
            arr_15 [i_0] [i_5] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_14 [i_0])) ? (var_9) : (((/* implicit */int) arr_6 [i_0] [i_5] [i_5]))))));
            arr_16 [8LL] [i_5] &= ((/* implicit */long long int) var_9);
        }
        /* vectorizable */
        for (short i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
        {
            arr_19 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) (short)22801)) : (((/* implicit */int) (_Bool)1))));
            /* LoopNest 3 */
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                for (unsigned char i_8 = 1; i_8 < 10; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)195)))))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) var_9))))))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */unsigned long long int) (short)-2048);
        }
        /* vectorizable */
        for (short i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
        {
            arr_32 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_31 [i_0] [i_0] [i_0]))));
            arr_33 [i_0] = ((/* implicit */_Bool) (-(683513541U)));
            var_19 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)53667)) > (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_10] [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_10 [i_10] [i_10] [i_0] [3] [i_0]))));
        }
        arr_34 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_30 [i_0])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)77))))) : (min((((/* implicit */unsigned int) (unsigned char)76)), (683513542U))))) >> (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
    }
    for (short i_11 = 2; i_11 < 15; i_11 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 1; i_12 < 17; i_12 += 2) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    arr_46 [i_11 - 2] [(short)13] [i_12] [i_11 - 2] = ((/* implicit */short) ((((_Bool) arr_41 [i_11 - 2] [i_11 + 3])) ? (((((/* implicit */_Bool) arr_43 [i_11 - 1] [i_12 - 1] [i_12] [i_13])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1483457183U))))) : (-980698302))) : (((/* implicit */int) var_2))));
                    arr_47 [i_12] [i_12] [i_13] = ((/* implicit */unsigned char) arr_40 [i_11]);
                }
            } 
        } 
        arr_48 [i_11] = ((/* implicit */short) ((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_45 [i_11 + 3] [i_11] [i_11]))))));
    }
    for (short i_14 = 2; i_14 < 15; i_14 += 4) /* same iter space */
    {
        var_21 += ((/* implicit */_Bool) ((((((_Bool) arr_40 [i_14])) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)77))) / (var_5))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)62)) / (((/* implicit */int) (unsigned char)176))))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */int) arr_37 [i_14] [i_14])))) != (((/* implicit */int) arr_43 [i_14 - 1] [i_14 - 1] [i_14 + 2] [i_14 + 1]))))))));
        /* LoopNest 2 */
        for (unsigned char i_15 = 1; i_15 < 15; i_15 += 2) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    var_22 = ((/* implicit */_Bool) min((var_22), (((_Bool) (-(((((/* implicit */_Bool) arr_43 [i_15] [i_15] [i_16] [i_16])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (_Bool)1))));
                }
            } 
        } 
    }
    for (long long int i_17 = 0; i_17 < 10; i_17 += 4) 
    {
        arr_60 [i_17] = ((/* implicit */_Bool) arr_49 [i_17] [i_17]);
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (unsigned short)50609))));
        arr_61 [i_17] [i_17] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_43 [i_17] [i_17] [i_17] [i_17])) > (((/* implicit */int) min(((unsigned char)206), (((/* implicit */unsigned char) (_Bool)1))))))) ? ((+(min((var_4), (((/* implicit */int) (unsigned short)53528)))))) : (((/* implicit */int) arr_26 [i_17] [i_17] [i_17] [(_Bool)1] [i_17]))));
    }
    var_25 = ((/* implicit */unsigned char) var_5);
}
