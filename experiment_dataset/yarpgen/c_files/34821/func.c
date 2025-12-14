/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34821
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
    var_16 = ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_17 *= ((/* implicit */_Bool) arr_3 [(signed char)18]);
                var_18 = ((/* implicit */int) arr_3 [i_0 - 1]);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-74))));
                                var_20 |= ((/* implicit */signed char) ((((/* implicit */int) var_0)) < (((((/* implicit */_Bool) min((8019222238655746604LL), (((/* implicit */long long int) (unsigned short)0))))) ? (((/* implicit */int) max(((short)26076), ((short)11131)))) : (((/* implicit */int) arr_0 [i_4]))))));
                                var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_8 [i_0 + 3] [i_0] [i_0 + 3]), ((short)4817)))) ? (arr_9 [15LL] [i_1] [15LL] [15LL] [i_1] [i_1]) : ((-(((/* implicit */int) arr_10 [i_0] [i_0]))))))), ((+(((((/* implicit */long long int) ((/* implicit */int) (signed char)54))) & (arr_2 [i_0])))))));
                                var_22 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_2]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
