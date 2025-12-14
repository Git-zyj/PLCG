/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24286
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
    var_20 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_3)))) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0 - 1] [i_0] = max((((((unsigned long long int) arr_0 [i_0] [i_0])) | (((/* implicit */unsigned long long int) ((unsigned int) (signed char)-24))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_0 [i_0 + 2] [i_0])))));
        arr_3 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0 - 2]), (arr_1 [i_0 + 1]))))) : (max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (var_4)))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [(unsigned short)5])) ? ((~(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 16; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5731561723322234034ULL)) ? (5731561723322234046ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 1] [i_2])))))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_6 [i_2 - 1] [i_2])))))));
                        var_23 = ((/* implicit */signed char) 5731561723322234051ULL);
                        var_24 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 16389836694274305491ULL))))), (((((/* implicit */int) var_0)) >> (((var_4) - (6775923990683665013LL))))))) - (min(((-(((/* implicit */int) var_13)))), (((/* implicit */int) var_0))))));
                        var_25 = ((/* implicit */unsigned short) min(((-(max((1142856297U), (203745460U))))), (((/* implicit */unsigned int) var_1))));
                    }
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_1] [i_3] = ((/* implicit */long long int) var_13);
                        arr_20 [i_5] [i_3] [i_2] [i_1] &= ((/* implicit */unsigned short) max((12715182350387317564ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3701687791086102729ULL)) ? (((/* implicit */int) arr_6 [i_5] [i_5])) : (((/* implicit */int) arr_6 [i_5] [i_5])))))));
                        var_26 ^= ((/* implicit */unsigned short) ((max((((unsigned long long int) var_2)), (((((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (3701687791086102729ULL))))) & (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((var_9), (var_19)))), (arr_5 [i_2] [i_2 + 1]))))));
                    }
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
                    {
                        var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((arr_5 [i_1] [i_6]), (((/* implicit */unsigned int) var_18)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 511LL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)38)))))))) ? (((long long int) (-(arr_21 [(_Bool)1] [i_1] [i_3] [(_Bool)1])))) : (((/* implicit */long long int) ((/* implicit */int) ((var_10) == (((/* implicit */int) arr_18 [5LL] [i_2] [i_3]))))))));
                        var_28 *= ((/* implicit */signed char) min((((((((/* implicit */long long int) ((/* implicit */int) var_18))) / (arr_13 [i_1] [i_1] [i_1] [i_3] [i_1] [i_3]))) * (arr_13 [i_6] [i_6] [i_3] [i_2 - 1] [i_2] [i_1]))), (((/* implicit */long long int) var_15))));
                        var_29 *= ((/* implicit */unsigned int) (signed char)111);
                    }
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (-(14745056282623448887ULL))))));
                }
            } 
        } 
        arr_23 [i_1] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (arr_7 [i_1] [i_1] [i_1]))))) : ((+(3701687791086102729ULL)))));
    }
    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((max((var_7), (((/* implicit */unsigned long long int) var_1)))) != (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_0))))))))))));
    var_32 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(14745056282623448886ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((unsigned long long int) (-(var_8)))) : (max((14745056282623448862ULL), (((/* implicit */unsigned long long int) 511LL))))));
    var_33 += ((/* implicit */long long int) (~(((var_5) ? (((/* implicit */unsigned long long int) (~(var_4)))) : (var_3)))));
}
