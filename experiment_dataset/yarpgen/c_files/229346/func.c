/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229346
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_2 [(_Bool)1] [i_1])) + ((((~(((/* implicit */int) arr_0 [i_0])))) - ((~(((/* implicit */int) var_12))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (((max((10U), (((/* implicit */unsigned int) (unsigned short)5917)))) >> (((max((arr_6 [19ULL] [19ULL] [i_1] [i_0]), (((/* implicit */unsigned int) var_9)))) - (4294951531U)))))));
                            var_19 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (short)32767)) >> (((/* implicit */int) arr_1 [i_0] [i_1]))))) & (var_1)))), (min((max((8318406205802234114ULL), (((/* implicit */unsigned long long int) arr_0 [i_1])))), (min((var_6), (((/* implicit */unsigned long long int) (unsigned short)59598))))))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */unsigned short) max(((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36630))) * (13231145625163955844ULL))))), (((/* implicit */unsigned long long int) (unsigned short)49764))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])) > (((/* implicit */int) var_4))));
            }
        } 
    } 
    var_21 &= ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
}
