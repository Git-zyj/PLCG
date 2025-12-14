/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40517
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
    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) min((var_8), ((short)-1795))))));
                var_13 = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 + 1]);
                var_14 = ((/* implicit */_Bool) min(((~(((/* implicit */int) (short)30533)))), (((1485064692) + ((-(((/* implicit */int) (short)(-32767 - 1)))))))));
            }
        } 
    } 
    var_15 ^= ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) 1485064694);
        /* LoopSeq 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_2] [i_3] [i_3 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)10)));
            arr_13 [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_9 [i_3 - 1]), (arr_9 [i_3 - 1]))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_5 = 1; i_5 < 19; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        {
                            arr_23 [i_2] [i_5] [i_5 + 3] [i_6] [i_5 + 3] = ((/* implicit */unsigned long long int) max((((((-1485064695) + (2147483647))) << ((((((~(((/* implicit */int) (unsigned char)95)))) + (113))) - (16))))), (((/* implicit */int) var_6))));
                            arr_24 [i_2] [i_5] [11ULL] [i_2] [i_2] = ((/* implicit */_Bool) arr_22 [i_2] [i_4] [i_5] [i_6] [i_5 + 1] [(_Bool)1] [19LL]);
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((((/* implicit */long long int) (short)32767)), (max((arr_21 [i_5 - 1] [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_6]), (arr_21 [i_5 - 1] [(unsigned short)8] [(unsigned char)8] [(unsigned short)8] [(unsigned char)8] [i_7]))))))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (short)20703)))))))), (((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)-30528)) : (((/* implicit */int) (_Bool)1))))) + (max((7006418862470815974ULL), (((/* implicit */unsigned long long int) (short)22868))))))));
        }
    }
}
