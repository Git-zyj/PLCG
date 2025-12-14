/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53224
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
    var_17 ^= ((/* implicit */signed char) ((((/* implicit */int) var_10)) * (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)0)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19760))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11)))))))));
    var_18 = ((/* implicit */short) min((var_18), ((short)-19760)));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((unsigned char) var_0));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */signed char) var_3);
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) (short)-19761)) ? (((/* implicit */int) (signed char)-91)) : (-1)))));
                                var_21 = ((/* implicit */long long int) min((((max((((/* implicit */int) (signed char)111)), (var_1))) & (max((((/* implicit */int) var_7)), (var_1))))), (((/* implicit */int) arr_6 [i_0] [i_0 + 2] [i_0 + 2]))));
                                var_22 = ((/* implicit */unsigned int) (signed char)-123);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) (+(min((min((var_5), (((/* implicit */unsigned int) var_16)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) arr_6 [i_2] [i_1] [i_0])) : (((/* implicit */int) (signed char)125)))))))));
                }
            } 
        } 
    } 
    var_24 &= ((/* implicit */unsigned int) (signed char)-111);
}
