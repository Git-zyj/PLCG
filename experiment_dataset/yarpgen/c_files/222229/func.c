/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222229
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
    var_10 = ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        var_11 -= ((/* implicit */unsigned int) (short)2016);
                        arr_10 [i_3 + 1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2016)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2016))) & (5109053989498046746ULL))) : (((/* implicit */unsigned long long int) 433288392U))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_12 *= ((/* implicit */_Bool) (-(((/* implicit */int) (short)2013))));
                            arr_16 [i_0] [i_0] [11ULL] [11ULL] [11ULL] = ((/* implicit */unsigned int) 1068450741643395886ULL);
                            arr_17 [i_5] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) var_4));
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_0]))) - (5109053989498046746ULL)));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) (short)2026);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_21 [i_0] [i_0] [i_6] [i_4] [i_6] = ((/* implicit */unsigned int) ((0ULL) - (var_2)));
                            var_14 *= arr_20 [i_2] [i_2] [i_2];
                        }
                        arr_22 [14U] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_3 [i_0] [i_2]) == (arr_3 [i_4] [i_1])));
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            arr_25 [i_2] [i_7] = ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 34909494181888ULL)))) : (433288369U));
                            var_15 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 4189042262U)))) : (arr_2 [2U] [i_1])));
                            var_16 = var_4;
                            var_17 = ((1023139540U) == (532676608U));
                        }
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8] [i_4] [8LL] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_1) : (1288789269U)))) : (5109053989498046750ULL))))));
                            arr_30 [i_8] [i_2] [i_2] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned long long int) (_Bool)1)));
                            var_19 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_0 [i_8] [i_0])) : (18446744073709551609ULL));
                        }
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            var_20 = ((/* implicit */long long int) var_6);
                            var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3149289680U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2029))) : (2ULL)))) ? (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (16777200U));
                        }
                    }
                    var_22 = ((/* implicit */unsigned long long int) (_Bool)0);
                    arr_33 [i_0] [i_1] [i_0] = 2797941758U;
                    var_23 = ((_Bool) ((((/* implicit */_Bool) arr_32 [i_2] [(_Bool)1] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2042))) : (958269080U)));
                }
            } 
        } 
    } 
    var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_6)))) ? (((/* implicit */unsigned long long int) var_8)) : ((+(5977905177606449953ULL))));
}
