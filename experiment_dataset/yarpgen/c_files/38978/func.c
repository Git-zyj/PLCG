/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38978
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
    var_19 += ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) (~(max((((/* implicit */int) var_15)), (1984)))));
                            var_21 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_1] [i_0]))) : (var_2))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) var_11))))))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35498)))));
                            var_22 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) ((3166529346U) < (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))), ((unsigned short)47711)))) % (((((((/* implicit */int) min(((signed char)-126), ((signed char)1)))) + (2147483647))) << (((((/* implicit */int) (short)23326)) - (23326)))))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (signed char)-45))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_17))));
                var_25 = ((/* implicit */int) max((((((/* implicit */_Bool) (short)21931)) || (((/* implicit */_Bool) (short)10890)))), (((((/* implicit */_Bool) 144115188075855871LL)) && (((/* implicit */_Bool) arr_7 [i_0]))))));
                var_26 = ((min((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1])) % (((/* implicit */int) arr_7 [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) var_10))) & (arr_10 [i_0] [i_1] [i_0]))))) >= (min((((/* implicit */long long int) arr_7 [i_0])), ((+(arr_5 [i_0]))))));
            }
        } 
    } 
}
