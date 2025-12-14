/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246118
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                arr_8 [i_2] [1ULL] [i_0] [i_0] = (~(1ULL));
                /* LoopNest 2 */
                for (short i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        {
                            arr_15 [i_4] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((_Bool) (short)-11768));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-11754)) ? ((+((-(-2113070602))))) : (((((/* implicit */_Bool) (+(8621202116084202719ULL)))) ? (((/* implicit */int) ((short) var_11))) : (((/* implicit */int) var_10))))));
            }
            for (short i_5 = 1; i_5 < 19; i_5 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    arr_25 [i_5] [i_5] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(var_1)))))) ? (((unsigned long long int) (-(var_17)))) : ((+(((18446744073709551598ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-11768))))) ? (((/* implicit */unsigned long long int) ((int) 20ULL))) : (((((/* implicit */_Bool) var_6)) ? (17657359788762700321ULL) : (var_18)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 3) 
                    {
                        arr_28 [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551596ULL)) || (((/* implicit */_Bool) 0ULL))))))));
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), ((+((-((+(13121500981461389445ULL)))))))));
                        arr_29 [i_5] = (-((-(var_13))));
                        var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)11767)))))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) ((unsigned short) -8196737444465937480LL)))))))));
                    }
                }
                /* vectorizable */
                for (long long int i_8 = 4; i_8 < 17; i_8 += 2) 
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((5823438400171878814ULL) + (18446744073709551607ULL))))));
                    arr_34 [i_8] |= ((/* implicit */long long int) ((((/* implicit */int) (short)11768)) - (((/* implicit */int) (short)11759))));
                    var_25 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (short)11784))))));
                    var_26 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61927))) * ((-(18446744073709551615ULL))));
                }
                /* vectorizable */
                for (unsigned int i_9 = 1; i_9 < 18; i_9 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        arr_40 [i_10] [i_5] [i_5] [i_5] [i_0] = (-(0ULL));
                        arr_41 [i_5] = ((((/* implicit */unsigned long long int) ((long long int) 1353695843))) & (18446744073709551612ULL));
                        arr_42 [i_0] [i_0] [i_5] [i_5] [i_5] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-20)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                        var_27 = ((/* implicit */short) (-(var_13)));
                    }
                    arr_43 [i_9] [i_9] [i_5] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 708506827))));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((short) 7378056267859789734ULL));
                        var_29 = (~(((/* implicit */int) (_Bool)1)));
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) 18446744073709551596ULL))));
                    }
                    var_31 = ((unsigned long long int) (-9223372036854775807LL - 1LL));
                    arr_46 [i_9] [i_5] [i_1] [i_5] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)7))));
                }
                var_32 = ((((unsigned long long int) var_6)) & (17591112302592ULL));
                arr_47 [i_5] [i_1] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((((((/* implicit */_Bool) 13550246032325678856ULL)) ? (88958028457832045ULL) : (15659066763702488113ULL))) / ((-(var_6))))) : ((-(0ULL)))));
                var_33 = ((/* implicit */int) (+((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239))) ^ (var_11)))))));
            }
            for (int i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                arr_50 [i_12] [i_1] [i_1] [i_0] = (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-434))) + (var_13))));
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17657359788762700311ULL)) ? (((((/* implicit */_Bool) 18446744073709551583ULL)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551578ULL)));
                    arr_54 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) -2147483644)) ? (2894175159452998803ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)513))))) + (((((/* implicit */_Bool) 2147483644)) ? (18446744073709551572ULL) : (var_12)))))));
                    arr_55 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) -3360587820108042877LL)) : (var_13)))));
                    arr_56 [14] [i_1] [i_1] [i_12] [i_13] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) (~(3360587820108042877LL)))) ? (((/* implicit */unsigned long long int) 31U)) : ((~(var_6)))));
                    arr_57 [i_0] = ((/* implicit */unsigned char) ((int) (~(((2147483643) << (((6915103936275042162ULL) - (6915103936275042162ULL))))))));
                }
            }
            arr_58 [i_0] [i_0] = ((/* implicit */unsigned short) (+((~((+(((/* implicit */int) (unsigned char)187))))))));
        }
        arr_59 [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) 2147483617)) || ((!(((/* implicit */_Bool) 6915103936275042165ULL))))));
    }
    var_35 = ((/* implicit */int) 259888038277651690LL);
    var_36 = ((/* implicit */int) (+((+(18446744073709551586ULL)))));
}
