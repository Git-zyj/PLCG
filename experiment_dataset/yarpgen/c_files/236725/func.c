/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236725
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61499)) ? (11170251312417172973ULL) : (((/* implicit */unsigned long long int) var_3))))) ? ((-(var_3))) : (((/* implicit */int) ((((/* implicit */int) var_6)) == (var_14))))))) ? (((((/* implicit */_Bool) var_15)) ? ((+(((/* implicit */int) var_0)))) : ((~(-150163929))))) : (var_2)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) var_3);
                var_21 = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_22 |= ((/* implicit */unsigned long long int) (~((~(((((/* implicit */_Bool) 9767716889064896133ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)139))))))));
                            var_23 |= ((/* implicit */unsigned long long int) (((((+(var_13))) < ((~(((/* implicit */int) arr_5 [i_3] [i_1] [9LL])))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) arr_2 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) (+(var_12)));
}
