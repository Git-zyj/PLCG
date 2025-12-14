/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48088
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 2])) ? (arr_3 [i_0 - 1] [i_1]) : (arr_3 [i_0] [i_1])))) ? (((long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (((/* implicit */long long int) arr_3 [i_0] [i_0]))));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+((-(arr_3 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (short i_3 = 4; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0 + 1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_2])) ? (var_8) : (((/* implicit */unsigned long long int) -9223372036854775787LL))))) ? (max((arr_8 [i_3] [i_3] [i_2] [i_3 - 1] [i_3] [i_3]), (((/* implicit */unsigned long long int) (unsigned short)4048)))) : (((/* implicit */unsigned long long int) 5207527530172201772LL))))));
                            arr_11 [i_1] [i_2] [i_2] [i_3] [i_1] [i_2] = min((((/* implicit */unsigned long long int) var_9)), (max(((-(var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) (unsigned short)61488)) : (((/* implicit */int) var_15))))))));
                            arr_12 [i_0] [i_1] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_2)))) || (((/* implicit */_Bool) (-(arr_8 [i_0] [i_0] [i_2] [i_0] [i_3] [i_3]))))));
                            var_21 = ((/* implicit */long long int) arr_9 [i_0] [i_1] [i_0] [i_3]);
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3])) ? (min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_3]))) : (var_8))), (((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_3]))))))) : (((/* implicit */unsigned long long int) arr_3 [i_2] [i_2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */int) ((unsigned short) (~(arr_14 [i_4]))));
        var_23 = ((/* implicit */unsigned long long int) ((short) (unsigned short)4048));
        arr_17 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_13 [i_4])))) ? ((~(arr_14 [i_4]))) : (((/* implicit */int) ((((/* implicit */_Bool) min((arr_14 [i_4]), (((/* implicit */int) var_13))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4])) ? (arr_13 [i_4]) : (arr_13 [i_4])))))))));
    }
    for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 2) 
    {
        var_24 = ((/* implicit */int) max((((unsigned short) arr_18 [i_5 + 1])), (((/* implicit */unsigned short) max((arr_18 [i_5 - 2]), (arr_18 [i_5 - 2]))))));
        var_25 = ((/* implicit */short) ((((/* implicit */int) arr_18 [i_5])) >= (((/* implicit */int) min((((/* implicit */short) arr_20 [i_5 - 1] [i_5 + 1])), (arr_18 [i_5 - 1]))))));
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    {
                        arr_28 [i_7] [i_6] = ((/* implicit */signed char) ((short) arr_26 [i_5 - 1] [i_5 - 1] [i_7]));
                        /* LoopSeq 4 */
                        for (unsigned char i_9 = 1; i_9 < 24; i_9 += 3) /* same iter space */
                        {
                            arr_33 [i_7] [i_8] [i_7] [i_6] [i_5 + 1] = ((/* implicit */long long int) var_1);
                            var_26 = ((unsigned short) (~(max((arr_22 [i_5] [i_5]), (((/* implicit */long long int) arr_31 [i_8] [i_7] [i_5]))))));
                            arr_34 [i_7] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22635))) * (var_3))) : (((unsigned int) var_5))))) ? ((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (arr_31 [i_5] [i_5] [i_5])))))) : (((/* implicit */int) var_5))));
                            arr_35 [i_5] [i_7] [i_7] [i_9 + 1] [i_9] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_12)))))));
                        }
                        for (unsigned char i_10 = 1; i_10 < 24; i_10 += 3) /* same iter space */
                        {
                            var_27 = ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_12)))), (((/* implicit */int) ((unsigned short) arr_18 [i_5])))))) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) arr_19 [i_5])));
                            arr_39 [i_10 + 1] [i_7] [i_7] [i_7] [i_7] [i_5 - 1] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_21 [i_5 - 2] [i_10 + 1])) ? (var_7) : (((/* implicit */long long int) arr_21 [i_5 - 1] [i_10 - 1])))));
                            arr_40 [i_7] [i_6] [i_7] [i_8] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_30 [i_5] [i_6] [i_6] [i_6] [i_10 + 1])) >= (((((/* implicit */_Bool) arr_25 [i_5 + 2] [i_5 - 1] [i_7] [i_5 - 2])) ? (((/* implicit */int) arr_25 [i_5 + 2] [i_5 - 1] [i_7] [i_5 - 2])) : (((/* implicit */int) arr_25 [i_5 + 2] [i_5 - 1] [i_7] [i_5 - 2]))))));
                        }
                        for (unsigned char i_11 = 1; i_11 < 24; i_11 += 3) /* same iter space */
                        {
                            arr_45 [i_11 - 1] [i_8] [i_7] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5]))) / (arr_32 [i_8])))) ? (((((/* implicit */_Bool) -5207527530172201760LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_5] [i_6] [i_7] [i_8] [i_11 + 1]))) : (arr_38 [i_5] [i_7] [i_5 - 1] [i_5] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_5 - 2])) || (((/* implicit */_Bool) arr_18 [i_8])))))))))));
                            arr_46 [i_5] [i_6] [i_7] [i_11] [i_7] [i_5] = ((/* implicit */unsigned long long int) arr_22 [i_6] [i_8]);
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) arr_44 [i_11 - 1] [i_7] [i_7] [i_7] [i_5] [i_5] [i_5]))));
                            arr_47 [i_6] [i_7] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_36 [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_11 + 1] [i_7] [i_11 + 1] [i_7] [i_11])))))) : (((((/* implicit */_Bool) arr_38 [i_11 - 1] [i_7] [i_11 + 1] [i_11] [i_11])) ? (arr_38 [i_11 + 1] [i_7] [i_11 + 1] [i_11] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11] [i_11])))))));
                        }
                        for (unsigned char i_12 = 1; i_12 < 24; i_12 += 3) /* same iter space */
                        {
                            arr_51 [i_7] [i_7] [i_7] [i_6] [i_12] = ((/* implicit */unsigned char) arr_32 [i_12 + 1]);
                            arr_52 [i_5] [i_5] [i_7] [i_7] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_27 [i_12 - 1] [i_6] [i_6])))) ? (((/* implicit */int) (unsigned short)4074)) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) | (arr_22 [i_6] [i_12])))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_38 [i_5 - 2] [i_7] [i_7] [i_8] [i_12 + 1])) ? (0) : (((/* implicit */int) var_15))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (long long int i_13 = 2; i_13 < 11; i_13 += 1) 
    {
        var_30 = ((/* implicit */signed char) (unsigned short)11710);
        arr_55 [i_13] [i_13 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_5)))), ((+(((/* implicit */int) arr_37 [i_13 + 1] [i_13] [i_13] [i_13] [i_13 + 2]))))))) ? (arr_22 [i_13] [i_13 - 1]) : (((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_18 [i_13])), (arr_24 [i_13 - 2] [i_13] [i_13] [i_13]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_48 [i_13] [i_13] [i_13] [i_13] [i_13])) / (((/* implicit */int) var_13))))))))));
    }
    for (short i_14 = 1; i_14 < 16; i_14 += 2) 
    {
        var_31 = ((/* implicit */unsigned int) (~(-5)));
        arr_60 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_14])) ? (min((((((/* implicit */_Bool) arr_38 [i_14] [i_14] [i_14 - 1] [i_14] [i_14])) ? (((/* implicit */int) (signed char)-34)) : (arr_57 [i_14 - 1] [i_14]))), (1024))) : ((~(((/* implicit */int) arr_50 [i_14] [i_14 + 2] [i_14] [i_14 + 1] [i_14] [i_14 - 1]))))));
        arr_61 [i_14] = ((/* implicit */long long int) (~(((unsigned int) ((unsigned short) arr_27 [i_14] [i_14] [i_14])))));
        arr_62 [i_14] = ((/* implicit */unsigned char) ((signed char) ((signed char) max((((/* implicit */long long int) (unsigned short)61487)), (arr_49 [i_14])))));
    }
    /* LoopNest 2 */
    for (long long int i_15 = 0; i_15 < 16; i_15 += 1) 
    {
        for (unsigned short i_16 = 2; i_16 < 12; i_16 += 2) 
        {
            {
                arr_68 [i_15] = ((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) arr_59 [i_16])) ? (((/* implicit */int) arr_48 [i_16] [i_15] [i_15] [i_16] [i_16])) : (((/* implicit */int) ((short) 5622343899279264583ULL)))))));
                arr_69 [i_15] [i_16 + 2] [i_16 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1081469976U)) ? (((long long int) (unsigned char)1)) : (((/* implicit */long long int) (~(((/* implicit */int) arr_30 [i_15] [i_15] [i_15] [i_15] [i_15])))))));
            }
        } 
    } 
    var_32 = var_6;
}
