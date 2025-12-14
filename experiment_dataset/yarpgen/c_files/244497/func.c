/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244497
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
    var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 789877049314229029ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (3LL)));
    var_19 = ((((/* implicit */_Bool) (short)-23834)) ? (max((((((/* implicit */_Bool) (signed char)-4)) ? (576233120U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)18276)) : (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                        var_21 = ((/* implicit */long long int) (-(4141082951618669328ULL)));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    arr_14 [10U] [i_0] [i_0] [i_0] [i_0] = max((((/* implicit */unsigned long long int) var_10)), ((-(8911552540224892253ULL))));
                    var_22 = ((/* implicit */unsigned long long int) (unsigned short)0);
                    var_23 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_5]);
                }
                for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    arr_17 [i_0] [9LL] [9LL] = min((min((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0 + 1])), (((arr_11 [i_6]) ^ (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))), (((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_1] [(unsigned char)11])) ? (((/* implicit */int) arr_2 [i_0])) : (arr_15 [i_0 - 1] [i_0] [i_4] [i_6] [i_0]))));
                    /* LoopSeq 3 */
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        arr_20 [i_0] = ((/* implicit */unsigned long long int) max((arr_10 [i_0] [i_1] [i_4] [i_0]), (arr_2 [i_0])));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-7656065301609278385LL)))) ? (((/* implicit */unsigned long long int) var_7)) : ((-(1073741823ULL)))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0 - 1] [i_0 + 1] [(unsigned char)11] [(unsigned char)11] [(unsigned char)11])) ? (arr_18 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_1))))) ? ((+(arr_18 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535)))))));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((-17LL) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_13 [i_0] [i_1] [i_4] [i_6] [i_8])))))))));
                        arr_24 [i_0] [(unsigned short)13] [i_4] [i_8] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 3048615541448425354LL)), (arr_12 [i_8] [i_4] [i_0 + 1])))) && (((/* implicit */_Bool) min(((signed char)-1), (arr_0 [i_0 + 1]))))));
                    }
                    for (int i_9 = 4; i_9 < 21; i_9 += 1) 
                    {
                        var_27 = ((/* implicit */int) ((((7LL) * (((/* implicit */long long int) 4294967295U)))) >> ((((+(-2064494301))) + (2064494301)))));
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2064494300)))))) != (arr_23 [i_0] [i_1] [i_1] [(signed char)14] [i_1] [i_4])))))))));
                    }
                    var_29 = ((/* implicit */int) var_13);
                }
                arr_27 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)0)) << (((((long long int) (signed char)-1)) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
                arr_28 [i_4] [i_1] [i_1] [i_0] &= ((/* implicit */short) max((min((5234376384820608361LL), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_8 [i_1])) == (8580840525329992657ULL)))))), (((6910652994008643139LL) * (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_1])) >> (((var_7) - (2560498437U))))))))));
                var_30 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_1] [i_4])))) ? (max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)20640))))), (((((/* implicit */_Bool) (short)-19929)) ? (4294967295U) : (4294967295U))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [i_0] [i_0 - 1]), (((/* implicit */unsigned short) (unsigned char)6))))))));
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14261163566596280603ULL)) ? (((/* implicit */unsigned long long int) max((2057568974), (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)29439))))) ? (((arr_18 [i_0] [i_0] [i_1] [i_4] [i_4]) & (((/* implicit */unsigned long long int) arr_8 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) (short)28597)) : (((/* implicit */int) var_10)))))))));
            }
            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [20LL] [i_1])) ? (((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [2] [i_0])) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (short)16658)))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_11 [i_0]) : (((/* implicit */int) (unsigned short)127))))))) ? ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_0] [i_1]))) : (7279555137203613078ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)0))))))))));
            arr_29 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_7)) % ((-((~(var_0)))))));
        }
        arr_30 [i_0] = ((/* implicit */short) (+(((min((((/* implicit */unsigned long long int) 474932464)), (8911552540224892251ULL))) ^ (arr_18 [i_0] [i_0] [i_0 - 1] [i_0] [20ULL])))));
    }
    var_33 = var_8;
}
