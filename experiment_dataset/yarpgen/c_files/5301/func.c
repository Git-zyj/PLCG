/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5301
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
    var_14 = ((/* implicit */int) ((unsigned int) (+(((long long int) (short)8368)))));
    var_15 = ((/* implicit */unsigned int) (short)8368);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) (+(7380470875053053443LL)))), (((unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) min(((unsigned short)43398), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-7674))))))))));
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_0])), (var_11)))) ? (((arr_8 [i_0] [i_1] [i_2 + 1] [i_3 - 1] [i_2]) ? (-7380470875053053443LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))) ? (min((((/* implicit */unsigned int) ((int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31744))) : (arr_11 [i_0] [i_1 + 4] [i_2 - 1] [i_3] [i_4]))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_8 [i_0 - 2] [i_1] [i_2] [i_3] [i_4])) : (var_11))))))));
                            }
                        } 
                    } 
                    var_18 |= ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (short)-7674)))));
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */unsigned short) var_4);
}
