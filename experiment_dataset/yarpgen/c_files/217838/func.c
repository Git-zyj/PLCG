/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217838
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) 10ULL))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [(unsigned short)1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [i_0] [(short)5])), (((((/* implicit */int) min(((signed char)13), ((signed char)-36)))) ^ (((/* implicit */int) min((((/* implicit */signed char) var_6)), (var_12))))))));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_3))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_16 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) 68702699520LL))) >= ((-(((/* implicit */int) (signed char)123)))))))) * (((((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) var_8))))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_3))) & (arr_1 [i_1]))))));
            var_17 -= ((/* implicit */int) var_13);
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned long long int) (unsigned short)37443);
            var_19 = ((/* implicit */unsigned short) 5481994991289097567ULL);
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (((unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(unsigned char)3] [i_2] [i_0]))))))));
            var_21 |= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (((_Bool)1) ? (-3312517381764031932LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((long long int) var_10)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_2])))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
        {
            var_22 ^= ((/* implicit */unsigned long long int) ((signed char) arr_2 [i_3] [i_0]));
            /* LoopNest 3 */
            for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                for (unsigned char i_5 = 3; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) var_0);
                            var_24 ^= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_21 [i_4] [i_4] [(unsigned short)8] [i_4] [i_4]))));
                            arr_22 [(_Bool)1] [i_5] [i_3] [i_3] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_14 [i_6] [i_5] [i_4] [i_3]))))) ? (((((/* implicit */int) var_7)) & (((/* implicit */int) (signed char)-7)))) : (((/* implicit */int) ((var_2) || (((/* implicit */_Bool) var_12))))));
                            arr_23 [i_3] [i_5 - 2] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */int) ((unsigned long long int) ((unsigned long long int) (short)7227)));
                        }
                    } 
                } 
            } 
            var_25 -= ((/* implicit */signed char) (_Bool)1);
        }
        for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1082331758592ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((long long int) (signed char)123))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) var_7);
                            arr_38 [i_10] [i_9] [i_9] [i_9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-21205)) + (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                            var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */int) ((_Bool) max((-68702699520LL), (((/* implicit */long long int) 268435454)))))) | (((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) (signed char)22)))))))));
                            arr_39 [i_7] [i_7] [i_9] [i_7] [i_0] = ((/* implicit */int) var_3);
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_11 = 0; i_11 < 23; i_11 += 2) 
    {
        arr_42 [i_11] [i_11] = ((/* implicit */int) max((((/* implicit */long long int) ((short) arr_40 [i_11]))), (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)-1)))) + (((68702699520LL) - (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-12682)) + (2147483647))) >> (((((/* implicit */int) var_11)) - (11903)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_40 [i_11]))))) ? (((((/* implicit */int) (unsigned char)83)) >> (((1257846376U) - (1257846366U))))) : (((/* implicit */int) (short)12338))));
        var_30 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((unsigned long long int) 16775168U))) ? (((/* implicit */int) arr_40 [i_11])) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)125))))))));
    }
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-25)) ? (((((/* implicit */int) var_11)) - (((/* implicit */int) ((unsigned short) var_2))))) : (min((((/* implicit */int) var_12)), (var_5)))));
}
