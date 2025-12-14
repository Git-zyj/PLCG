/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242503
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
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    var_16 *= ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0 + 3] = ((/* implicit */_Bool) ((536870904ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
        var_17 = arr_1 [i_0 - 2];
        var_18 = ((/* implicit */unsigned long long int) min((var_18), ((+(18446744073709551615ULL)))));
        arr_4 [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4163303861305967492ULL)) || (((/* implicit */_Bool) var_10))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 2) /* same iter space */
    {
        arr_7 [(unsigned short)9] &= ((/* implicit */unsigned long long int) (unsigned short)65535);
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_1 - 2]) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_1 [i_1]))))))))) ? (((/* implicit */unsigned long long int) (~(((arr_2 [(_Bool)1]) ? (((/* implicit */int) (unsigned short)43061)) : (((/* implicit */int) (unsigned short)3854))))))) : ((+(arr_5 [i_1 + 3] [i_1 + 1])))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        var_20 = arr_11 [i_2];
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                var_21 &= ((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) (_Bool)1)));
                var_22 |= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_16 [6ULL] [i_2 + 1] [i_3 + 1] [(_Bool)1])) : (((/* implicit */int) (unsigned short)13116))));
            }
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (_Bool)1))));
            arr_17 [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) ((var_13) ? (((/* implicit */int) arr_16 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2])) : (((/* implicit */int) (unsigned short)29788))));
        }
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            arr_22 [9ULL] [i_5] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43061)) << (((14647563573829643364ULL) - (14647563573829643364ULL)))))) ? ((+(0ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                for (unsigned short i_7 = 2; i_7 < 13; i_7 += 1) 
                {
                    {
                        arr_27 [i_2 + 1] [7ULL] [i_2] [11ULL] [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_7] [i_7] [15ULL] [i_7 + 3]))));
                        arr_28 [i_2] [i_2] [(_Bool)1] [(_Bool)1] = ((var_6) & (var_10));
                        var_24 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)29788)) : (((/* implicit */int) (unsigned short)29775))))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (var_7)));
                        var_26 = ((unsigned long long int) arr_12 [i_2] [i_7 - 1]);
                    }
                } 
            } 
            arr_29 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) arr_24 [2ULL] [i_2] [i_5] [i_5]))))));
            arr_30 [5ULL] [i_2] [(unsigned short)0] = ((/* implicit */_Bool) arr_12 [i_2] [i_5]);
            /* LoopSeq 3 */
            for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)22474)))));
                var_28 = ((/* implicit */unsigned short) ((7529000192990530353ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                arr_35 [i_8] [i_2] [i_2] [11ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 3; i_10 < 14; i_10 += 1) 
                {
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (unsigned short)0))));
                    arr_40 [i_2 - 1] [i_5] [i_5] [i_10 + 3] |= ((/* implicit */_Bool) arr_12 [i_5] [i_5]);
                    var_30 = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
                }
                for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    var_31 = (unsigned short)65535;
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_2 - 1] [i_2 + 1] [i_2] [15ULL]))) & ((~(var_12)))))));
                }
                arr_43 [i_2] = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (3670375093964970180ULL));
            }
            for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 4) /* same iter space */
            {
                var_33 ^= ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43050))) : (arr_45 [i_2 + 1] [i_5] [i_12] [i_12]));
                arr_46 [i_2 - 1] [11ULL] [(unsigned short)0] [i_2] = (~(2249183397932689915ULL));
            }
        }
        arr_47 [6ULL] &= arr_44 [(unsigned short)9] [(_Bool)1] [(_Bool)1];
        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [(_Bool)1] [i_2 + 1] [i_2] [i_2])) ? (((/* implicit */int) arr_42 [(_Bool)1] [i_2 + 1] [i_2] [i_2])) : (((/* implicit */int) arr_24 [10ULL] [i_2 + 1] [i_2] [i_2 + 1])))))));
    }
    var_35 -= ((/* implicit */unsigned long long int) var_14);
}
