/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26141
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
    var_11 = min((((/* implicit */unsigned long long int) var_5)), ((~(var_0))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((max((min((7839234210843102736ULL), (10607509862866448879ULL))), (((/* implicit */unsigned long long int) min((arr_1 [10ULL]), (arr_1 [i_0])))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (var_10))), (((/* implicit */unsigned long long int) max((2510843978226779553LL), (((/* implicit */long long int) arr_1 [i_0])))))))));
        arr_3 [i_0] = arr_1 [i_0];
    }
    /* LoopSeq 4 */
    for (unsigned short i_1 = 1; i_1 < 7; i_1 += 4) 
    {
        arr_7 [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) arr_5 [(short)8]);
        var_12 = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) (unsigned char)255)))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */long long int) 24U);
        var_13 += ((/* implicit */unsigned char) var_7);
    }
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) ((((max((arr_11 [i_3] [i_3]), (((/* implicit */unsigned int) (short)32767)))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (arr_11 [i_3] [i_3]))))) << (((arr_1 [21]) - (836961261)))));
        arr_14 [i_3] [(unsigned short)11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)0)))), (-2092694089)))) ? (((/* implicit */int) (_Bool)0)) : (min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) <= (2510843978226779553LL)))), (((493164633) << (((((/* implicit */int) (short)32754)) - (32754)))))))));
        var_15 += (+(min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)36))))), (((((/* implicit */unsigned long long int) 488241539863881948LL)) ^ (var_0))))));
        var_16 &= max(((((~(var_4))) | (((/* implicit */unsigned long long int) arr_1 [4ULL])))), (((/* implicit */unsigned long long int) var_7)));
    }
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 3) 
                {
                    {
                        arr_27 [i_4] [i_4] [i_7] [i_4] [i_4] [(unsigned short)10] = ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */_Bool) arr_25 [i_5] [i_7] [i_6] [i_5] [i_7])) ? (-8842833236778191569LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)18))))) % (((/* implicit */long long int) (+(((/* implicit */int) var_5))))))));
                        arr_28 [i_7] [(unsigned char)2] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) (+(var_0)));
                    }
                } 
            } 
        } 
        arr_29 [i_4] [7ULL] &= ((((/* implicit */_Bool) (-((~(arr_17 [i_4] [i_4])))))) ? ((+(arr_20 [i_4] [i_4]))) : (min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) arr_23 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2254))) : (var_10))))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 2; i_11 < 15; i_11 += 1) 
                        {
                            var_17 &= ((/* implicit */short) min((((((/* implicit */_Bool) arr_13 [i_11 - 1])) ? (((/* implicit */unsigned long long int) arr_17 [i_10] [i_10])) : (16582319720666637858ULL))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) arr_38 [i_11] [4] [i_10] [i_9] [i_8] [i_4])) | (18446744073709551615ULL)))))));
                            var_18 = ((/* implicit */unsigned long long int) min((2147483647), (((((((/* implicit */int) (unsigned char)255)) << (((1915489915U) - (1915489894U))))) / (((((/* implicit */_Bool) (short)11939)) ? (2092694088) : (((/* implicit */int) (short)-11951))))))));
                            var_19 = ((/* implicit */int) var_5);
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 1; i_12 < 15; i_12 += 1) 
                        {
                            var_20 -= ((/* implicit */short) min(((-(var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)103)) ^ (((/* implicit */int) arr_36 [i_10]))))) ? ((+(((/* implicit */int) var_7)))) : (max((-33214600), (((/* implicit */int) (short)(-32767 - 1))))))))));
                            arr_42 [i_8] [i_9] = (-((-(538947199973162445ULL))));
                            arr_43 [i_4] [i_8] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (_Bool)1))) << (((max((((568169449679625424ULL) / (((/* implicit */unsigned long long int) arr_11 [i_12 - 1] [13ULL])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_10] [i_10] [i_10] [i_10] [i_10]))) / (var_10))))) - (408750754ULL)))));
                            var_21 = ((/* implicit */int) arr_37 [i_10]);
                            arr_44 [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_8))))))) - (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_5)), ((unsigned char)255)))), (18446744073709551615ULL)))));
                        }
                        var_22 *= ((/* implicit */unsigned short) min((((/* implicit */int) arr_41 [i_4] [12] [i_9] [6] [i_10])), ((+(((/* implicit */int) (signed char)127))))));
                        arr_45 [i_8] = ((/* implicit */unsigned short) min((min((arr_37 [i_4]), ((-(17878574624029926191ULL))))), (var_0)));
                    }
                    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 4) /* same iter space */
                    {
                        var_23 &= ((/* implicit */signed char) ((max(((-(((/* implicit */int) arr_15 [i_13])))), (((/* implicit */int) (signed char)94)))) - (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))));
                        arr_50 [12ULL] [i_8] [1ULL] = ((/* implicit */long long int) (+((+(((1547150468697017557ULL) + (var_0)))))));
                    }
                    var_24 = ((((/* implicit */_Bool) ((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_4] [i_8] [i_9])))))) ? (max((max((var_0), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) arr_48 [i_8])))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_33 [i_4] [(unsigned char)6] [9LL] [i_8])), (((((/* implicit */int) var_9)) - (((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        var_25 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_21 [i_14] [i_8])))) / (((/* implicit */int) var_7))));
                        arr_54 [i_4] [i_8] [i_8] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_9])), ((unsigned char)241)))) % (((/* implicit */int) ((signed char) var_3))))) >> (((((((/* implicit */_Bool) (unsigned short)51002)) ? (((/* implicit */int) arr_0 [i_8])) : (((/* implicit */int) var_5)))) - (67)))));
                        arr_55 [i_8] [i_9] [i_8] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_40 [i_4] [i_8] [i_8] [i_9] [i_14])))) >= (((/* implicit */int) var_7))));
                        arr_56 [11ULL] [(short)7] [i_8] [1ULL] [i_8] [i_14] = ((/* implicit */int) max((((18446744073709551615ULL) >> (((((/* implicit */int) var_8)) - (11816))))), (min((((/* implicit */unsigned long long int) 9223372036854775804LL)), (var_10)))));
                    }
                    var_26 = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) (+(301634527U)))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_10))))));
                }
            } 
        } 
    }
    var_27 &= min((((/* implicit */unsigned long long int) ((var_0) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_8))))))))), (min((((/* implicit */unsigned long long int) ((int) (unsigned char)13))), (max((15020426330179994526ULL), (568169449679625424ULL))))));
    var_28 &= ((/* implicit */int) var_9);
}
