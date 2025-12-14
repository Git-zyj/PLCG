/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25444
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
    var_18 = ((/* implicit */unsigned int) (((-(var_2))) % (var_9)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1 - 2] = ((/* implicit */long long int) ((short) max((((/* implicit */long long int) var_15)), (var_3))));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_2] [i_0] [i_3] [(short)0] = ((/* implicit */long long int) (~(((/* implicit */int) min((arr_11 [i_4] [i_3] [i_2 + 1] [i_2 + 1]), (arr_11 [i_2 - 1] [i_2 - 1] [i_2 + 3] [i_2 + 3]))))));
                                arr_15 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)108)) ? (6766366480061270332LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2 + 1] [i_2] [i_1 + 1]))))), (min((6766366480061270335LL), (arr_2 [i_1 + 1])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    for (short i_6 = 1; i_6 < 11; i_6 += 2) 
                    {
                        {
                            arr_23 [i_0] [(unsigned char)5] [(unsigned char)5] [(unsigned char)5] [i_6] [i_6] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20035)) ? (((/* implicit */int) (short)12103)) : (((/* implicit */int) (unsigned short)45487))))) ? (((/* implicit */long long int) ((arr_10 [i_0] [i_1] [i_1] [i_6 - 1] [(unsigned char)5]) & (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (min((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_5] [(short)6])), (arr_2 [i_1 - 1]))))), (((/* implicit */long long int) ((unsigned short) ((_Bool) var_10))))));
                            arr_24 [i_0] [i_1 - 1] = ((/* implicit */short) min((((/* implicit */long long int) ((unsigned char) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 31457280U)))))), (9223372036854775806LL)));
                            arr_25 [i_0] [i_0] = ((/* implicit */_Bool) (-(max((((/* implicit */long long int) (short)21992)), (min((((/* implicit */long long int) (short)8290)), (-1190313763859524147LL)))))));
                        }
                    } 
                } 
                arr_26 [i_0] [i_0] |= ((/* implicit */unsigned short) min(((((-9223372036854775807LL - 1LL)) / (-8980634930876452216LL))), (((/* implicit */long long int) 1347717640U))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) 1386003831U)) ? (-5460630454798004231LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((long long int) (unsigned char)127))))) || (((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) (unsigned char)220))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_7 = 2; i_7 < 15; i_7 += 4) 
    {
        arr_29 [(_Bool)1] [i_7] = ((((/* implicit */_Bool) var_11)) ? (arr_27 [i_7 + 1] [i_7 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_4))));
        arr_30 [i_7 + 1] = ((/* implicit */unsigned int) ((var_0) ? (arr_28 [i_7] [i_7 - 2]) : (((/* implicit */long long int) 2339414934U))));
        arr_31 [i_7] = ((var_0) ? (var_17) : (3267565550U));
        arr_32 [i_7 - 1] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 1636397991U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) : (-8802500867970926554LL)));
    }
    for (short i_8 = 0; i_8 < 15; i_8 += 1) 
    {
        arr_37 [i_8] = ((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned short)15460)) / (((/* implicit */int) (unsigned char)115))))));
        arr_38 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (min((5310092736597151662LL), (var_14)))))) ? (min((var_9), (((/* implicit */long long int) arr_33 [i_8] [i_8])))) : (((long long int) var_0))));
        arr_39 [i_8] = ((/* implicit */long long int) (~(((var_6) ? ((~(((/* implicit */int) (unsigned char)213)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_33 [i_8] [i_8])) : (((/* implicit */int) var_8))))))));
    }
    for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_10 = 1; i_10 < 21; i_10 += 4) 
        {
            for (short i_11 = 3; i_11 < 19; i_11 += 1) 
            {
                {
                    arr_48 [i_11] [i_10 - 1] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_44 [i_11]))) ? (((/* implicit */int) min((arr_44 [i_11]), (arr_44 [i_11])))) : ((-(((/* implicit */int) var_4))))));
                    arr_49 [i_11] = ((((_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_43 [i_11 + 1])), (var_11))))) : (max((((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)))), (max((((/* implicit */unsigned int) arr_44 [i_11])), (arr_47 [i_10] [i_10] [i_11]))))));
                }
            } 
        } 
        arr_50 [i_9] = ((/* implicit */unsigned int) min(((((-(7277761849911126760LL))) <= (((/* implicit */long long int) ((unsigned int) var_17))))), (((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)40022))))));
    }
}
