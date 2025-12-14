/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243316
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_10)))) * (((unsigned long long int) var_5))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_10)) : (var_7)))) ? (((/* implicit */int) ((short) var_4))) : (((/* implicit */int) ((short) var_4)))))) || (((/* implicit */_Bool) ((((unsigned int) var_2)) * (((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))))))));
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) < (((((unsigned long long int) var_3)) & (((/* implicit */unsigned long long int) ((unsigned int) var_1))))))))));
                                arr_15 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1] [i_4] |= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5)))) < (((((/* implicit */_Bool) var_6)) ? (var_7) : (var_8))))));
                                var_16 *= (~(((unsigned int) ((unsigned long long int) var_2))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (short i_6 = 1; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_17 = ((unsigned int) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_7))) : (((/* implicit */unsigned long long int) ((unsigned int) var_12)))));
                                var_18 = (~(((unsigned int) ((short) (short)16384))));
                                var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) var_9)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_12)) : (var_0))))) < (((/* implicit */unsigned long long int) var_9))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) ((((unsigned int) var_6)) & (((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) < (var_1))))) ^ (((unsigned int) var_9))))));
                }
            } 
        } 
    } 
}
