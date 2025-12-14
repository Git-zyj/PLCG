/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217473
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */int) arr_3 [i_1]);
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_6);
        }
        arr_7 [i_0] [i_0] = arr_0 [i_0];
        arr_8 [i_0] = ((/* implicit */int) ((long long int) (~(arr_1 [i_0]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 2; i_2 < 23; i_2 += 2) 
        {
            arr_11 [i_0] = (-9223372036854775807LL - 1LL);
            var_14 = 2ULL;
        }
    }
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        arr_15 [i_3] [i_3] = arr_13 [i_3];
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            arr_18 [i_4] [i_4] [i_4] = (+(((var_7) >> (((((/* implicit */int) arr_4 [i_4] [i_4])) / (1013217167))))));
            var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? (arr_1 [i_3]) : (arr_1 [i_4])))) && (((/* implicit */_Bool) (-(((/* implicit */int) (!(arr_14 [i_3] [i_3])))))))));
            var_16 = ((/* implicit */int) max(((-(arr_3 [i_3]))), (((/* implicit */long long int) ((unsigned int) min((arr_0 [i_4]), (((/* implicit */int) (unsigned char)199))))))));
        }
        /* vectorizable */
        for (unsigned int i_5 = 2; i_5 < 12; i_5 += 2) /* same iter space */
        {
            arr_23 [i_3] = ((/* implicit */unsigned short) ((int) var_5));
            var_17 ^= ((/* implicit */_Bool) ((var_3) ? (((unsigned int) arr_2 [i_3] [i_3])) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176)))));
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_20 [i_3] [i_3])) : (((/* implicit */int) arr_14 [i_3] [i_3])))) * ((-(((/* implicit */int) var_6)))))))));
        }
        for (unsigned int i_6 = 2; i_6 < 12; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                arr_28 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((arr_3 [i_6 + 1]) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_11))))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_6 - 2] [i_6 - 1] [i_6 - 2])) / (arr_19 [i_6 - 2])));
                arr_29 [4U] [i_6] [i_7] = ((/* implicit */int) var_6);
            }
            var_20 -= ((/* implicit */signed char) ((long long int) (-(arr_0 [i_6 - 2]))));
            arr_30 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)57)) ? (((((/* implicit */_Bool) arr_9 [i_6 - 1] [i_6 + 1] [i_6])) ? (min((((/* implicit */long long int) arr_21 [i_6])), (8634075203926440589LL))) : (((/* implicit */long long int) min((arr_27 [i_3] [5] [5] [i_3]), (((/* implicit */unsigned int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */long long int) arr_26 [i_3] [i_6] [i_6])), (arr_3 [i_3]))))))));
            var_21 ^= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned short)2044))))) < (((((/* implicit */_Bool) arr_19 [i_3])) ? (arr_0 [i_3]) : (((/* implicit */int) (unsigned char)164)))))))));
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            for (signed char i_9 = 3; i_9 < 12; i_9 += 3) 
            {
                {
                    var_22 -= ((/* implicit */unsigned char) (+(((arr_9 [i_9 - 2] [i_9 - 3] [i_9 + 1]) & (((/* implicit */unsigned int) arr_1 [i_3]))))));
                    arr_37 [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_24 [i_9 - 3] [i_9] [i_9 - 1])) ? (0) : (((/* implicit */int) var_6))))));
                    arr_38 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((int) (-(arr_16 [i_9 - 1] [i_9 - 3] [i_9 - 2]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 21; i_10 += 4) 
    {
        arr_42 [i_10] = ((/* implicit */long long int) ((signed char) var_4));
        arr_43 [i_10] = ((/* implicit */short) ((arr_1 [i_10]) & (arr_1 [i_10])));
        var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) -1964798532134358293LL))) ? (((/* implicit */unsigned int) arr_2 [i_10] [i_10])) : (var_5)));
    }
    var_24 = ((/* implicit */unsigned long long int) ((int) var_5));
    var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 5302712385952476511LL))) ? (((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))))) ? (((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned int) 8388592)), (var_7))))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) != (var_13)))), (((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
    var_26 = ((/* implicit */unsigned short) min((var_3), (var_3)));
}
