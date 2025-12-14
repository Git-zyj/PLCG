/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34653
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) ((unsigned int) 4294967289U));
                            var_20 = max((((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) (short)10653)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)0] [i_2]))) : ((+(16574417987440549318ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_14))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                            {
                                var_21 = ((/* implicit */long long int) 1889402579);
                                var_22 = arr_4 [7] [i_2];
                            }
                            for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                            {
                                var_23 = (i_2 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_2] [i_1 + 1] [i_2] [i_2] [i_3] [i_5])) << (((((/* implicit */int) ((short) (+(((/* implicit */int) arr_8 [i_0] [i_2])))))) - (2854)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_2] [i_1 + 1] [i_2] [i_2] [i_3] [i_5])) << (((((((/* implicit */int) ((short) (+(((/* implicit */int) arr_8 [i_0] [i_2])))))) - (2854))) + (7949))))));
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_7 [i_0] [4] [i_0]))));
                                var_25 = ((/* implicit */unsigned short) ((unsigned int) (-(((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))))));
                            }
                            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                            {
                                var_26 = ((/* implicit */unsigned char) var_17);
                                arr_18 [i_2] [i_3] [i_6] = ((/* implicit */int) 4107682737U);
                            }
                            var_27 = ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned long long int) arr_11 [i_3] [i_3] [i_1 + 2] [i_1 + 2] [(_Bool)1])), (var_18))));
                            var_28 = ((/* implicit */unsigned long long int) ((long long int) var_0));
                        }
                    } 
                } 
                var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33389)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (-472520684092579205LL)))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) min((4294967288U), (((/* implicit */unsigned int) var_16))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))));
            }
        } 
    } 
    var_30 = ((/* implicit */_Bool) var_0);
}
