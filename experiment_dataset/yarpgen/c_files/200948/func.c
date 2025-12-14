/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200948
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
    var_11 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (16412783469684806221ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) var_1))))) ? (2097151LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9)))))))));
        var_13 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15125519620723702032ULL)) ? (3321224452985849584ULL) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))) + (0ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (min((var_5), (((/* implicit */unsigned long long int) 2097151LL))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
        {
            arr_6 [i_0] = max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))));
            var_14 |= ((/* implicit */unsigned short) ((long long int) 18446744073709551600ULL));
            var_15 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) var_1)), (9ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (4294967287U))))));
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20012))) * (-2097151LL)));
            var_17 *= ((/* implicit */unsigned int) var_10);
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
        {
            var_18 -= ((/* implicit */unsigned short) ((arr_1 [i_0] [i_0 - 1]) / (((/* implicit */long long int) arr_4 [i_0 - 1] [10ULL] [i_0 - 1]))));
            arr_9 [i_0] = ((/* implicit */long long int) 134217728U);
            var_19 = ((/* implicit */short) (-(((/* implicit */int) (short)(-32767 - 1)))));
        }
        for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            var_20 = ((unsigned long long int) min((3321224452985849562ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) - (arr_1 [i_3] [i_3]))))));
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
        }
        var_21 -= ((/* implicit */signed char) ((min((arr_2 [i_0 + 1] [i_0 + 1]), (arr_2 [i_0 + 1] [i_0 + 1]))) + (min((arr_2 [i_0 + 1] [i_0 + 1]), (arr_2 [i_0 + 1] [i_0 + 1])))));
    }
    /* LoopSeq 4 */
    for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 1) 
            {
                for (unsigned int i_7 = 3; i_7 < 21; i_7 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(134217714U)))) ? (((((/* implicit */_Bool) var_7)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18837)))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((arr_21 [i_7 - 2] [i_6 - 1] [i_4 + 1]), (arr_21 [i_7 + 1] [i_6 + 1] [i_4 - 1])))) : (((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) > (2790385448U))), (((((/* implicit */int) arr_24 [i_4] [i_4] [i_7] [i_4] [i_4])) < (((/* implicit */int) var_8)))))))));
                        var_24 += ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)20024))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 1; i_10 < 20; i_10 += 1) 
                    {
                        var_25 = ((/* implicit */int) (+(min((((((/* implicit */unsigned long long int) 1721420684U)) * (1152903912420802560ULL))), (((/* implicit */unsigned long long int) min(((unsigned short)34161), (((/* implicit */unsigned short) (short)-24759)))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_27 [i_10] [i_11])) ? ((-(19ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4 - 1]))))) == ((+(2707846595841510530ULL)))));
                            arr_35 [i_11] [i_4] [i_4] [i_4] [i_4] [i_4] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) 15125519620723702031ULL))) >= (min((15738897477868041060ULL), (16223018528506338960ULL)))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 1) 
                        {
                            var_27 = ((((((/* implicit */_Bool) (unsigned short)5333)) || (((/* implicit */_Bool) (-(2782722736U)))))) ? (((var_1) >> (((var_5) - (12706543619051083796ULL))))) : (((/* implicit */unsigned int) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)-22615))))));
                            var_28 = var_10;
                            var_29 = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        for (signed char i_14 = 1; i_14 < 20; i_14 += 2) 
                        {
                            {
                                arr_42 [i_4] [i_14] [i_14] [i_4] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) < ((+(((/* implicit */int) arr_40 [i_4] [i_4] [i_4] [i_4] [i_4]))))));
                                var_30 = ((((/* implicit */_Bool) 3830297175U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)255)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_16 = 0; i_16 < 17; i_16 += 2) 
        {
            arr_48 [i_15] [i_15] [i_15] = ((/* implicit */int) max((13ULL), (5680828199622886689ULL)));
            /* LoopNest 3 */
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                for (unsigned int i_18 = 0; i_18 < 17; i_18 += 2) 
                {
                    for (unsigned long long int i_19 = 1; i_19 < 16; i_19 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (-(min((15125519620723702049ULL), (3321224452985849584ULL))))))));
                            arr_56 [i_16] [i_16] [i_16] [i_16] [i_17] = ((/* implicit */unsigned long long int) arr_43 [i_15] [i_15]);
                        }
                    } 
                } 
            } 
            var_32 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_19 [i_15 - 1] [i_15 - 1])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) : (((min((var_10), (((/* implicit */unsigned long long int) var_2)))) - (((((/* implicit */_Bool) 15418201509844910736ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3628))) : (15738897477868041079ULL)))))));
        }
        for (unsigned int i_20 = 3; i_20 < 15; i_20 += 4) 
        {
            var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_16 [i_20 + 1]))) ? (((/* implicit */int) min(((unsigned short)45525), ((unsigned short)35526)))) : (((((/* implicit */int) var_7)) * (((/* implicit */int) (_Bool)0))))));
            arr_61 [i_15] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_2))))), (((unsigned char) 4294967295U)))))));
        }
        arr_62 [i_15] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 18263294274581652748ULL)) ? (126100789566373888ULL) : (((/* implicit */unsigned long long int) -3183994804399938577LL)))) > (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_21 [i_15 - 1] [i_15 - 1] [i_15 - 1])), (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
        var_34 = ((/* implicit */unsigned short) var_9);
    }
    /* vectorizable */
    for (unsigned short i_21 = 3; i_21 < 23; i_21 += 1) 
    {
        var_35 += ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */unsigned long long int) 1480290383)) : (10083386818321999379ULL)));
    }
    for (int i_22 = 1; i_22 < 20; i_22 += 4) 
    {
        arr_69 [i_22] [i_22] = ((/* implicit */unsigned int) min((min((12705404569706367317ULL), (15020518297060310960ULL))), (((((/* implicit */_Bool) arr_68 [i_22])) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_65 [i_22] [i_22])), (269279581)))) : ((~(5729727488554353375ULL)))))));
        var_37 = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) 15020518297060310960ULL)) ? (17670205531788307524ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
}
