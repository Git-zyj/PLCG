/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46484
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((long long int) var_2)) | (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-6102651496370742756LL) : (6102651496370742755LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_1)))))))));
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (+(min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_4))), (((/* implicit */unsigned int) var_0)))))))));
    var_13 -= ((/* implicit */signed char) min((((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_2))) <= (var_6))) ? (((int) var_10)) : (((/* implicit */int) var_9))))), (-6102651496370742756LL)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0] [i_0]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) ^ (16901277965722394531ULL))) : (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8))) : (119761120752427786ULL))))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_15 ^= ((/* implicit */unsigned short) arr_7 [i_2] [i_2] [i_2]);
                            var_16 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (signed char)-71))));
                            arr_11 [i_0] [i_1] [i_1] [i_2 + 1] [i_3] = ((/* implicit */long long int) 4294967295U);
                        }
                    } 
                } 
            }
        } 
    } 
}
