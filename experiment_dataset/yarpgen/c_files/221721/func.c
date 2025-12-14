/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221721
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2146837036U)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (signed char)125))));
                                arr_13 [i_0] [(signed char)7] [i_2] [i_0] [(unsigned char)21] = ((/* implicit */_Bool) ((unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4463))) : (15462899291530539098ULL))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) (-(((((((/* implicit */int) (unsigned char)157)) / (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) (signed char)-100))))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_14))))), (((/* implicit */unsigned long long int) ((((_Bool) (_Bool)1)) ? ((~(((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) ((_Bool) var_16)))))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_2);
    var_24 = ((/* implicit */signed char) var_9);
}
