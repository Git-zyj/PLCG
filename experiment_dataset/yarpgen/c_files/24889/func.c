/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24889
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */short) (+(arr_2 [i_0] [i_0])));
        var_18 = ((/* implicit */int) (~(var_10)));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21957)) ? (17873661021126656ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16824)))))) ? (18428870412688424983ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))));
        arr_5 [i_0] = ((/* implicit */signed char) var_3);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1]))));
        var_19 = ((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) var_11)))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */short) max((((/* implicit */int) (((~(var_10))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1))))))), ((+(var_14)))));
        arr_14 [i_2] = ((/* implicit */long long int) var_13);
    }
    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -13)) ? (562949953421312LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))))));
    var_21 = ((/* implicit */_Bool) ((long long int) (+(var_0))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_17 [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) / (17158409989941089122ULL)));
        arr_18 [i_3] = ((/* implicit */_Bool) var_10);
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            var_22 = ((/* implicit */long long int) ((signed char) arr_15 [i_3] [i_4]));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 18428870412688424972ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12690591154410202952ULL)));
        }
    }
    for (short i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_6 = 2; i_6 < 17; i_6 += 2) 
        {
            var_24 = (+(((min((17873661021126667ULL), (((/* implicit */unsigned long long int) 8)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 2 */
            for (signed char i_7 = 3; i_7 < 19; i_7 += 4) 
            {
                var_25 = ((_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)19195)) ? (((/* implicit */int) (unsigned short)40102)) : (((/* implicit */int) (short)-28584))))) != (((((/* implicit */_Bool) 17873661021126632ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6] [i_5]))) : (562949953421312LL)))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) (((+((-(((/* implicit */int) var_3)))))) + (((((/* implicit */_Bool) min((arr_27 [i_5] [i_5] [i_7] [i_8]), (((/* implicit */unsigned int) arr_16 [i_7]))))) ? (((/* implicit */int) min((var_7), (var_2)))) : (((/* implicit */int) var_9))))));
                            arr_34 [i_5] [i_6 + 2] [i_7] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned short) (~(70368744176640ULL)));
            }
            for (signed char i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_11 = 1; i_11 < 18; i_11 += 1) 
                {
                    var_28 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 8061266953039132296ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4032762354U)))) ? (max((562949953421299LL), (arr_20 [i_10] [i_10]))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_3)))))))));
                    var_29 = ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) -5)), (((((/* implicit */_Bool) (unsigned short)4458)) ? (var_15) : (((/* implicit */unsigned long long int) var_17))))))));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    arr_43 [i_5] = ((/* implicit */short) ((unsigned int) arr_37 [i_5] [i_6 - 2] [i_10] [i_6 + 3] [i_10]));
                    arr_44 [i_5] [i_6 - 2] [i_5] [i_12] = ((/* implicit */long long int) ((signed char) arr_38 [i_6 + 1] [18LL] [i_6 + 3] [i_6 + 3] [i_6 - 1] [i_6 - 1]));
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_5] [i_5]))))) ? (arr_25 [i_6 - 2]) : (arr_40 [i_10] [i_6 - 2] [i_6 - 2] [i_12] [i_6 - 2] [i_6 - 1]))))));
                }
                arr_45 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_7);
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_50 [i_13] [i_6] [i_6] [i_13] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-34)) + (2147483647))) >> (((((/* implicit */int) var_6)) - (50)))))) ? (arr_42 [i_5] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24821))) : (min((((/* implicit */unsigned long long int) ((var_0) + (((/* implicit */long long int) ((/* implicit */int) var_3)))))), (min((var_15), (((/* implicit */unsigned long long int) var_8))))))));
                            arr_51 [i_13] = ((/* implicit */unsigned short) arr_27 [i_6 - 1] [i_6 - 1] [i_10] [i_13]);
                            arr_52 [i_5] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) ((long long int) max((((/* implicit */short) min(((unsigned char)128), (((/* implicit */unsigned char) arr_31 [i_5] [11LL]))))), (arr_47 [i_5] [i_5] [i_5] [i_10] [i_5] [i_10]))));
                        }
                    } 
                } 
                arr_53 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) (!(((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_9))))) == (((((/* implicit */_Bool) 17873661021126632ULL)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_56 [i_6] |= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_9))))) ? ((~(5756152919299348663ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
                    arr_57 [i_5] [19ULL] [i_15] [i_15] [19ULL] = ((/* implicit */short) min(((-(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (var_13))))), (max((((unsigned int) -1344558925)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 14836704808835679583ULL)) ? (((/* implicit */int) arr_23 [i_5] [i_5] [i_5])) : (((/* implicit */int) (short)28571)))))))));
                    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_47 [i_5] [i_6 - 2] [15U] [i_6] [15U] [i_6 + 3])), (arr_32 [i_6] [i_6] [i_6 + 3] [(unsigned short)16] [i_6])))))))));
                    arr_58 [(unsigned char)6] [i_15] = ((/* implicit */short) (~(((long long int) (short)28317))));
                    /* LoopSeq 1 */
                    for (signed char i_16 = 2; i_16 < 19; i_16 += 3) 
                    {
                        arr_62 [i_6] [i_6 - 2] [i_10] [i_15] [i_6] |= ((/* implicit */_Bool) (short)-22709);
                        arr_63 [i_15] [i_15] [i_15] [(unsigned short)6] [i_15] [i_15] [i_15] = ((/* implicit */_Bool) (((((~(var_13))) == (max((var_16), (((/* implicit */unsigned int) (short)28584)))))) ? ((-(((/* implicit */int) arr_60 [i_5] [i_5] [i_5] [i_6] [i_6 - 2] [i_16 - 1] [i_5])))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -121510507935474069LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1842203956823258946ULL)))))));
                        arr_64 [i_5] [i_10] [i_15] [2] [i_16] = ((/* implicit */signed char) arr_46 [i_15] [i_15] [i_15] [4]);
                        var_32 = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_32 [i_15] [i_15] [i_10] [i_6 + 2] [i_15]))))));
                    }
                }
            }
        }
        var_33 &= ((/* implicit */unsigned int) ((_Bool) (signed char)63));
    }
    /* vectorizable */
    for (long long int i_17 = 0; i_17 < 13; i_17 += 4) 
    {
        arr_68 [i_17] = ((/* implicit */short) arr_40 [i_17] [i_17] [1] [(short)14] [i_17] [i_17]);
        var_34 = ((/* implicit */int) (-(1842203956823258923ULL)));
    }
}
