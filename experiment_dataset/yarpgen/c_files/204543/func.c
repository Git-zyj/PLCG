/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204543
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_10 [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_3))))));
                            var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (unsigned char)9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : ((+(max((9783936671022231833ULL), (((/* implicit */unsigned long long int) (unsigned short)29636))))))));
                            var_12 -= ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) var_0)))));
                        }
                    } 
                } 
                var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)29636))))) ? (((/* implicit */int) ((((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [12U])) / (((/* implicit */int) arr_1 [i_0] [15])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 2109142472U)))))))) : (arr_8 [i_0] [i_0] [i_0] [i_0])));
                arr_11 [i_0] [(short)7] [i_0] = ((/* implicit */_Bool) ((signed char) ((unsigned long long int) max((5139516101454003232ULL), (((/* implicit */unsigned long long int) var_7))))));
                var_14 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (arr_9 [(signed char)11] [(signed char)11] [i_1] [i_1])))) ? (var_2) : (((/* implicit */int) arr_1 [i_1 + 1] [i_0])))), (((/* implicit */int) ((2109142472U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))))))));
            }
        } 
    } 
    var_15 ^= max((((long long int) max(((unsigned char)68), (((/* implicit */unsigned char) (_Bool)1))))), (((/* implicit */long long int) var_4)));
    var_16 |= ((/* implicit */int) ((unsigned long long int) (unsigned short)29622));
    var_17 ^= ((/* implicit */_Bool) ((unsigned int) var_0));
    var_18 = ((/* implicit */unsigned int) var_1);
}
