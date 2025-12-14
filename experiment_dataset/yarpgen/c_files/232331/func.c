/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232331
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) (unsigned char)236)), (var_6))))) != ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))))));
    var_16 = (+(((/* implicit */int) ((short) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_1)))))));
    var_17 *= ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)32700))))), (var_2))) == (max((((((/* implicit */_Bool) (signed char)127)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) var_1)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_12)) / (arr_7 [i_0 - 3] [(signed char)10] [1] [3ULL] [i_2] [(signed char)10]))))) ^ ((~(((/* implicit */int) var_4))))));
                                arr_13 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_5)) <= (((((/* implicit */int) var_5)) - (((/* implicit */int) var_3)))))))));
                                var_19 += ((/* implicit */unsigned char) var_3);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)186))) == (arr_0 [i_1]))))) * (((unsigned long long int) ((17203436161756520073ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110)))))))))));
            }
        } 
    } 
}
