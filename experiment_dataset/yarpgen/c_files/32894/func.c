/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32894
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    for (long long int i_3 = 4; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) var_4);
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned int) min((var_20), (var_1)));
                                var_21 = (i_2 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)91)), (var_2))))))) >> ((((~(arr_8 [i_0] [i_0] [i_2] [i_1]))) + (8182118931261128LL)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)91)), (var_2))))))) >> ((((((~(arr_8 [i_0] [i_0] [i_2] [i_1]))) + (8182118931261128LL))) + (1641529205536152711LL))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((arr_3 [15U] [i_2 - 2]) & (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_3 - 3]))))))));
                                arr_14 [i_5] [i_1] [i_0] [i_2] |= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)230))));
                                var_23 = ((/* implicit */unsigned short) ((_Bool) arr_13 [i_5] [i_2] [i_3 - 2] [i_2 - 1] [i_2] [i_2 - 1]));
                            }
                            arr_15 [i_0] [i_0] [i_0] [i_2] [i_3 - 1] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) ((unsigned short) var_1))))) << (((var_11) + (7677668216571706062LL)))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) arr_6 [i_1]);
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    var_25 ^= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_9 [i_6] [6ULL])) : (((/* implicit */int) arr_11 [i_6] [i_1])))));
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_13 [i_0] [i_0] [(unsigned short)10] [i_0] [i_0] [i_6])))) ? (max((var_15), (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_6] [i_6] [5ULL])) > (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_1] [i_6] [i_0]))))))));
                }
            }
        } 
    } 
    var_27 = var_8;
    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((var_17) ? (max((((unsigned int) var_4)), (max((((/* implicit */unsigned int) var_17)), (var_3))))) : (var_1))))));
}
