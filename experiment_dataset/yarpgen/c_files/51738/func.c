/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51738
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((unsigned int) 3100055156330087370ULL)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(16840666780759371193ULL)))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_1)))))));
    var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
    var_20 += ((/* implicit */unsigned short) var_15);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_0 [i_0 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)200))))))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((535822336U) * (0U))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) var_11);
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1981830869)) ? (2379561885817273233LL) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 1; i_4 < 17; i_4 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) var_9);
                        var_26 = ((/* implicit */unsigned int) var_13);
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            arr_18 [i_5] [i_5] [i_5] [i_5] [i_5] [i_3] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-58)) >= (((/* implicit */int) arr_12 [i_3] [i_4 + 2]))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_4] [i_4 + 2] [i_4 + 2] [i_3])) || (((/* implicit */_Bool) arr_17 [i_3] [i_4 - 1] [i_4 + 2] [i_3]))));
                        }
                        for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            arr_23 [i_3] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-5047))));
                            arr_24 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_6]))) & (12987115285421050639ULL)));
                            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 15346688917379464237ULL))));
                        }
                        for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned char) (-(11408170739230302217ULL)));
                            arr_28 [i_1] [i_3] [i_1] [i_3] [i_4 + 1] [i_4 + 1] = ((/* implicit */unsigned short) -1116769278992859951LL);
                            var_30 = ((/* implicit */unsigned short) 16840666780759371193ULL);
                        }
                        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_4 + 1])) ? (((/* implicit */int) arr_4 [i_4 - 1])) : (((/* implicit */int) arr_4 [i_4 + 2])))))));
                    }
                }
            } 
        } 
        arr_29 [i_1] = ((((/* implicit */_Bool) (unsigned char)235)) ? (((-6627703134767190880LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [(short)18]))));
        var_32 = ((/* implicit */unsigned char) arr_12 [i_1] [(unsigned char)8]);
    }
    var_33 = ((/* implicit */unsigned long long int) var_14);
}
