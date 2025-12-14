/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223010
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 430434425U)) ? (max((7256918388683825228ULL), (((/* implicit */unsigned long long int) ((unsigned char) arr_2 [i_0]))))) : (((/* implicit */unsigned long long int) -6249093048543280804LL))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (((-((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_3])))))) >> ((((~(arr_3 [i_0]))) - (17504270679686115381ULL))))))));
                        var_15 = ((/* implicit */signed char) (((((((_Bool)1) ? (549755813887LL) : (549755813878LL))) >> (((11189825685025726375ULL) - (11189825685025726367ULL))))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_3])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
                        arr_14 [i_0] [i_0] [i_1] [i_0] [i_3] = ((/* implicit */short) (~((~(((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_20 [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) != (arr_0 [i_0]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_6 = 1; i_6 < 8; i_6 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned int) ((((int) arr_9 [i_0] [i_0] [i_4] [i_0])) ^ (((((/* implicit */_Bool) arr_17 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) arr_17 [i_0] [i_0]))))));
                            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0]))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (signed char)6))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_6 [i_0] [i_0])))) && (((/* implicit */_Bool) -549755813881LL))));
                            var_20 += ((/* implicit */unsigned int) (signed char)11);
                        }
                    }
                } 
            } 
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_27 [i_7] [i_0] [i_0] = ((/* implicit */int) arr_2 [i_7]);
            var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (short)-1)) ? (-2594846025667629492LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40463))))), (((/* implicit */long long int) 3343147319U))));
            var_22 = ((/* implicit */unsigned int) (unsigned short)40463);
            arr_28 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -8033939227232358895LL)) ? (((/* implicit */long long int) 430434425U)) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-25))) + (arr_24 [i_0] [i_0] [i_0])))) ? (2594846025667629484LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
        }
        /* vectorizable */
        for (unsigned char i_8 = 1; i_8 < 11; i_8 += 4) 
        {
            arr_31 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 951819948U)))))) - (((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208))) : (3864532874U)))));
            /* LoopSeq 3 */
            for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)48)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_33 [i_0] [i_0] [i_0] [i_0])))) : (430434425U))))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */unsigned long long int) 3343147348U)) : (0ULL)))) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (unsigned short)47035))));
                }
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_3 [i_8]))));
                arr_37 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) -2594846025667629492LL);
            }
            for (unsigned long long int i_11 = 2; i_11 < 8; i_11 += 4) 
            {
                arr_40 [i_8] |= ((/* implicit */unsigned int) ((arr_19 [i_0] [i_8] [i_8] [i_11] [i_11] [i_8]) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))));
                var_26 = ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_0] [i_8])) ? (((/* implicit */int) arr_23 [i_11])) : (((/* implicit */int) arr_10 [i_0] [i_11] [i_0] [i_0]))))) : (arr_24 [i_0] [i_0] [i_0]));
                /* LoopSeq 2 */
                for (short i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    arr_44 [i_12] [i_8] [i_8] [i_0] = ((/* implicit */short) (+((-(((/* implicit */int) arr_11 [i_11] [i_12]))))));
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) arr_24 [i_13] [i_11] [i_11]))));
                        arr_47 [i_0] [i_8] [i_8] [i_8] [i_13] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_8] [i_8] [i_8]))) <= (430434425U)));
                    }
                    for (short i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        var_28 += ((/* implicit */short) ((((/* implicit */int) arr_46 [i_11 + 1] [i_8 - 1])) <= (((/* implicit */int) arr_46 [i_11 - 1] [i_8 - 1]))));
                        var_29 = ((/* implicit */long long int) (-(((/* implicit */int) arr_35 [i_8] [i_8] [i_12] [i_14]))));
                        arr_50 [i_0] [i_8] [i_0] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) arr_35 [i_0] [i_8] [i_11] [i_0]);
                        var_30 = ((/* implicit */long long int) arr_2 [i_0]);
                        var_31 = ((/* implicit */long long int) (short)-11019);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_11] [i_11 + 3] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_8 - 1] [i_11 - 2]))) : (arr_25 [i_8] [i_11 + 4] [i_11])));
                        var_32 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 549755813883LL)) ? (((/* implicit */int) (unsigned char)201)) : (arr_22 [i_0] [i_0] [i_11] [i_11] [i_11] [i_11])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)201)) || (arr_43 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_9 [i_8 - 1] [i_11 - 1] [i_11] [i_11]))));
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0]))) : (2490535003445144347ULL)))))))));
                    }
                    arr_54 [i_0] [i_8] [i_11] [i_11] [i_12] [i_12] = ((/* implicit */int) arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    var_34 += ((/* implicit */short) (unsigned short)48900);
                }
                for (short i_16 = 1; i_16 < 11; i_16 += 3) 
                {
                    arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_11 + 4] [i_8 + 1] [i_11])) ? (((/* implicit */int) ((((/* implicit */int) arr_26 [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_12 [i_8] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -549755813886LL)))))));
                    var_35 = ((/* implicit */unsigned int) ((arr_7 [i_16] [i_8]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_16 - 1])))));
                    var_36 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned short)23456))))));
                }
            }
            for (unsigned char i_17 = 0; i_17 < 12; i_17 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_18 = 0; i_18 < 12; i_18 += 2) 
                {
                    arr_64 [i_0] [i_17] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_41 [i_0] [i_8] [i_8] [i_8] [i_18]))))) < ((-(((/* implicit */int) (_Bool)1))))));
                    var_37 = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) 7880401143404988165ULL)))));
                }
                for (unsigned int i_19 = 1; i_19 < 10; i_19 += 2) 
                {
                    arr_67 [i_0] [i_0] [i_0] [i_8] [i_17] [i_19] = ((/* implicit */signed char) arr_59 [i_17]);
                    arr_68 [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 430434425U)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) (short)-5226))));
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) ((-1878538098) < (((/* implicit */int) (short)11235))))) - (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551589ULL)))))));
                }
                arr_69 [i_0] [i_8] [i_0] [i_0] = arr_41 [i_8 - 1] [i_8] [i_8] [i_8] [i_8];
            }
            var_39 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_0] [i_0])) ? (((/* implicit */int) arr_62 [i_0] [i_8] [i_0] [i_0])) : (arr_32 [i_0] [i_8] [i_0] [i_8])))) || (arr_43 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 + 1]));
            arr_70 [i_0] [i_8] |= ((/* implicit */_Bool) ((arr_34 [i_8 + 1] [i_8 + 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_8 - 1] [i_8 - 1])))));
        }
        var_40 = ((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0]);
        var_41 = ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) (_Bool)1)))));
    }
    var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) ((signed char) var_10)))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) -549755813883LL))))), (max((((/* implicit */long long int) (unsigned short)50067)), (549755813886LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) <= (((/* implicit */int) var_5))))))));
    var_43 = ((/* implicit */_Bool) (~(var_9)));
    var_44 = ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))), (((18446744073709551597ULL) - (var_1))))));
}
