/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214974
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_1 [(short)9]))));
        var_21 = ((unsigned long long int) arr_2 [i_0]);
    }
    for (short i_1 = 1; i_1 < 7; i_1 += 4) 
    {
        var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)30245))) & (2047LL)))) % (((4164469508255193173ULL) % (((/* implicit */unsigned long long int) 2147483647))))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min(((-(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (_Bool)1)))))));
        arr_6 [i_1] = ((((arr_4 [7ULL] [i_1]) ? ((~(arr_0 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((unsigned int) 0))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1 + 1]))))));
    }
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 3) 
        {
            {
                var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (((((_Bool) var_6)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) : (((var_16) << (((1775606040) - (1775606037)))))))));
                arr_15 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_9 [i_2]))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [12ULL] [i_2])))))))) ? (arr_7 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)54)) ^ (((/* implicit */int) arr_13 [i_2])))))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) min((var_25), (var_11)));
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_4])) << ((((~(var_6))) - (3696819365168274887ULL)))))) ? ((-(((unsigned long long int) arr_18 [i_4] [i_4])))) : (((((/* implicit */_Bool) 233513737)) ? (((/* implicit */unsigned long long int) 2047LL)) : (0ULL)))));
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */_Bool) var_0);
                arr_24 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_6])) ? (arr_12 [i_4] [8ULL]) : (arr_12 [i_4] [i_4])))) ? (((/* implicit */long long int) max((arr_12 [i_6] [i_4]), (arr_12 [i_6] [i_6])))) : (min((((/* implicit */long long int) arr_12 [i_4] [i_6])), (-2047LL)))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        {
                            arr_33 [i_4] [i_4] [(unsigned short)5] [i_7] [i_4] = arr_19 [i_4];
                            var_28 = ((/* implicit */short) max((((((max((arr_25 [i_5] [i_5]), (((/* implicit */int) arr_26 [i_5] [i_7] [i_7] [i_9])))) + (2147483647))) << (((((((((/* implicit */int) arr_10 [3LL] [i_8])) & (arr_25 [i_8] [i_7]))) + (2010730503))) - (23))))), ((-(((((/* implicit */int) arr_32 [i_4] [i_4] [i_5] [i_5] [(_Bool)1] [i_5] [i_9])) & (((/* implicit */int) arr_19 [i_9]))))))));
                        }
                    } 
                } 
                arr_34 [i_7] [i_5] [i_7] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37))) / (18446744073709551615ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_5])))));
                arr_35 [i_7] [0] = ((/* implicit */long long int) arr_18 [i_4] [i_5]);
            }
            /* LoopNest 3 */
            for (signed char i_10 = 1; i_10 < 9; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    for (unsigned long long int i_12 = 2; i_12 < 8; i_12 += 4) 
                    {
                        {
                            arr_43 [i_10] = ((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_4]);
                            var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_18 [i_11] [i_11])), (((unsigned long long int) var_18)))))));
                            arr_44 [10ULL] [i_5] [i_5] [i_5] [i_11] [i_10] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_38 [i_12] [i_5] [i_5] [i_10] [i_10]))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_4] [i_5] [i_4] [(unsigned char)0]))))) ? (((((/* implicit */unsigned int) var_11)) & (arr_7 [i_4] [i_4]))) : ((-(4294967295U)))));
        }
        arr_45 [i_4] = ((/* implicit */long long int) (!(((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9)))) > (arr_12 [i_4] [i_4])))));
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned char)109)))))));
    }
}
