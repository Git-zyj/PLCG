/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20369
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
    var_20 = ((/* implicit */_Bool) var_3);
    var_21 = ((/* implicit */unsigned int) 1ULL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 1472353066U)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (1039124305214880328ULL))) : (((/* implicit */unsigned long long int) var_10))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) - (1039124305214880328ULL)))) ? (((/* implicit */long long int) 1107708252)) : (var_2)));
        var_23 = ((/* implicit */int) (+(arr_0 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_24 = var_4;
            arr_6 [i_1] = ((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_1])) < (17407619768494671288ULL));
            /* LoopNest 3 */
            for (short i_2 = 3; i_2 < 24; i_2 += 3) 
            {
                for (long long int i_3 = 1; i_3 < 23; i_3 += 4) 
                {
                    for (unsigned int i_4 = 2; i_4 < 22; i_4 += 1) 
                    {
                        {
                            arr_15 [i_1] = ((/* implicit */_Bool) var_11);
                            var_25 = ((/* implicit */_Bool) var_1);
                        }
                    } 
                } 
            } 
            arr_16 [i_0] [i_0] &= ((/* implicit */signed char) ((((unsigned int) arr_3 [i_0])) + (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_7))))));
        }
    }
    var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((~(1039124305214880327ULL))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 3) 
                {
                    arr_24 [i_5] [i_5] [i_5] |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) > (17407619768494671265ULL))))) % (((long long int) var_2))));
                    var_27 &= ((/* implicit */long long int) (short)-23298);
                }
                /* vectorizable */
                for (unsigned int i_8 = 1; i_8 < 23; i_8 += 2) 
                {
                    var_28 = ((unsigned long long int) arr_12 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_8 - 1] [i_8]);
                    arr_28 [i_5] [i_8] = ((/* implicit */long long int) (-2147483647 - 1));
                    arr_29 [(unsigned char)10] [i_6] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_8])) >> (((((/* implicit */int) var_0)) - (11693)))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            {
                                arr_35 [i_8] [i_6] [i_8 + 1] [i_6] [i_9] [(signed char)5] [i_10] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) < (arr_31 [19ULL] [19ULL] [i_8] [i_8])))) % (((/* implicit */int) ((unsigned short) arr_20 [i_6] [i_8] [i_10])))));
                                var_29 = ((/* implicit */unsigned short) arr_19 [i_6]);
                            }
                        } 
                    } 
                    arr_36 [(signed char)6] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (var_19))))) == (17407619768494671288ULL)));
                }
                /* LoopSeq 4 */
                for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    arr_39 [(signed char)17] [(signed char)19] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned short) (short)-32202)), ((unsigned short)22))), (((/* implicit */unsigned short) (unsigned char)234))))) ? (((long long int) 1039124305214880328ULL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210)))));
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */short) (((~(-793580022990588975LL))) == (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6])))));
                                var_31 &= ((/* implicit */short) (((-(var_3))) << ((((-(((/* implicit */int) (short)32183)))) + (32237)))));
                                var_32 = ((/* implicit */unsigned short) (!(((((/* implicit */long long int) var_6)) <= ((+(var_14)))))));
                                arr_45 [i_5] [i_5] [i_11] [i_12] [(short)2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)153))) % (max((var_3), (((/* implicit */unsigned long long int) arr_33 [i_5] [i_5] [i_5] [i_5]))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_41 [i_11] [i_5] [i_6] [i_11]), (((/* implicit */unsigned long long int) -1LL)))))));
                    var_34 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)120))));
                }
                /* vectorizable */
                for (unsigned long long int i_14 = 1; i_14 < 22; i_14 += 2) 
                {
                    var_35 ^= ((/* implicit */unsigned long long int) var_0);
                    arr_48 [i_5] [18LL] [i_5] [i_14] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32202))) & (-20LL)));
                    var_36 = ((/* implicit */unsigned long long int) arr_5 [i_14]);
                }
                for (unsigned char i_15 = 3; i_15 < 23; i_15 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 0; i_16 < 24; i_16 += 4) 
                    {
                        arr_53 [i_5] [i_15] [i_16] = ((/* implicit */long long int) ((2250102673828995881ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4506)))));
                        arr_54 [i_5] [i_6] [i_15] [i_16] [(unsigned char)10] [i_16] = ((/* implicit */unsigned long long int) -796225962);
                    }
                    /* LoopSeq 2 */
                    for (long long int i_17 = 4; i_17 < 22; i_17 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) var_2))));
                        arr_57 [i_15] [i_17] = ((/* implicit */unsigned short) (signed char)96);
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        var_38 = ((/* implicit */short) max((((((/* implicit */int) (short)11632)) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_8)))))));
                        var_39 &= ((/* implicit */_Bool) (-(32767)));
                    }
                    arr_61 [i_15] [i_6] [i_5] &= ((/* implicit */int) 4294967282U);
                }
                for (unsigned char i_19 = 3; i_19 < 23; i_19 += 4) /* same iter space */
                {
                    var_40 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (-(arr_17 [i_6] [i_5])))))) && (((/* implicit */_Bool) min((max((((/* implicit */long long int) (_Bool)1)), (var_2))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31527))) > (arr_46 [12] [4U] [i_5])))))))));
                    arr_64 [i_6] [i_19] = ((/* implicit */unsigned short) (_Bool)0);
                }
            }
        } 
    } 
}
