/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239761
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                            {
                                arr_17 [i_2] [(short)6] [16] [3ULL] [i_4] [(short)9] = ((/* implicit */unsigned char) 10);
                                arr_18 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (+((+(((((/* implicit */int) (_Bool)1)) << (((-1LL) + (18LL)))))))));
                                var_16 ^= -541783425306289681LL;
                            }
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_5 = 4; i_5 < 20; i_5 += 3) 
                            {
                                var_17 ^= ((/* implicit */int) 1LL);
                                arr_22 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)204)) != (34)));
                            }
                            for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 1) 
                            {
                                arr_25 [i_6] [i_6 - 2] [i_2] [i_3] [2] [i_6] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 1LL)) * (((((/* implicit */unsigned long long int) (-(-35)))) - (max((var_12), (arr_7 [12] [6] [i_2])))))));
                                arr_26 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)5363)) ? ((-(-1LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) 3092165590U))));
                            }
                            var_19 = ((/* implicit */int) arr_19 [i_1] [i_1] [i_3]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        {
                            arr_32 [i_7] [i_1 + 1] = ((/* implicit */unsigned int) arr_6 [i_7] [i_8]);
                            var_20 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)255)) >> (((/* implicit */int) ((_Bool) (_Bool)1))))) & (((/* implicit */int) (((_Bool)0) || (arr_13 [i_7] [i_1]))))));
                            var_21 = ((/* implicit */int) arr_20 [i_1 + 1] [i_1 + 1] [(unsigned char)13] [i_7] [i_1] [i_1]);
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_14 [i_0] [(_Bool)1]), (arr_14 [18ULL] [10U])))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [(unsigned char)20] [i_1] [i_0] [(unsigned short)14] [i_1 - 1] [i_0]))))), (max((((arr_19 [i_0] [i_1] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) (_Bool)1))))));
            }
        } 
    } 
    var_24 += ((/* implicit */long long int) (short)3072);
    var_25 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) << (((((((/* implicit */_Bool) ((var_13) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)118))) & (8564486698594176651LL))))) - (181LL)))));
}
