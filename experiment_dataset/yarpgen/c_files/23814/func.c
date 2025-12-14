/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23814
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
    var_14 = var_2;
    var_15 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) var_1)) & (((((/* implicit */_Bool) (unsigned short)52455)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) min((max((arr_4 [i_0 + 1] [i_1 + 1]), (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_1 [i_2] [i_0 + 1])))))), (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0)))))));
                    arr_8 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_6 [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) arr_3 [i_1] [i_1 + 1] [i_1])))))));
                    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)52905))));
                }
                var_18 *= ((/* implicit */unsigned short) 0ULL);
                var_19 *= max((((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_2 [(short)12])))) ^ ((+(((/* implicit */int) (unsigned short)52455))))))), (((unsigned long long int) arr_0 [i_0 + 2])));
                /* LoopNest 2 */
                for (unsigned short i_3 = 2; i_3 < 21; i_3 += 1) 
                {
                    for (unsigned short i_4 = 3; i_4 < 23; i_4 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1)) ? (((unsigned int) min(((short)32767), (((/* implicit */short) (_Bool)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
                            arr_14 [(_Bool)1] [i_1] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_5 [i_0] [i_4] [i_1])))) + (2147483647))) << (((((unsigned long long int) ((((/* implicit */int) (unsigned short)65533)) << (((((/* implicit */int) (signed char)(-127 - 1))) + (129)))))) - (131066ULL)))));
                            var_21 *= ((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_12 [i_4] [i_4] [i_4 - 3] [(_Bool)0] [i_4 - 3] [i_4 + 1])) / (((((/* implicit */int) (unsigned short)63254)) & (1400094892))))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (!(max(((_Bool)0), ((_Bool)1))))))));
            }
        } 
    } 
}
