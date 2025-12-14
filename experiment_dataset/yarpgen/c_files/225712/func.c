/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225712
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
    var_19 = ((((/* implicit */int) var_14)) >= (((/* implicit */int) (unsigned char)222)));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_2 [i_2]))) ? (((/* implicit */int) ((signed char) arr_6 [i_1] [i_1] [i_1]))) : ((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))))));
                    arr_8 [i_1] [i_1] [(_Bool)1] = ((/* implicit */_Bool) var_17);
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */int) (signed char)-65);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [(_Bool)1]))));
        arr_13 [i_3] = ((/* implicit */unsigned int) (-(((unsigned long long int) arr_2 [i_3]))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_21 ^= var_16;
        var_22 = ((/* implicit */unsigned long long int) (_Bool)0);
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (int i_6 = 3; i_6 < 14; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 13; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 11; i_8 += 2) 
                        {
                            {
                                arr_27 [i_6] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned char)249)))), (((/* implicit */int) ((unsigned short) max((arr_19 [(unsigned short)10] [12] [(_Bool)1] [i_7 + 1]), (((/* implicit */unsigned int) 467511955))))))));
                                var_23 += ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) min((arr_18 [7ULL] [i_7] [i_6] [i_5]), (((/* implicit */long long int) arr_2 [11]))))) ? (((arr_25 [0ULL] [i_5] [i_6] [i_5] [i_7] [i_6]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4649))))) : (((/* implicit */unsigned long long int) ((-4781638842413947045LL) + (((/* implicit */long long int) var_2))))))));
                                arr_28 [11] [(short)12] [i_6] [(unsigned short)4] [i_6] = ((/* implicit */signed char) max(((~(var_8))), (((/* implicit */unsigned int) arr_22 [i_4] [i_6] [i_6] [i_4]))));
                                arr_29 [i_4] [i_5] [i_5] [i_6] [i_6 - 2] [i_7] [(_Bool)1] = ((/* implicit */signed char) var_4);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 2; i_9 < 13; i_9 += 2) 
                    {
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (unsigned short)65535))));
                        var_25 ^= ((/* implicit */short) (signed char)0);
                        arr_32 [i_4] [i_6] [i_6] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5])) ? (10746537692720243655ULL) : (arr_25 [i_4] [i_4] [i_5] [i_6] [i_6] [(_Bool)1])))) ? (((/* implicit */int) ((unsigned char) arr_24 [i_6] [(_Bool)1] [i_6] [14]))) : ((-(((/* implicit */int) arr_23 [14ULL] [i_5] [i_6]))))))) : ((-(arr_11 [i_6])))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        var_26 ^= (signed char)-52;
                        arr_36 [i_4] [i_6] [i_6] [i_6] [9ULL] = ((/* implicit */unsigned char) 4781638842413947045LL);
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_25 [(short)2] [i_5] [i_5] [i_6] [(short)2] [i_6]), (((/* implicit */unsigned long long int) arr_7 [i_6]))))) ? (min((2382107408U), (((/* implicit */unsigned int) arr_24 [i_6] [i_6] [i_6] [i_6])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) arr_23 [i_4] [i_4] [i_6])) : (((/* implicit */int) arr_21 [(short)13] [i_6] [(unsigned char)14] [(short)13] [i_6] [i_4])))))))) ? (((7738900846689992568ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_26 [i_4] [(signed char)6])) : (arr_1 [i_4] [i_4])))))) : (((/* implicit */unsigned long long int) ((4855613473803073376LL) ^ (((/* implicit */long long int) -698136208)))))));
                    }
                    for (long long int i_11 = 1; i_11 < 14; i_11 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) max(((+(((((/* implicit */int) var_11)) - (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) arr_2 [i_5]))));
                        arr_39 [10ULL] [(unsigned short)9] [i_5] [(_Bool)1] [i_6] [i_6] = ((/* implicit */int) (short)15125);
                        arr_40 [i_11 - 1] [i_6] [i_6] [i_6] [i_6] [i_4] = ((/* implicit */_Bool) var_6);
                        var_29 = ((/* implicit */unsigned long long int) arr_20 [i_6 - 1] [i_11 + 1]);
                        var_30 = ((/* implicit */_Bool) min(((unsigned char)30), (((/* implicit */unsigned char) (signed char)-25))));
                    }
                    arr_41 [i_6] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_6 + 1])) ? (arr_16 [i_4] [i_4] [i_6 + 1]) : (arr_16 [(signed char)14] [i_5] [i_6 - 2])))));
                    arr_42 [i_6] [13LL] [i_6] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_31 [i_4] [i_4] [(short)9] [i_5] [i_6] [(_Bool)1])), ((-(arr_3 [i_5])))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        for (unsigned short i_13 = 3; i_13 < 14; i_13 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned int) ((-8616584714006075140LL) == (((/* implicit */long long int) arr_19 [i_13 + 1] [i_13] [i_13 + 1] [i_6 - 3]))));
                                arr_51 [i_6] [(short)10] [i_6] [i_5] [i_6] = ((/* implicit */long long int) var_8);
                                arr_52 [i_6] = ((/* implicit */signed char) arr_47 [i_6] [i_5] [i_6 - 3] [5ULL]);
                                var_32 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_19 [i_4] [i_4] [6LL] [i_4])))) ? (((((/* implicit */int) var_5)) | (((/* implicit */int) arr_10 [i_12])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_13] [i_13] [i_12] [i_13])))))))), (((((/* implicit */_Bool) arr_0 [i_12])) ? (((/* implicit */unsigned long long int) arr_20 [i_6 - 1] [i_6 + 1])) : (arr_50 [i_6 + 1] [i_13 - 1] [i_6 + 1] [i_6 - 2] [i_4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            for (short i_15 = 0; i_15 < 15; i_15 += 4) 
            {
                {
                    var_33 = (signed char)1;
                    var_34 = ((/* implicit */unsigned char) arr_24 [i_15] [i_14] [(unsigned short)14] [i_14]);
                    arr_59 [i_4] [i_4] [(_Bool)1] [i_15] = ((((/* implicit */_Bool) arr_16 [i_4] [i_14] [i_14])) ? ((~(((/* implicit */int) arr_49 [i_14])))) : (max((max((((/* implicit */int) arr_45 [i_4])), (var_6))), (((/* implicit */int) var_15)))));
                }
            } 
        } 
        var_35 ^= ((/* implicit */short) (~(arr_19 [i_4] [i_4] [i_4] [i_4])));
    }
    for (short i_16 = 0; i_16 < 19; i_16 += 3) 
    {
        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_16)), (-1)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_16])))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)54)))))));
        arr_63 [i_16] [i_16] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-76))) : (-8616584714006075140LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 7154715268059248937ULL)) ? (((/* implicit */int) arr_62 [i_16] [i_16])) : (((/* implicit */int) (unsigned short)27824)))))));
    }
}
