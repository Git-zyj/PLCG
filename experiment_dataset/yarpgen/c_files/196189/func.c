/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196189
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) ((_Bool) (unsigned short)31744));
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3)))) : (var_12)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    var_19 = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_5 [i_2 + 1] [i_2 - 1] [i_2 + 1]))));
                    var_20 = var_8;
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) 15070525898007061381ULL))));
                }
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    var_22 = ((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_3] [i_3]);
                    var_23 = ((/* implicit */unsigned char) ((int) (((((-(((/* implicit */int) var_13)))) + (2147483647))) >> (((((/* implicit */int) var_2)) - (98))))));
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_3] [i_3] [i_3])), (((((/* implicit */_Bool) (unsigned short)19397)) ? (arr_9 [i_0] [i_3]) : (arr_1 [i_0]))))))));
                    var_25 = ((short) (~(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_10)), (min((((/* implicit */long long int) 1048574)), (-4077325905722672183LL)))));
}
