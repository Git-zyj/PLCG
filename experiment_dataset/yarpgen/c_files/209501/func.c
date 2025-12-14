/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209501
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
    var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) * (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (var_12)))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 4; i_2 < 7; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 4; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)10)), (var_0))))) & (min((4235695228U), (((/* implicit */unsigned int) (signed char)0)))))))));
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_8))));
                                var_16 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) (signed char)116))) % (9007199254740992LL))), (((/* implicit */long long int) (unsigned char)179))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) != (6017778152535142181LL)))) >= (((/* implicit */int) ((unsigned short) var_8)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        arr_17 [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (signed char)-14))) * (min((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */int) var_5)) % (((/* implicit */int) var_0))))))));
        arr_18 [i_5] = ((/* implicit */signed char) arr_15 [i_5] [i_5]);
        /* LoopSeq 1 */
        for (unsigned char i_6 = 1; i_6 < 14; i_6 += 3) 
        {
            arr_23 [i_5] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (signed char)59))) <= (((/* implicit */int) ((signed char) (~(8093202874962228235LL)))))));
            var_18 ^= (((((-(((/* implicit */int) (_Bool)0)))) <= (((/* implicit */int) min((var_5), (((/* implicit */unsigned char) var_10))))))) ? (min((((/* implicit */long long int) (unsigned short)4986)), (((-1246952377631766624LL) + (4988149956721951766LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_0))));
            var_19 = ((/* implicit */signed char) ((((((/* implicit */int) max((arr_22 [i_6] [i_6]), (((/* implicit */unsigned char) var_10))))) >= ((+(((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) min(((unsigned short)768), (((/* implicit */unsigned short) (signed char)0))))) ? (((((/* implicit */int) (unsigned short)38103)) + (((/* implicit */int) (short)32758)))) : (((/* implicit */int) ((_Bool) (signed char)10)))))));
        }
        arr_24 [i_5] [i_5] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_4)) ? (-9007199254740993LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
        /* LoopSeq 2 */
        for (signed char i_7 = 2; i_7 < 13; i_7 += 2) 
        {
            arr_28 [i_5] [i_7 + 1] = ((/* implicit */_Bool) ((signed char) max((4039297674U), (((/* implicit */unsigned int) (signed char)-36)))));
            arr_29 [i_5] [i_5] [i_5] = ((/* implicit */short) arr_16 [i_5]);
            /* LoopSeq 3 */
            for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
            {
                var_20 |= ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_7] [i_7] [i_7])) <= (((/* implicit */int) min(((signed char)-56), (var_2))))));
                var_21 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))) != (4135034486U)))), ((-((~(arr_16 [i_7])))))));
                arr_32 [i_8] [i_7] [i_5] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((4294967284U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))), (min((arr_21 [i_5] [i_8] [i_5]), (((/* implicit */unsigned short) (signed char)56))))))) ? (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (short)252)))) : ((~(((/* implicit */int) (short)28474))))));
            }
            /* vectorizable */
            for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                var_22 &= ((/* implicit */unsigned short) var_1);
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-13869)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6)))))));
                            arr_41 [i_5] [i_9] [i_9] [i_10] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) != (((/* implicit */int) (!(((/* implicit */_Bool) 190226751U)))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_0))) ? (arr_37 [i_7] [i_7] [i_10] [i_11]) : ((+(arr_34 [i_7] [i_7] [i_10] [i_7])))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) 4135034486U)) % (-7635558286790318004LL)));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_25 [i_5] [i_7 - 2] [i_12]))));
                arr_44 [i_5] = ((/* implicit */long long int) (unsigned short)42673);
                /* LoopNest 2 */
                for (short i_13 = 2; i_13 < 12; i_13 += 2) 
                {
                    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) arr_21 [i_5] [i_14] [i_13 + 1])))));
                            arr_50 [i_5] [i_7 - 2] [i_12] [i_13] [i_14] [i_14] [i_14] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)77)) ^ (((/* implicit */int) ((unsigned char) arr_27 [i_14])))));
                            var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_12] [9U] [i_14] [i_12]))));
                            arr_51 [i_14] [i_5] [i_5] [i_5] [i_14] = ((/* implicit */long long int) ((unsigned short) (+(((/* implicit */int) (unsigned short)4994)))));
                        }
                    } 
                } 
                var_29 *= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (signed char)121)) == (((/* implicit */int) (signed char)113)))))));
            }
        }
        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 2) 
        {
            arr_55 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (-7357679912992676953LL) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-104)))))));
            /* LoopSeq 2 */
            for (unsigned short i_16 = 0; i_16 < 15; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_17 = 3; i_17 < 14; i_17 += 1) 
                {
                    for (signed char i_18 = 0; i_18 < 15; i_18 += 4) 
                    {
                        {
                            var_30 += ((/* implicit */long long int) (+((~(((/* implicit */int) ((-7357679912992676950LL) < (2275036637303595276LL))))))));
                            arr_63 [i_15] [i_16] [i_15] [i_15] [i_18] [i_16] [i_16] = ((/* implicit */_Bool) arr_34 [i_16] [i_16] [i_16] [i_16]);
                        }
                    } 
                } 
                arr_64 [i_16] [i_16] = ((/* implicit */unsigned int) ((unsigned char) 4135034483U));
                var_31 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) var_7))), (((arr_30 [i_16] [i_15]) & (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_5] [i_5] [i_15] [i_15] [i_16] [i_16])))))));
                arr_65 [i_5] [i_5] [i_16] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) arr_39 [i_5] [i_5] [i_5] [i_5] [i_5]))), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) (((+(-9223372036854775807LL))) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-127)))))) : (((/* implicit */int) var_3))));
                var_32 ^= (!(((/* implicit */_Bool) 7864320LL)));
            }
            /* vectorizable */
            for (unsigned short i_19 = 1; i_19 < 13; i_19 += 4) 
            {
                var_33 ^= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9))) != (691640525U))))));
                arr_68 [i_5] [i_5] [i_15] [i_19] = ((/* implicit */short) arr_45 [i_19] [i_15] [i_5] [i_5]);
            }
            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)5869)) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_19 [i_5] [i_5]), (arr_52 [i_5] [i_15]))))) : (max((var_1), (var_1)))));
        }
    }
    for (long long int i_20 = 0; i_20 < 22; i_20 += 3) 
    {
        var_35 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_69 [i_20] [i_20])) % (((/* implicit */int) var_5)))));
        var_36 |= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (arr_70 [12U]) : (((/* implicit */long long int) ((/* implicit */int) arr_72 [i_20] [i_20]))))) < (max((((/* implicit */long long int) 3319887511U)), (var_1))))))));
        var_37 = ((/* implicit */_Bool) ((((/* implicit */int) arr_69 [i_20] [i_20])) + (((((/* implicit */int) var_8)) & (((((/* implicit */int) (signed char)84)) | (((/* implicit */int) (signed char)-117))))))));
    }
    for (short i_21 = 1; i_21 < 12; i_21 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_22 = 3; i_22 < 10; i_22 += 4) 
        {
            for (signed char i_23 = 2; i_23 < 12; i_23 += 1) 
            {
                for (unsigned char i_24 = 0; i_24 < 14; i_24 += 4) 
                {
                    {
                        arr_83 [i_21] = ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned char)0))))));
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) <= (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)44491))) + (arr_16 [i_21 + 2])))))) ^ (((/* implicit */int) var_0)))))));
                    }
                } 
            } 
        } 
        var_39 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))) != (max((236956908U), (((/* implicit */unsigned int) arr_81 [i_21] [i_21] [i_21] [i_21 - 1] [i_21 + 2]))))));
    }
    var_40 = ((/* implicit */unsigned short) var_12);
}
