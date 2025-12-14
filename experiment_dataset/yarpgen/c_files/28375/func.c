/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28375
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)59470);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] = ((/* implicit */short) ((signed char) (-(((/* implicit */int) (!(var_17)))))));
                    /* LoopSeq 4 */
                    for (short i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_2] [i_0] [i_0] = ((_Bool) ((32766) | (((/* implicit */int) (_Bool)0))));
                        var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)59476)))) ? (min((arr_4 [i_0]), (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) (unsigned short)6045)) ? (var_1) : (((/* implicit */int) (_Bool)1))))))), (11437197527191361700ULL)));
                        var_20 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2 + 2] [i_3 + 1] [i_2 + 2] [i_3]))))) + (min((((/* implicit */int) (unsigned short)59476)), (-32765))));
                    }
                    for (short i_4 = 4; i_4 < 14; i_4 += 3) 
                    {
                        arr_16 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(var_12)))), (min((arr_5 [i_0]), (arr_5 [i_0])))));
                        var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) ((((/* implicit */int) var_17)) | (arr_4 [i_2])))))));
                    }
                    for (long long int i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) min((-1069028435), (((/* implicit */int) (_Bool)0))));
                        arr_20 [i_2] = ((/* implicit */long long int) ((signed char) min((arr_18 [i_2] [i_2 + 2] [i_5] [i_5 + 4]), (arr_18 [i_2] [i_2 + 2] [i_5] [i_5 + 4]))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) 11706889208826404539ULL);
                        var_23 = ((/* implicit */unsigned long long int) ((((((int) 0ULL)) - (((/* implicit */int) var_16)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)6059)), (1018374592)))) || (((/* implicit */_Bool) ((unsigned short) 5058487290050905983LL))))))));
                        var_24 = min((((/* implicit */long long int) var_13)), (min((((/* implicit */long long int) max((var_18), (((/* implicit */short) var_11))))), (((long long int) (signed char)47)))));
                        /* LoopSeq 3 */
                        for (int i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) var_8);
                            var_26 = var_15;
                        }
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            arr_29 [i_0] [i_2] [i_2] [i_6] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) var_14));
                            arr_30 [i_2] [i_6] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) var_0);
                        }
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            var_27 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) (unsigned char)97)) & (-32766))));
                            var_28 = -8360546436895297884LL;
                            var_29 = ((/* implicit */signed char) ((arr_11 [(_Bool)1] [i_1] [i_1] [i_1]) != (((int) (unsigned char)58))));
                        }
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        var_30 ^= ((/* implicit */unsigned short) max((((/* implicit */int) arr_28 [i_10] [i_10] [i_10] [i_10])), (min((((/* implicit */int) ((short) var_7))), (var_12)))));
        var_31 ^= (+(((/* implicit */int) (signed char)101)));
        var_32 = ((/* implicit */short) var_9);
        arr_35 [i_10] [i_10] = min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((short) var_16))) : (arr_17 [i_10] [i_10] [i_10] [i_10]))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)63)) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (var_15))))))));
    }
    /* LoopSeq 2 */
    for (short i_11 = 1; i_11 < 19; i_11 += 3) /* same iter space */
    {
        var_33 -= ((/* implicit */short) arr_37 [(unsigned short)2]);
        arr_38 [(unsigned short)18] &= ((/* implicit */unsigned short) ((int) ((short) ((unsigned short) arr_36 [16]))));
        var_34 = ((/* implicit */long long int) (unsigned char)159);
    }
    for (short i_12 = 1; i_12 < 19; i_12 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_13 = 0; i_13 < 20; i_13 += 3) 
        {
            for (int i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_49 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(5058487290050905983LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_12) > (((/* implicit */int) var_17)))))) : (((((/* implicit */_Bool) var_15)) ? (arr_43 [i_14] [i_14] [i_14]) : (var_6))))) - (var_2)));
                        var_35 = (_Bool)1;
                        arr_50 [i_14] = min((((/* implicit */int) arr_36 [i_14])), (((((/* implicit */int) arr_36 [i_14])) / (((/* implicit */int) (signed char)23)))));
                        var_36 += ((/* implicit */_Bool) ((((var_0) >= (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)59495)) : (((/* implicit */int) arr_44 [i_12] [i_12] [i_12])))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((arr_37 [18LL]) <= (((/* implicit */unsigned long long int) arr_43 [i_13] [i_14] [i_15])))))))) : (max((((/* implicit */long long int) var_5)), (max((((/* implicit */long long int) var_13)), (arr_39 [15LL])))))));
                    }
                } 
            } 
        } 
        var_37 *= ((/* implicit */short) max((var_1), (var_1)));
    }
    /* LoopSeq 3 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_38 = ((/* implicit */long long int) ((max((((/* implicit */int) arr_48 [i_16] [(short)2] [(short)2] [i_16])), ((~(((/* implicit */int) var_5)))))) * (((/* implicit */int) ((short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)218)))))));
        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */int) var_17)) <= (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || ((_Bool)1)))))))));
        arr_53 [i_16] [i_16] = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_3)))) << (((((((/* implicit */int) (signed char)-30)) + (58))) - (28)))));
    }
    for (unsigned char i_17 = 0; i_17 < 22; i_17 += 3) 
    {
        arr_58 [i_17] [i_17] = ((/* implicit */int) ((((_Bool) ((short) 517820609))) ? (((/* implicit */unsigned long long int) ((((long long int) 10731053116318263537ULL)) ^ (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_57 [i_17])))))))) : (min((((unsigned long long int) 7715690957391288093ULL)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))))));
        var_40 = max((((/* implicit */int) arr_57 [i_17])), ((~(((/* implicit */int) arr_57 [i_17])))));
        var_41 += ((/* implicit */short) ((((/* implicit */int) (unsigned char)159)) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (((((/* implicit */long long int) ((/* implicit */int) var_16))) | (var_2))))))));
    }
    for (int i_18 = 2; i_18 < 23; i_18 += 3) 
    {
        arr_61 [i_18] = ((/* implicit */unsigned short) (_Bool)1);
        /* LoopSeq 3 */
        for (long long int i_19 = 3; i_19 < 21; i_19 += 1) 
        {
            var_42 = (~((~((~(((/* implicit */int) var_3)))))));
            arr_64 [i_18] = max(((-(((((/* implicit */_Bool) arr_59 [i_19])) ? (((/* implicit */int) arr_60 [i_18] [i_18])) : (var_1))))), ((~(((/* implicit */int) (!((_Bool)0)))))));
            arr_65 [i_18] [i_18] [i_18] = (i_18 % 2 == 0) ? (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)192)) > (((((/* implicit */_Bool) (unsigned short)22893)) ? (((/* implicit */int) (short)16033)) : (((/* implicit */int) (short)-30160))))))), (min((((10731053116318263537ULL) << (((((/* implicit */int) arr_62 [i_18])) + (3671))))), (((/* implicit */unsigned long long int) (~(var_1))))))))) : (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)192)) > (((((/* implicit */_Bool) (unsigned short)22893)) ? (((/* implicit */int) (short)16033)) : (((/* implicit */int) (short)-30160))))))), (min((((10731053116318263537ULL) << (((((((/* implicit */int) arr_62 [i_18])) + (3671))) - (8266))))), (((/* implicit */unsigned long long int) (~(var_1)))))))));
        }
        /* vectorizable */
        for (unsigned short i_20 = 0; i_20 < 25; i_20 += 2) 
        {
            arr_70 [i_18] [i_18] = ((/* implicit */signed char) ((10731053116318263523ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 10731053116318263523ULL)) && (((/* implicit */_Bool) 10731053116318263528ULL))))))));
            var_43 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (signed char)127)))));
            var_44 = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) arr_66 [i_18] [i_18 + 1])))));
        }
        for (signed char i_21 = 0; i_21 < 25; i_21 += 3) 
        {
            arr_73 [i_18] = ((/* implicit */signed char) (short)-25578);
            var_45 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((long long int) var_2))))), (2123276981988728081ULL)));
        }
    }
}
