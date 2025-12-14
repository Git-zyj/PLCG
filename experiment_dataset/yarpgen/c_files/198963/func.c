/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198963
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
    var_19 = ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min(((((((-9223372036854775807LL - 1LL)) + (arr_0 [i_0] [i_0]))) + (arr_0 [i_0] [i_0]))), (((/* implicit */long long int) var_9))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15)) || (((arr_1 [i_0]) != (-6184501812937401341LL))))))));
        var_21 ^= ((/* implicit */long long int) var_12);
    }
    for (unsigned short i_1 = 2; i_1 < 17; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] &= ((/* implicit */unsigned short) max((((/* implicit */signed char) ((((/* implicit */int) (unsigned short)44206)) >= (((((((/* implicit */int) arr_4 [i_1])) + (2147483647))) << (((((((/* implicit */int) arr_4 [i_1])) + (20542))) - (19)))))))), (min((arr_3 [i_1 + 2] [i_1]), (arr_3 [i_1 - 1] [i_1])))));
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            arr_9 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 2589988646U)) ? (((/* implicit */long long int) 1704978664U)) : (-4211727234793307939LL))))), (max((arr_7 [i_1 + 1]), (arr_7 [i_1 + 1])))));
            arr_10 [i_1] [i_2] [i_1] = ((/* implicit */long long int) var_18);
        }
        for (unsigned char i_3 = 3; i_3 < 16; i_3 += 4) 
        {
            var_22 = ((/* implicit */_Bool) 4075531289U);
            arr_14 [i_3] [i_3] = ((/* implicit */_Bool) arr_8 [i_3] [i_3]);
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min((((((/* implicit */_Bool) max((arr_7 [i_1]), (((/* implicit */long long int) var_15))))) ? (((((/* implicit */unsigned long long int) var_5)) & (4427675923537793023ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_3]))) : (8319856536051605979LL)))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_8 [i_1] [i_3])), (((((/* implicit */_Bool) arr_8 [i_1] [i_3])) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) arr_3 [i_1] [i_3]))))))))))));
            arr_15 [i_3] = ((/* implicit */long long int) var_4);
            var_24 = ((/* implicit */_Bool) min((max((min((((/* implicit */unsigned long long int) var_7)), (18446744073709551609ULL))), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0)))))));
        }
        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 3) 
        {
            var_25 ^= ((/* implicit */short) var_7);
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_8 [i_1] [i_4]))));
            arr_19 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-3))) == (max((((/* implicit */long long int) (-(var_16)))), (min((arr_11 [i_4] [i_1]), (((/* implicit */long long int) 4294967277U))))))));
        }
        for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    {
                        arr_29 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_11 [i_5] [i_6]);
                        var_27 = ((/* implicit */unsigned char) var_12);
                    }
                } 
            } 
            var_28 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)24)))))) ^ (max((((/* implicit */unsigned long long int) arr_25 [i_1 - 2] [i_1 + 1] [i_1 + 2])), (18446744073709551584ULL)))));
        }
    }
}
