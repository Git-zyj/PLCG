/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215623
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
    var_10 += ((/* implicit */unsigned int) max((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((7U) > (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_0);
        var_11 = ((/* implicit */unsigned short) max((((unsigned int) 5594274424815501185LL)), (arr_1 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) / (min((3LL), (((/* implicit */long long int) ((2761322867U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)32760))))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned int i_3 = 3; i_3 < 12; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        {
                            var_12 ^= ((/* implicit */signed char) ((unsigned int) min((908754276U), (((unsigned int) var_9)))));
                            arr_16 [i_3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) min((-5359961617870920912LL), (((/* implicit */long long int) (unsigned char)30))));
                            arr_17 [i_3] = ((/* implicit */unsigned char) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) ((short) var_6))) ? (((((/* implicit */_Bool) (short)8191)) ? (arr_9 [i_0] [i_4]) : (arr_15 [i_3] [8U] [2U] [i_3] [i_0]))) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))));
                        }
                    } 
                } 
            } 
            var_13 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 3730933357U))) ? (((/* implicit */int) ((var_5) == (var_7)))) : (arr_9 [i_0] [i_0])));
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            var_14 ^= ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_0] [i_0]);
            arr_20 [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((12594964328511877004ULL) << (((((/* implicit */int) arr_19 [i_0] [i_5] [i_0])) + (24370))))))));
            var_15 = ((/* implicit */unsigned int) min((var_15), (var_8)));
        }
        var_16 = ((/* implicit */long long int) var_3);
    }
    for (short i_6 = 1; i_6 < 13; i_6 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (17008292295183948397ULL)))) || (((/* implicit */_Bool) ((((((/* implicit */int) (short)-13765)) + (2147483647))) << (((((var_5) + (951107904440728792LL))) - (1LL))))))))), (((((((/* implicit */_Bool) 1438451778525603238ULL)) ? (17008292295183948387ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43786))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((arr_22 [i_6 + 2] [i_6]), (((/* implicit */unsigned short) var_3))))) : ((+(((((/* implicit */int) var_2)) | (((/* implicit */int) var_9)))))))))));
        arr_23 [i_6] = ((/* implicit */short) arr_22 [i_6] [i_6]);
    }
    for (short i_7 = 1; i_7 < 13; i_7 += 4) /* same iter space */
    {
        arr_27 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_7] [i_7])) == (((/* implicit */int) arr_22 [i_7] [i_7])))))) >= (min((((/* implicit */unsigned long long int) 731856725U)), (17008292295183948378ULL)))));
        var_19 = ((/* implicit */unsigned int) arr_24 [i_7]);
    }
    var_20 = ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (var_1))))) < (var_8))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)28838)) >> (((((/* implicit */int) var_2)) - (51640)))))))) : (var_5)));
}
