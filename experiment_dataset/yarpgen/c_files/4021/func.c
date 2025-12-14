/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4021
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0]))));
        arr_3 [(signed char)6] [i_0] &= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))));
        arr_4 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) (~(((/* implicit */int) var_10))))) : (((long long int) (unsigned short)62676)));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                arr_10 [i_0] = ((/* implicit */_Bool) (((((_Bool)1) && (((/* implicit */_Bool) var_13)))) ? (arr_8 [i_0] [i_0] [i_2]) : (((/* implicit */int) ((((/* implicit */_Bool) 1562976389459411896LL)) && (((/* implicit */_Bool) -1562976389459411896LL)))))));
                arr_11 [i_0] [i_0] = arr_6 [i_1];
                arr_12 [4] [i_1] [i_2] = ((/* implicit */_Bool) ((long long int) (signed char)0));
                arr_13 [i_0] [i_2 - 1] [i_0] = ((/* implicit */unsigned short) (signed char)73);
            }
            arr_14 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 3552642174U)) ? (((/* implicit */int) (short)9392)) : (arr_7 [9])));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 3) 
            {
                arr_17 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */long long int) 3552642174U)) : (arr_9 [i_0] [i_1] [i_3] [(short)1])));
                arr_18 [i_0] [i_1] [i_3 + 1] = ((/* implicit */short) 3452652256U);
                arr_19 [i_0] [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_3 + 1])) ? (((/* implicit */long long int) arr_8 [i_3] [i_0] [i_3 + 1])) : (-8307947760368236314LL));
            }
        }
        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            arr_22 [i_0] [i_0] = ((/* implicit */unsigned char) (((_Bool)0) ? (-1393501397) : ((+(2097024)))));
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                arr_25 [i_0] = ((/* implicit */unsigned int) arr_9 [i_0] [i_4] [i_5] [i_0]);
                arr_26 [0] [i_4] [i_4] [i_5] = ((/* implicit */int) (+(((((/* implicit */_Bool) (short)12092)) ? (var_15) : (((/* implicit */long long int) -1393501389))))));
            }
            arr_27 [i_4] [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76))) : (var_11)));
        }
        for (int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            arr_32 [i_0] [i_6] = (!(((/* implicit */_Bool) ((2147686666U) & (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [6]))))));
            arr_33 [i_0] [i_0] = ((/* implicit */unsigned int) (-(var_3)));
        }
        arr_34 [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_0]);
    }
    for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        arr_39 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3031657186421524722ULL)) ? (arr_35 [i_7] [i_7]) : (-1393501410)))) ? (min((6243387832934974321LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) arr_37 [i_7]))));
        arr_40 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1393501410)))) : (3114497402475413197ULL)));
        arr_41 [i_7] [4] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) min((3042466716U), (2772340730U)))) ? (((int) (_Bool)1)) : (((/* implicit */int) ((short) -842807338)))))));
    }
    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            arr_47 [i_8] [i_9] [i_9] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)28815)) ? (arr_42 [i_8]) : (arr_42 [i_9])))), (min((((/* implicit */unsigned int) ((-544482402679181106LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-73)))))), (((((/* implicit */unsigned int) -1393501397)) ^ (334734766U)))))));
            arr_48 [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_43 [i_9])), ((short)-11565)))) ? (((((/* implicit */_Bool) 6243387832934974324LL)) ? (3479574546U) : (3700688300U))) : (((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) arr_44 [i_9] [i_9])) : (503316480))))))) ? (((7159435450635973718ULL) >> (((((/* implicit */int) arr_44 [i_9] [i_9])) - (12187))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(var_0))) < (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (short)24986)) : (((/* implicit */int) (signed char)73))))))))));
        }
        arr_49 [i_8] = ((/* implicit */int) (~(((((/* implicit */_Bool) 1393501385)) ? (-1790827814929944345LL) : (((/* implicit */long long int) 742325118U))))));
    }
    var_16 = ((/* implicit */_Bool) min(((~(((/* implicit */int) var_2)))), ((-(((/* implicit */int) ((var_15) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52136))))))))));
    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) var_5)) != (((((/* implicit */long long int) ((/* implicit */int) ((-1393501410) > (var_6))))) & (((((/* implicit */_Bool) 0LL)) ? (-1LL) : (((/* implicit */long long int) 1616387198))))))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (var_8)))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-16384) : (((/* implicit */int) (signed char)-69)))) : (((/* implicit */int) (signed char)29))));
}
