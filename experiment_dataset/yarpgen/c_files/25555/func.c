/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25555
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_6), (((/* implicit */signed char) var_4))))) & ((+(((/* implicit */int) var_3))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) var_7))))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            arr_6 [i_0] [(signed char)3] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_5 [i_1] [i_0] [(unsigned short)3])))), ((_Bool)1)));
            var_13 = ((/* implicit */_Bool) arr_2 [i_0]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                arr_9 [i_2] = ((/* implicit */signed char) arr_4 [9ULL]);
                var_14 = ((/* implicit */unsigned char) 4294967295U);
                arr_10 [(unsigned short)6] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) var_1));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
            arr_14 [(unsigned char)9] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 476713178U)) ? (4907433343744821911LL) : (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))));
            var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5)));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 1) 
            {
                for (unsigned int i_5 = 3; i_5 < 13; i_5 += 4) 
                {
                    {
                        arr_19 [i_3] [(signed char)8] [i_5] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-29987))))));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+(((long long int) (-9223372036854775807LL - 1LL))))))));
                    }
                } 
            } 
        }
        arr_20 [i_0] [i_0] = max(((-(113947175189574959ULL))), (((/* implicit */unsigned long long int) var_0)));
        var_18 -= ((((/* implicit */_Bool) arr_1 [i_0])) ? ((-(16310354204941658584ULL))) : (((15299819027744231586ULL) % (((/* implicit */unsigned long long int) 4294967292U)))));
    }
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max(((+((((_Bool)1) ? (((/* implicit */unsigned long long int) 9223372036854775796LL)) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned char) (short)0))), (564257065U)))))))));
    var_20 = ((/* implicit */signed char) var_5);
    var_21 = ((/* implicit */unsigned long long int) var_1);
}
