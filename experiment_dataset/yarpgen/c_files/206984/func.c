/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206984
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
    var_20 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (long long int i_4 = 4; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned char) arr_1 [i_4] [i_2]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7972)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_3] [i_4])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (((2665312116U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_2] [i_2])))))))));
                                var_22 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)40234)) ? ((+(1538669447924686354ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1]))) / (15302265159438346944ULL))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 3; i_5 < 14; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                            {
                                var_23 = ((/* implicit */unsigned short) var_5);
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) arr_10 [i_7] [i_1])) : (((/* implicit */int) arr_10 [i_6] [i_7])))))));
                                var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_5 + 1] [i_5] [i_5 + 1] [i_6] [i_1 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -7849647899132236994LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_5 - 3] [i_7])))))));
                                var_26 = ((/* implicit */unsigned short) -7849647899132237000LL);
                                var_27 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -398559774526083625LL)) ? (var_4) : (-398559774526083628LL)))));
                            }
                            for (long long int i_8 = 1; i_8 < 13; i_8 += 1) 
                            {
                                var_28 += ((/* implicit */long long int) var_11);
                                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? ((-(1407069568484914329ULL))) : (1407069568484914327ULL)));
                                var_30 = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) max((var_12), (((/* implicit */short) var_1)))))), (((((/* implicit */int) arr_15 [i_1 + 1] [i_1] [i_5 - 1] [i_8 - 1])) / (((/* implicit */int) arr_15 [i_1 + 2] [i_8] [i_8] [i_8 - 1]))))));
                            }
                            for (short i_9 = 4; i_9 < 13; i_9 += 1) 
                            {
                                var_31 |= ((/* implicit */short) arr_9 [i_9 - 4]);
                                var_32 = ((/* implicit */unsigned short) 429040676U);
                            }
                            /* vectorizable */
                            for (long long int i_10 = 2; i_10 < 14; i_10 += 3) 
                            {
                                var_33 = ((/* implicit */long long int) var_9);
                                var_34 += ((/* implicit */unsigned short) ((short) (short)-3163));
                                var_35 = ((/* implicit */long long int) ((short) var_3));
                                var_36 = arr_8 [i_5 - 2] [i_1 + 2] [i_1 - 1];
                            }
                            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) arr_9 [i_1]))));
                        }
                    } 
                } 
                var_38 += ((signed char) 2147475456U);
            }
        } 
    } 
    var_39 -= ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_7))))));
    var_40 = ((/* implicit */short) (-(((/* implicit */int) var_10))));
}
