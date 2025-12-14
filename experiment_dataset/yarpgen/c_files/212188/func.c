/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212188
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) max((max((((/* implicit */long long int) var_1)), (var_9))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-6841494434334238799LL))))))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (-2397650287519974142LL)))) <= (((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (var_3)))))))) * (var_4)));
    var_12 |= var_3;
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_13 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (((((/* implicit */_Bool) var_7)) ? (3992459130U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_14 *= ((/* implicit */unsigned char) ((int) max(((short)24418), (min(((short)-190), (((/* implicit */short) (unsigned char)10)))))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-117)))) ? (min((9223372036854775807LL), (var_9))) : (((/* implicit */long long int) 4294967281U)))))));
            var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)0)), (7871739231862717685LL)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)233)))) : (((((/* implicit */_Bool) min((4635863772770855739ULL), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)251))))));
        }
        for (int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) max(((short)-28788), ((short)-28777)))) ? (((2927922141U) - (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : ((+(1608188530U))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) (_Bool)1))))) ? ((~(var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_0), ((unsigned char)241)))))))));
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((/* implicit */long long int) min(((short)-190), (max(((short)190), (((/* implicit */short) var_2))))))), (((((((/* implicit */long long int) ((/* implicit */int) var_8))) / (4398046510080LL))) % (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)23620), (((/* implicit */unsigned short) (unsigned char)2)))))))))))));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_19 -= ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (2359036587U)))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)59394)) : (((/* implicit */int) (signed char)-56))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            arr_25 [i_7] [i_4] [i_5] [i_6] [i_7] &= ((/* implicit */signed char) 1367045142U);
                            var_21 = ((/* implicit */unsigned short) max((var_1), (((/* implicit */unsigned int) ((int) -932440439)))));
                            var_22 = ((/* implicit */short) max((max((min((1560474281498649481ULL), (((/* implicit */unsigned long long int) 932440458)))), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) -932440448))))))), (((/* implicit */unsigned long long int) max((var_1), (max((((/* implicit */unsigned int) (_Bool)1)), (var_7))))))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_8 = 2; i_8 < 12; i_8 += 4) 
            {
                arr_29 [i_1] [i_1] [(unsigned char)9] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 54159350U)) : (var_4))) < (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (var_1))))));
                /* LoopNest 2 */
                for (signed char i_9 = 2; i_9 < 11; i_9 += 4) 
                {
                    for (long long int i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 932440439)) > (13486364993668279892ULL)));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) (short)-24419))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + (932440438)))) : (((((/* implicit */unsigned long long int) 2482464255U)) + (var_4)))));
                            var_25 = ((/* implicit */int) ((5687043685750162376ULL) ^ (8303212643273536521ULL)));
                            var_26 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (3571707080U)))) || ((_Bool)0)));
                            var_27 -= ((/* implicit */short) (~(12417848248718862868ULL)));
                        }
                    } 
                } 
            }
            var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (1560474281498649481ULL)))))));
        }
        var_29 = ((/* implicit */unsigned int) var_4);
        var_30 = ((/* implicit */long long int) var_3);
    }
    for (long long int i_11 = 0; i_11 < 13; i_11 += 2) /* same iter space */
    {
        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((_Bool) 8303212643273536521ULL)) ? (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) 932440439)) ^ (var_4))))) : (((/* implicit */int) ((var_7) < (((/* implicit */unsigned int) 932440439))))))))));
        var_32 = ((/* implicit */_Bool) min((var_32), (((((/* implicit */_Bool) ((((long long int) var_1)) * (((/* implicit */long long int) ((/* implicit */int) var_5)))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (min((1608188543U), (((/* implicit */unsigned int) -932440429)))))))))));
        arr_38 [i_11] = ((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */unsigned int) (signed char)-10)), (var_1))));
        var_33 *= ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_8)))))) - (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)90)))))));
    }
}
