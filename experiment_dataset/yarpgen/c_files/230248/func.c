/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230248
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
    var_10 |= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)160), (((/* implicit */unsigned char) var_7)))))) | (((4502500115742720ULL) | (18446744073709551615ULL))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [6ULL] [i_0] [i_0] = ((/* implicit */unsigned char) min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */short) var_0))))) && (((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned char) var_7))))))))));
                    arr_10 [i_1] [(short)13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)44208))));
                    arr_11 [13ULL] [i_2] [(unsigned char)10] [(unsigned char)10] = ((/* implicit */_Bool) (unsigned char)224);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_11 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_3] [i_1] [i_3 - 1])) ^ (((/* implicit */int) arr_5 [i_0] [11ULL] [i_3 - 1])))) == ((~(((/* implicit */int) arr_5 [i_3] [i_1] [i_3 - 1]))))));
                                var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */short) var_5)), (arr_0 [9]))))));
                                arr_16 [i_3] [i_1] [(unsigned short)5] [(_Bool)1] [i_3] = ((/* implicit */long long int) (~(var_3)));
                                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) arr_3 [i_0]))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [12ULL] [9] [i_2] [i_2])) || (((/* implicit */_Bool) (short)-16129))));
                }
            } 
        } 
    } 
    var_14 ^= ((/* implicit */unsigned char) var_1);
    var_15 = ((/* implicit */unsigned short) var_7);
    var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (3203293947U) : (((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned short)65535)))) + (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-115)), ((unsigned char)200)))))))));
}
