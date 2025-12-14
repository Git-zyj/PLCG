/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189842
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
    var_13 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */_Bool) (-(max((((long long int) (short)-18731)), (((/* implicit */long long int) arr_2 [i_0 + 1] [i_0 + 3]))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_14 = ((/* implicit */int) arr_3 [(short)19]);
                    arr_7 [i_0] [i_0] [i_0] [i_2] &= ((/* implicit */signed char) (+((-(((((/* implicit */int) var_4)) * (((/* implicit */int) var_4))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_16 [(unsigned char)2] [i_1] [i_1] [(short)5] [(unsigned char)2] [(short)5] [12LL] = ((/* implicit */signed char) ((short) (_Bool)1));
                                var_15 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned char) var_2)))))));
                                var_16 = ((/* implicit */unsigned char) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)249)) && (arr_2 [i_0] [i_0]))) || (((((/* implicit */_Bool) ((arr_2 [i_1] [i_2]) ? (((/* implicit */int) (_Bool)1)) : (var_8)))) || (((/* implicit */_Bool) min((var_8), (((/* implicit */int) (signed char)(-127 - 1))))))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((((long long int) ((short) var_0))), (((/* implicit */long long int) var_12))));
}
