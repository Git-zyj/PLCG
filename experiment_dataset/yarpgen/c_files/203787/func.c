/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203787
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 12078962840553828274ULL)) ? (((/* implicit */unsigned long long int) -1813066074)) : (arr_5 [i_2] [i_2] [i_1 - 3] [i_0]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) == (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_2])))))))))) ? (((/* implicit */unsigned long long int) max((max((var_0), (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) (unsigned short)65535)))))))) : (min((((/* implicit */unsigned long long int) (unsigned char)150)), (var_10)))));
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (-1039661798877457455LL) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)6))))), ((-(764155029U))))))));
        arr_12 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)65535)))) ? ((((-(((/* implicit */int) (unsigned short)23034)))) / (((/* implicit */int) ((unsigned short) var_11))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 8926698424979219578LL)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_9)))) > (((((/* implicit */int) var_2)) / (arr_11 [i_3]))))))));
        arr_13 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)2047))))) ? (((((/* implicit */int) (unsigned short)41682)) >> (((var_10) - (13779866963990112166ULL))))) : (((/* implicit */int) var_5)))) : ((~(arr_11 [i_3])))));
    }
    for (unsigned int i_4 = 1; i_4 < 9; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_4]))));
        var_17 = ((/* implicit */unsigned char) var_0);
        arr_17 [i_4] = ((/* implicit */int) ((((((/* implicit */unsigned int) arr_2 [i_4])) - (min((((/* implicit */unsigned int) (unsigned char)105)), (var_11))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))));
    }
    for (long long int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(min((13921801131123503577ULL), (((/* implicit */unsigned long long int) var_14))))))) ? (((/* implicit */int) (((-(((/* implicit */int) var_15)))) == (max((arr_2 [i_5]), (((/* implicit */int) (unsigned short)41683))))))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5])))), (arr_4 [i_5] [i_5]))))));
        arr_20 [i_5] = (-(((/* implicit */int) var_12)));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) var_2);
        arr_25 [i_6] [i_6] = ((/* implicit */unsigned short) ((3851786755U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-32752)))));
    }
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_15)))) ? (((((/* implicit */_Bool) 3471823248U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (12295265744959699610ULL))) : (((((/* implicit */_Bool) var_10)) ? (35888059530608640ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))))))));
    /* LoopNest 2 */
    for (long long int i_7 = 1; i_7 < 8; i_7 += 1) 
    {
        for (unsigned short i_8 = 4; i_8 < 9; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 8; i_10 += 4) 
                    {
                        {
                            arr_36 [i_10] [i_8] [i_8] [i_8] [i_8] [i_7] = ((/* implicit */_Bool) ((long long int) min((3814153083U), (((/* implicit */unsigned int) var_1)))));
                            arr_37 [i_8] [i_8] = ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) (short)2485)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18007))) : (3530812265U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)42502)) && (((/* implicit */_Bool) (unsigned short)35464)))))))));
                            var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_10] [i_9] [i_8] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [8U] [i_9] [8U]))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_21 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28821)))))), (arr_28 [i_7 + 1] [i_7])))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (((+(18410856014178942976ULL))) == (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)42485))))))))))));
                        }
                    } 
                } 
                arr_38 [i_8] = (unsigned short)65535;
                /* LoopSeq 1 */
                for (unsigned short i_11 = 2; i_11 < 8; i_11 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_12 = 1; i_12 < 10; i_12 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) arr_41 [i_7] [i_8] [i_11]);
                        arr_44 [i_7] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) arr_15 [i_11] [i_8]);
                    }
                    for (int i_13 = 1; i_13 < 10; i_13 += 1) /* same iter space */
                    {
                        arr_47 [i_8] [i_11] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 8U)) | (max((18410856014178942971ULL), (arr_41 [i_7] [i_7] [i_11 + 2])))));
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_14))));
                    }
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) 8911179311560755451ULL))));
                    var_26 = ((/* implicit */long long int) (~(max((arr_26 [i_8 - 1] [i_7 + 1]), (arr_26 [i_8 - 4] [i_7 - 1])))));
                    arr_48 [i_7] [i_8] [i_11 - 2] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)32768))))), (764155030U)))) ? (7442195343131513280LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3764285017U)) ? (((/* implicit */int) (unsigned short)29543)) : (((/* implicit */int) (unsigned short)36721)))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_14 = 1; i_14 < 21; i_14 += 1) 
    {
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)17)))))));
        /* LoopSeq 1 */
        for (long long int i_15 = 0; i_15 < 22; i_15 += 4) 
        {
            var_28 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_1)) ? (764155031U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_14])))))));
            var_29 = ((/* implicit */unsigned int) max((((arr_11 [i_14 - 1]) / (arr_49 [i_14]))), (((/* implicit */int) ((unsigned short) (+(35888059530608645ULL)))))));
            var_30 = ((/* implicit */short) (-((-((~(4426744058249755034LL)))))));
        }
    }
}
