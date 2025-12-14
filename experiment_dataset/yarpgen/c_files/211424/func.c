/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211424
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (short)-9436)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((var_8), (((/* implicit */short) (_Bool)1)))))))) ? (((/* implicit */int) var_11)) : ((~(((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */int) var_7))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_17 = var_15;
        var_18 &= ((/* implicit */int) max((((/* implicit */long long int) ((4068190402U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)9852)))))), ((-(((((/* implicit */_Bool) var_1)) ? (8496988915847151416LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
    }
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)6))))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) ((short) (short)48))))) : (((/* implicit */int) min((var_14), (((/* implicit */unsigned short) var_9)))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        for (int i_2 = 3; i_2 < 11; i_2 += 2) 
        {
            {
                var_20 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551600ULL)));
                /* LoopNest 3 */
                for (unsigned char i_3 = 2; i_3 < 11; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 9; i_5 += 3) 
                        {
                            {
                                arr_14 [i_5] [i_4] [i_2] [i_2 - 2] [i_2] [i_2 - 2] [i_1] = ((/* implicit */unsigned short) min((min(((-(((/* implicit */int) (unsigned short)10)))), (((int) -620194604)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_14))))));
                                arr_15 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (var_6)))) ? (((/* implicit */int) ((_Bool) (signed char)53))) : (min((((/* implicit */int) (short)17817)), (var_5))))));
                                arr_16 [i_2] [i_2] = ((/* implicit */_Bool) var_13);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
