/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211346
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
    var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_18))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 ^= ((/* implicit */unsigned short) 1537343438056235937ULL);
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])), (5544927179604489041ULL)))) ? (((/* implicit */unsigned long long int) arr_0 [i_0 + 1])) : (((((/* implicit */_Bool) 6121456416360287353ULL)) ? (446702407094315919ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))))) ? (((unsigned long long int) arr_0 [i_0 + 1])) : (((var_13) / (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0 + 1]))))));
                arr_6 [i_0] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_1] [i_0] [i_0]))) ? (var_14) : (((/* implicit */int) ((signed char) arr_3 [(short)3] [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_15 [i_1] [i_1] [0ULL] [i_3] [i_3] [i_0 - 1] &= (+(((((/* implicit */_Bool) 5399312337991037317ULL)) ? (min((1537343438056235929ULL), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2] [i_2 + 1] [i_1] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))))));
                            arr_16 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_0 + 1] [i_2 - 2] [i_3 - 2]);
                            var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */int) (_Bool)1)) * ((-(((/* implicit */int) (_Bool)0))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        for (long long int i_5 = 3; i_5 < 10; i_5 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_24 [i_4] [i_4] [i_4] [i_6])))));
                    arr_27 [i_4] = ((_Bool) arr_25 [i_5] [i_5] [i_5 + 1] [1LL]);
                }
                arr_28 [i_4] [i_4] = ((/* implicit */short) var_13);
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    for (short i_8 = 3; i_8 < 8; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 2; i_9 < 9; i_9 += 1) 
                        {
                            {
                                var_24 = min((((/* implicit */int) arr_17 [(_Bool)1])), (var_5));
                                arr_36 [i_9] [i_5] = ((/* implicit */unsigned long long int) arr_34 [(short)9] [i_5] [i_7] [i_5] [i_5]);
                                arr_37 [i_9] = ((/* implicit */long long int) arr_35 [i_5 + 1] [i_5 - 1] [i_8 - 3] [i_9 + 3] [i_9 + 2]);
                                var_25 = var_0;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
