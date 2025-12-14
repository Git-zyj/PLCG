/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240470
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) -257422131))) ? (var_5) : (var_5)));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) (unsigned short)23831);
        arr_2 [i_0] = (unsigned short)23834;
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) 4515869867575194215LL))));
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((560750930165760LL) < (((/* implicit */long long int) arr_10 [i_2] [i_1] [18U])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_9 [14] [(_Bool)1] [i_1] [i_3 + 3])))) : (-1477765969357859066LL))))));
                    var_14 ^= min((28672), (12288));
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
                    {
                        var_15 = ((/* implicit */int) arr_10 [i_3] [i_3] [i_3]);
                        var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_9 [i_1] [13LL] [i_3] [i_4])) ? (arr_4 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) min((((unsigned short) -4515869867575194216LL)), (((/* implicit */unsigned short) var_0)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_17 -= ((/* implicit */signed char) 8323072);
                            arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [22ULL] [i_3 + 3] = ((/* implicit */signed char) ((arr_16 [i_5]) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14621)) | (((/* implicit */int) var_2)))))));
                        }
                        arr_18 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) -6013235842652541953LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)63)) || (((/* implicit */_Bool) min((-1964238782), (((/* implicit */int) (unsigned short)203))))))))) : (((arr_6 [i_2] [i_3] [i_4]) + (arr_6 [i_1] [i_2] [i_3 + 3])))));
                        arr_19 [i_1] [i_3] [i_1] [(unsigned short)2] [i_1] [i_1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-8))) / (4515869867575194202LL))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (signed char)14))))))) ? (((/* implicit */int) ((-12267) <= (((/* implicit */int) arr_14 [i_3 - 1] [9ULL] [i_3 + 2] [i_6]))))) : (((/* implicit */int) ((unsigned short) 378424732U)))))));
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
                        {
                            arr_24 [i_1] [18U] [i_1] [i_1] [i_1] [i_3] [i_1] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)63))) == (arr_4 [i_1]))))))) : ((+(1006632960U))));
                            arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_9 [i_3 + 3] [i_3] [i_3] [i_3]))) > (((int) arr_9 [i_3 - 1] [i_3] [i_3] [i_3]))));
                            var_19 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((signed char) -1719713417))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) : (6358541852932894656LL))));
                            arr_26 [i_1] [i_1] [i_1] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */int) (~(4398046510592ULL)));
                        }
                        for (signed char i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)8192)), (((((/* implicit */_Bool) arr_16 [i_1])) ? (arr_16 [i_8]) : (arr_16 [i_6]))))))));
                            var_21 ^= ((/* implicit */unsigned long long int) ((unsigned char) ((short) 64ULL)));
                        }
                        for (signed char i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
                        {
                            arr_32 [i_1] [i_1] [i_1] [i_3] [(signed char)7] = min((arr_0 [i_3 - 1]), (min((((/* implicit */int) (_Bool)1)), (arr_0 [i_3 + 1]))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_0 [i_6]))));
                        }
                    }
                    for (int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        arr_37 [i_1] [i_2] [i_3] [i_10] = ((/* implicit */unsigned int) ((long long int) ((long long int) arr_29 [i_1] [i_1] [i_1] [i_1] [i_1])));
                        var_23 = ((/* implicit */unsigned short) ((int) arr_12 [i_1] [i_3 + 2] [i_3] [i_10] [i_3] [i_1]));
                        var_24 ^= ((/* implicit */signed char) ((long long int) (signed char)46));
                        var_25 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)31800))) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_1] [0U] [0U] [i_10]))) : (arr_11 [i_3 + 1]))));
                    }
                    var_26 = ((/* implicit */short) ((((/* implicit */int) (signed char)8)) | (((/* implicit */int) ((_Bool) arr_33 [i_2] [i_3 + 1] [i_3 + 1] [23U])))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [2LL] [i_1] [i_1] [i_1]))));
        var_28 = ((/* implicit */signed char) ((unsigned int) arr_9 [i_1] [i_1] [i_1] [i_1]));
        arr_38 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-112))))), ((+(((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [(unsigned short)18] [(_Bool)1]))))));
    }
    for (signed char i_11 = 2; i_11 < 10; i_11 += 2) 
    {
        arr_41 [i_11] = ((/* implicit */signed char) arr_10 [(unsigned short)10] [i_11] [(unsigned short)10]);
        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) 9223231299366420480ULL))))));
        arr_42 [8] [i_11 - 1] = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33947))) - (((((/* implicit */long long int) ((/* implicit */int) (short)-5025))) / (arr_11 [i_11]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 4829004832340785432LL)) ? (arr_0 [i_11 + 1]) : (arr_0 [i_11 - 2]))))));
    }
    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) 
    {
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_8 [i_12] [i_12])) && (((/* implicit */_Bool) arr_8 [i_12] [i_12])))))))));
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 24; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 3; i_14 < 23; i_14 += 3) 
            {
                {
                    var_31 = ((/* implicit */signed char) 134209536U);
                    /* LoopNest 2 */
                    for (long long int i_15 = 3; i_15 < 23; i_15 += 1) 
                    {
                        for (signed char i_16 = 0; i_16 < 24; i_16 += 2) 
                        {
                            {
                                arr_54 [i_12] &= ((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)31797)))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                                var_32 = ((/* implicit */unsigned char) arr_48 [i_14 + 1] [i_15] [i_15 - 3] [i_16]);
                                arr_55 [i_12] [i_12] [(signed char)15] [i_12] [(signed char)15] [i_12] [i_12] |= ((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)66)))) << (((((int) ((signed char) 6406576200462431613LL))) - (107)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_33 |= ((/* implicit */signed char) ((((/* implicit */int) min((arr_35 [i_12] [i_12] [i_12] [i_12]), (((/* implicit */short) (signed char)5))))) | (((/* implicit */int) ((unsigned short) arr_43 [i_12])))));
        arr_56 [12] [12] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_53 [i_12] [i_12])) || (((/* implicit */_Bool) arr_47 [i_12] [i_12])))) && (((/* implicit */_Bool) arr_20 [i_12] [i_12] [(unsigned short)16] [(unsigned short)16] [i_12] [(signed char)8]))));
        var_34 = ((/* implicit */int) min((((/* implicit */unsigned int) ((short) arr_10 [i_12] [i_12] [23U]))), (((((/* implicit */_Bool) -1932853758)) ? (arr_10 [i_12] [i_12] [i_12]) : (arr_10 [i_12] [i_12] [i_12])))));
    }
    var_35 = ((/* implicit */long long int) var_7);
}
