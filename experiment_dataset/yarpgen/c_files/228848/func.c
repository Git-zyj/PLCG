/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228848
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
    var_19 = ((/* implicit */unsigned short) min(((_Bool)1), (((((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6))))) <= (max((((/* implicit */unsigned int) var_14)), (var_18)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-5308862709588954714LL), (((/* implicit */long long int) (signed char)30))))) ? (((/* implicit */int) ((arr_3 [i_0] [i_2]) < (((/* implicit */int) (unsigned char)113))))) : (0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_17), (((/* implicit */signed char) var_13)))))) : (((arr_0 [i_0] [i_0 - 1]) ? (13274355793440246354ULL) : (arr_5 [i_0 - 1] [i_0 - 1] [20ULL]))))))));
                    var_21 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_6)) ? (((var_4) - (((/* implicit */int) var_17)))) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1])))), (((/* implicit */int) var_6))));
                    arr_7 [(unsigned char)10] [i_0 - 1] [i_0 - 1] &= ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_2 [i_0 + 1] [i_0 + 1]), (arr_2 [i_0] [i_0 + 2]))))));
                    arr_8 [19] [i_1] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1])), (((((/* implicit */_Bool) 13274355793440246354ULL)) ? (((/* implicit */int) (short)-28267)) : (((/* implicit */int) var_7))))))), (((arr_0 [i_0 + 1] [i_0 + 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_12)))));
                }
                for (unsigned int i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 1; i_4 < 18; i_4 += 2) 
                    {
                        arr_15 [i_0 - 1] [i_0] [i_3] [i_3] [i_0 - 1] [i_0] = min((((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (arr_12 [i_0] [i_1] [i_1] [i_3 - 1] [i_1] [i_4]) : (888012846))))), (min((((/* implicit */unsigned int) (~(((/* implicit */int) var_17))))), (arr_9 [13] [i_4 + 3]))));
                        var_22 = ((/* implicit */unsigned int) max((((((/* implicit */int) (short)-20347)) & ((-(((/* implicit */int) (unsigned char)143)))))), (((/* implicit */int) ((short) arr_14 [(short)10])))));
                        var_23 = ((/* implicit */unsigned long long int) (short)-32764);
                    }
                    var_24 += min((((arr_6 [16] [i_0 + 2] [i_0 - 1] [i_3 + 1]) & (4194296))), (((((/* implicit */_Bool) arr_13 [10] [i_1] [i_0 - 1] [i_3 + 1])) ? (((/* implicit */int) (short)(-32767 - 1))) : (arr_11 [i_1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))));
                    var_25 &= ((((/* implicit */_Bool) (unsigned char)137)) ? (((((/* implicit */_Bool) (+(arr_11 [i_1] [i_0] [i_1] [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1] [i_3 - 1]))) : (((((/* implicit */_Bool) var_15)) ? (1227843802U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 + 2]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (arr_11 [i_1] [i_1] [i_0 + 2] [i_1]) : (arr_12 [i_3 - 1] [(_Bool)1] [i_1] [i_1] [i_1] [i_0 + 2])))));
                    arr_16 [i_3] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_0 + 2]))))) ? (((/* implicit */int) ((signed char) (unsigned char)83))) : ((~(((/* implicit */int) arr_14 [i_0 + 1]))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))))))));
                    var_27 |= ((/* implicit */_Bool) var_17);
                    arr_21 [9ULL] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_1)), (((((/* implicit */long long int) min((((/* implicit */int) var_5)), (arr_6 [i_0] [(_Bool)1] [8U] [(unsigned short)6])))) * (min((5308862709588954714LL), (((/* implicit */long long int) (short)28267))))))));
                    var_28 = ((/* implicit */_Bool) max((var_28), (((((/* implicit */_Bool) (unsigned char)192)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-27181)), (18446744073709551595ULL))))))));
                    var_29 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0 + 2] [i_1] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)249))))) <= ((+(6736946485904338404ULL))))))));
                }
                arr_22 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) % (arr_12 [i_0] [i_0 - 1] [18ULL] [(short)12] [i_0] [i_0 - 1])));
                arr_23 [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) arr_12 [16] [i_1] [i_0 - 1] [i_0] [20U] [i_0 - 1])) : (((unsigned long long int) ((((/* implicit */_Bool) 164567083U)) ? (4130400213U) : (4130400213U))))));
            }
        } 
    } 
}
