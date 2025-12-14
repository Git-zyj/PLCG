/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228900
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_0] [i_0] = ((/* implicit */short) max(((+((+(((/* implicit */int) var_4)))))), ((+(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_9)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) var_9);
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned short) (~((~(var_9)))));
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_16))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */unsigned long long int) var_5)))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_16)))))) : ((+(((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */int) var_3)))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (short i_6 = 1; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) var_9);
                                var_23 -= ((/* implicit */unsigned short) (+(max(((+(((/* implicit */int) var_10)))), ((+(((/* implicit */int) var_1))))))));
                                var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (var_5)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_7))))) : ((+(((/* implicit */int) var_13))))));
                                arr_19 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_14)))) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) * (var_14))), (var_8))) : (((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_5))))))));
                            }
                        } 
                    } 
                    arr_20 [18U] [i_0] [18U] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (max((((/* implicit */unsigned long long int) var_3)), (var_14)))))) ? ((~(((((/* implicit */int) var_15)) | (((/* implicit */int) var_15)))))) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) var_1)) & (((/* implicit */int) var_17)))) : (((/* implicit */int) var_1))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 1; i_7 < 22; i_7 += 1) 
                    {
                        var_25 = ((((/* implicit */_Bool) var_6)) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_18))) | (var_0))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_4))))))) : (min((var_2), (var_0))));
                        var_26 &= ((/* implicit */unsigned int) var_1);
                        var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_6))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_14)))))) ? (((/* implicit */unsigned long long int) (+(((unsigned int) var_4))))) : (((((/* implicit */_Bool) var_11)) ? (var_14) : (var_12)))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(var_0)))) * ((+(max((var_12), (((/* implicit */unsigned long long int) var_10))))))));
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */int) var_5);
    var_30 = ((/* implicit */short) var_2);
}
