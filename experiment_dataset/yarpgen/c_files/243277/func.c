/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243277
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
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_10 [5LL] [i_2] [(unsigned short)12] [i_2] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (unsigned char)123)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)154)) ? (arr_1 [22] [18LL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_10 ^= var_1;
                                var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) min((arr_1 [(signed char)2] [i_1]), (((/* implicit */unsigned int) arr_5 [(short)0] [(unsigned short)12] [(_Bool)0]))))))));
                                arr_16 [i_4] [9] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_0 - 4] [i_0] [i_0 + 1] [19ULL] [i_0])) ? (((/* implicit */int) arr_11 [15] [i_0 - 4] [i_0] [i_0 + 1] [i_0] [(short)10])) : (((/* implicit */int) arr_11 [i_0] [i_0 - 4] [(unsigned short)15] [i_0 + 1] [i_0] [i_0])))) / (((arr_9 [5ULL] [i_0 - 4] [i_0]) ? (((/* implicit */int) arr_11 [4U] [i_0 - 4] [(unsigned char)13] [i_0 + 1] [16LL] [i_0])) : (((/* implicit */int) arr_11 [11U] [i_0 - 4] [i_0] [i_0 + 1] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */short) (((+(((/* implicit */int) ((unsigned char) var_3))))) / (((/* implicit */int) (_Bool)1))));
                    arr_17 [i_0] [i_0] [(unsigned short)10] [(signed char)10] = ((/* implicit */signed char) arr_7 [1ULL] [(signed char)20] [i_1]);
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 1; i_5 < 21; i_5 += 2) /* same iter space */
                    {
                        var_13 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_12 [i_0 - 3] [i_0 - 2] [9ULL] [(signed char)17])), (((((/* implicit */_Bool) (short)32767)) ? (arr_13 [20ULL] [(signed char)22] [11] [(short)8] [i_0]) : (arr_13 [i_0 + 1] [i_0] [(unsigned char)0] [i_0 - 4] [17ULL])))));
                        var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)113)))))))));
                    }
                    for (unsigned int i_6 = 1; i_6 < 21; i_6 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */signed char) max((arr_14 [i_0] [i_6]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) arr_20 [i_0] [i_0] [3ULL] [(short)2] [i_0] [(short)6])) : (((/* implicit */int) arr_9 [i_0] [21U] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [21LL])))) : (var_7)))));
                        var_16 = ((/* implicit */unsigned short) (short)32742);
                    }
                }
            } 
        } 
        var_17 ^= ((/* implicit */unsigned int) var_7);
        var_18 = ((/* implicit */_Bool) (+(1034723353402579331LL)));
        var_19 = ((/* implicit */unsigned short) max((-1708981144), (((/* implicit */int) (short)32767))));
        var_20 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((277134561), (-277134561)))) ? ((+(((/* implicit */int) arr_6 [i_0])))) : (((/* implicit */int) arr_6 [20U]))))), (arr_12 [8] [i_0] [i_0] [(_Bool)1])));
    }
    for (unsigned long long int i_7 = 4; i_7 < 22; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 3; i_8 < 22; i_8 += 2) 
        {
            for (unsigned int i_9 = 2; i_9 < 22; i_9 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_6))))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */int) (short)27778)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)-30025)) : (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)2047)) : (((/* implicit */int) (signed char)-15))))))))));
                    }
                    for (signed char i_11 = 0; i_11 < 23; i_11 += 2) /* same iter space */
                    {
                        arr_37 [4U] [(unsigned char)8] [i_9] [i_8] = ((((((/* implicit */_Bool) (-(var_2)))) ? (((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) arr_23 [i_11])))))) == ((+(((/* implicit */int) (unsigned short)56054)))));
                        var_23 = ((/* implicit */int) arr_13 [(unsigned short)20] [i_11] [14] [(short)17] [22]);
                        arr_38 [0U] [i_8] [(_Bool)1] [i_11] [15] = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_0)) + (var_4)))) * (min((((/* implicit */unsigned long long int) var_3)), (arr_28 [(_Bool)1] [i_7] [i_7] [i_7]))))), (((/* implicit */unsigned long long int) (~(max((3145728U), (((/* implicit */unsigned int) arr_30 [i_7] [i_8] [i_7] [i_7])))))))));
                        arr_39 [5LL] [i_8] [i_9] [10LL] [14ULL] = ((/* implicit */unsigned short) min((var_5), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_26 [i_8] [(short)22])) | (((/* implicit */int) arr_21 [i_7] [(short)10] [i_8] [i_11] [(unsigned short)10]))))))));
                    }
                    for (unsigned int i_12 = 1; i_12 < 21; i_12 += 4) 
                    {
                        var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_36 [i_12 - 1])), (var_0)))) : (min((4887064752294597353LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 1358544175490581777ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-2048)))))))));
                        var_25 ^= ((/* implicit */long long int) max(((-(max((277134560), (((/* implicit */int) (unsigned short)13)))))), (var_5)));
                    }
                    /* LoopNest 2 */
                    for (long long int i_13 = 4; i_13 < 19; i_13 += 1) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 4) 
                        {
                            {
                                arr_48 [i_8] [9ULL] [(signed char)10] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (-4887064752294597354LL) : (((/* implicit */long long int) var_5))))))) / ((-(((((/* implicit */_Bool) (short)-25242)) ? (15737746333933187599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
                                var_26 = (short)2047;
                                var_27 = ((/* implicit */unsigned short) var_8);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_15 = 1; i_15 < 22; i_15 += 4) 
                    {
                        for (int i_16 = 0; i_16 < 23; i_16 += 3) 
                        {
                            {
                                arr_53 [10LL] |= ((/* implicit */unsigned int) (-(min((arr_30 [i_15 - 1] [(_Bool)1] [i_15 - 1] [(unsigned short)12]), (arr_30 [i_15 - 1] [(_Bool)0] [i_15 - 1] [i_15])))));
                                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (max((min((var_9), (((/* implicit */long long int) arr_23 [(_Bool)1])))), (((/* implicit */long long int) max(((unsigned short)45747), (((/* implicit */unsigned short) (signed char)57))))))) : (((/* implicit */long long int) (+(((/* implicit */int) max(((unsigned short)11), (((/* implicit */unsigned short) (signed char)43))))))))));
                                arr_54 [4U] [i_8] [(_Bool)1] [22LL] [(short)20] [(signed char)0] [i_8] |= ((/* implicit */unsigned int) ((long long int) max((arr_43 [i_8 - 2] [2] [(_Bool)1] [i_15 + 1]), (var_5))));
                            }
                        } 
                    } 
                    arr_55 [i_8] = ((short) var_7);
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 0; i_17 < 23; i_17 += 2) 
                    {
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) min(((unsigned char)158), (((/* implicit */unsigned char) (_Bool)1)))))));
                        arr_58 [i_17] [i_8] [i_8] [0ULL] |= ((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)148)), ((short)25241)));
                        arr_59 [i_8] [7U] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) (~((-((~(((/* implicit */int) arr_9 [3U] [18ULL] [i_17]))))))));
                        arr_60 [(unsigned short)22] [i_8] [19LL] [i_8] [i_8] [6LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(4294967275U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_7] [2ULL] [i_7])), (arr_28 [(short)16] [i_9] [i_8] [(short)12])))) ? (((arr_9 [(unsigned short)1] [17U] [i_9]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_45 [11] [i_17] [i_17] [i_17] [i_8]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)7850)) : (var_5))))))) : (arr_29 [(signed char)2] [4U])));
                    }
                }
            } 
        } 
        arr_61 [4ULL] = ((/* implicit */long long int) max(((signed char)28), (arr_57 [10ULL] [(unsigned short)17] [(short)0] [i_7] [6] [8])));
        var_30 = ((/* implicit */short) (unsigned short)1937);
        arr_62 [19LL] |= ((/* implicit */long long int) arr_0 [4] [i_7]);
    }
    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
    {
        var_31 = ((/* implicit */unsigned int) max((11862701562325560040ULL), (((/* implicit */unsigned long long int) (short)26799))));
        var_32 = ((/* implicit */long long int) (-(((/* implicit */int) arr_34 [(unsigned short)11] [i_18] [i_18] [i_18]))));
        arr_67 [i_18] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_24 [i_18] [11ULL] [i_18])), (arr_40 [i_18] [(_Bool)1] [(short)0])))) ? (11862701562325560052ULL) : (((/* implicit */unsigned long long int) min((2147483647), (((/* implicit */int) (unsigned short)8191))))))));
    }
    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6)))) + ((~(var_2))))) | (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (3801381749U)))), (var_9))))))));
    var_34 += ((/* implicit */_Bool) var_0);
}
