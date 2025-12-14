/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27541
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) 2016682842U)))) ? (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))))))));
    var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) 1950848619)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_9))))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned char)60)))))))));
    var_16 = ((/* implicit */long long int) (+(((((/* implicit */int) var_11)) << ((((((-(((/* implicit */int) (short)13404)))) + (13428))) - (15)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) (unsigned short)6136);
                                arr_11 [i_4] [i_3] [i_4] [6LL] [6LL] &= ((/* implicit */short) (~(((((/* implicit */_Bool) max((var_10), (var_13)))) ? (((((/* implicit */_Bool) (unsigned char)197)) ? (669980189598514995LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) var_5))))));
                            }
                        } 
                    } 
                    arr_12 [i_1] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_1)))) ? (((-236229712) + (((/* implicit */int) (short)8532)))) : (var_2))) ^ (max((((/* implicit */int) var_1)), (max((var_2), (((/* implicit */int) (short)-8532))))))));
                }
            } 
        } 
    } 
}
