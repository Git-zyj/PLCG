/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229911
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
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) 12633660394086342636ULL)))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0 - 3] [i_0] [i_0] [i_0 + 1])) ? (12633660394086342664ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1])))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_0] [0] [0] [i_3] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0]))));
                            var_20 = ((/* implicit */short) ((arr_9 [i_0] [i_1] [i_1]) % (((/* implicit */int) (signed char)31))));
                            var_21 = (signed char)97;
                        }
                    }
                    for (int i_5 = 2; i_5 < 9; i_5 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned int) max(((+(-451620303))), (min((-1006900641), (((/* implicit */int) arr_8 [i_0]))))));
                        var_23 = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93))) & (arr_5 [i_5] [i_2])))));
                    }
                    for (int i_6 = 2; i_6 < 9; i_6 += 2) /* same iter space */
                    {
                        arr_21 [i_6 - 1] [i_0] [i_0] [6ULL] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_13 [i_0] [i_1] [i_6])) / (var_10)))));
                        var_24 = ((/* implicit */short) var_2);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            arr_25 [i_0] [i_6] [i_2] = ((/* implicit */signed char) var_8);
                            arr_26 [i_6] [i_0] [i_0] [i_6 - 1] [i_7] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)46))) ^ (14955079049475910653ULL)))) ? (((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (unsigned short)60609)) : (((/* implicit */int) (short)29314)))) : (((/* implicit */int) (unsigned short)60583)))) & (881658602)));
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 7; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_8 + 3] [i_0] [i_0] [i_0 - 2])) || ((!(((/* implicit */_Bool) 3204016505U))))));
                            var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_4)))));
                        }
                        var_27 = (~((~(0LL))));
                        var_28 = ((/* implicit */long long int) (-(var_8)));
                    }
                    for (int i_9 = 2; i_9 < 9; i_9 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned int) (((((_Bool)1) ? (arr_15 [i_0] [i_0 - 3] [8] [i_9 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)25858)), (17207810081847040020ULL))))))))));
                        arr_32 [1LL] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_0])) && (((/* implicit */_Bool) (signed char)116)))) ? (var_12) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                    }
                    var_30 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 10004056481735594898ULL)))))));
                    /* LoopSeq 1 */
                    for (int i_10 = 1; i_10 < 9; i_10 += 1) 
                    {
                        var_31 = ((/* implicit */short) (!((_Bool)1)));
                        arr_37 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)60572))));
                    }
                    arr_38 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_2])) && (((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */unsigned long long int) 4159699355U)) : (1238933991862511595ULL))))))));
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */int) max((min((((((/* implicit */unsigned long long int) var_4)) ^ (12633660394086342654ULL))), (((/* implicit */unsigned long long int) 166546601U)))), (((/* implicit */unsigned long long int) ((((-1768556079215285650LL) | (((/* implicit */long long int) var_17)))) & (((/* implicit */long long int) ((((/* implicit */_Bool) 881658611)) ? (((/* implicit */int) var_6)) : (1814270304)))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
    {
        var_33 = ((/* implicit */_Bool) 0ULL);
        arr_42 [i_11] = ((/* implicit */int) (+(6673295292454248955ULL)));
    }
    for (short i_12 = 0; i_12 < 25; i_12 += 1) 
    {
        var_34 = ((/* implicit */signed char) var_9);
        arr_47 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_45 [i_12] [i_12]), (arr_45 [i_12] [i_12])))) ^ (((/* implicit */int) (short)32764))));
    }
    for (short i_13 = 2; i_13 < 14; i_13 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_14 = 0; i_14 < 15; i_14 += 1) 
        {
            var_35 = ((/* implicit */unsigned int) (signed char)90);
            var_36 = ((/* implicit */int) arr_44 [i_13]);
        }
        /* vectorizable */
        for (long long int i_15 = 0; i_15 < 15; i_15 += 2) /* same iter space */
        {
            var_37 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_13 - 2] [i_15]))) : (arr_43 [i_13] [i_15]))));
            /* LoopSeq 2 */
            for (signed char i_16 = 0; i_16 < 15; i_16 += 2) 
            {
                var_38 = ((/* implicit */int) arr_51 [i_13 - 1] [i_13] [i_16]);
                var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) || ((!(((/* implicit */_Bool) (signed char)5))))));
                arr_56 [i_15] = ((/* implicit */long long int) var_8);
                var_40 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_9)) < (17954347023765501558ULL)));
                var_41 = ((/* implicit */unsigned char) var_7);
            }
            for (int i_17 = 0; i_17 < 15; i_17 += 2) 
            {
                var_42 = ((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (2869279346775317760ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1816022497)) ^ (-1LL))))));
                var_43 = ((/* implicit */unsigned int) (((_Bool)1) ? (14440401795438447816ULL) : (14440401795438447816ULL)));
                var_44 = ((/* implicit */signed char) ((0LL) - (-8873695752432988826LL)));
            }
        }
        for (long long int i_18 = 0; i_18 < 15; i_18 += 2) /* same iter space */
        {
            arr_63 [i_13] [i_18] [i_13] = ((/* implicit */unsigned char) var_12);
            /* LoopSeq 1 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_20 = 4; i_20 < 13; i_20 += 1) 
                {
                    arr_68 [i_20] [i_19] [i_19] [i_13] = ((/* implicit */unsigned long long int) ((signed char) arr_67 [i_19] [i_20 - 2]));
                    arr_69 [i_13 - 2] [i_19] [i_18] [i_19] [i_13 - 2] = ((/* implicit */long long int) (unsigned short)8774);
                }
                arr_70 [i_19] [i_18] [i_19] [i_19] = ((/* implicit */unsigned int) (-(((min((arr_43 [i_19] [i_18]), (((/* implicit */long long int) (signed char)115)))) + ((-(-2439778811325639554LL)))))));
                arr_71 [i_13 + 1] [i_19] = ((/* implicit */int) (((_Bool)1) ? (arr_67 [i_19] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-46))))));
                var_45 = ((/* implicit */unsigned long long int) (+(arr_65 [i_19] [i_18] [i_13])));
                arr_72 [i_19] [i_19] = ((/* implicit */long long int) 6293324473371866074ULL);
            }
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 15; i_21 += 1) 
            {
                for (unsigned int i_22 = 0; i_22 < 15; i_22 += 1) 
                {
                    {
                        var_46 = ((/* implicit */unsigned short) 6293324473371866074ULL);
                        var_47 = ((/* implicit */signed char) ((((/* implicit */long long int) (+(arr_60 [i_21])))) > (((long long int) var_0))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_23 = 0; i_23 < 15; i_23 += 2) /* same iter space */
        {
            arr_83 [8U] = ((/* implicit */signed char) (unsigned char)224);
            /* LoopSeq 1 */
            for (unsigned long long int i_24 = 0; i_24 < 15; i_24 += 2) 
            {
                arr_87 [9] [i_24] [i_24] [i_23] = ((/* implicit */unsigned int) (!(var_1)));
                arr_88 [i_13] [i_13 - 2] = ((/* implicit */signed char) (+(var_12)));
                var_48 = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) (~(arr_52 [i_23] [i_24]))))));
                var_49 = ((/* implicit */unsigned int) var_14);
            }
        }
        var_50 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (short)5361)), (5222961146687000274LL)));
    }
    for (unsigned int i_25 = 2; i_25 < 17; i_25 += 1) 
    {
        arr_92 [i_25] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_90 [i_25 + 1]))) ? (((/* implicit */unsigned long long int) 1201908433738376102LL)) : (var_5)));
        var_51 = ((/* implicit */signed char) (-(var_9)));
    }
    var_52 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) && (((/* implicit */_Bool) (~(4006342278271103780ULL)))))), ((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_17)) & (116340253840086098ULL))))))));
}
