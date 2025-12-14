/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245126
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
    var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_2))) << (((((min((((/* implicit */unsigned long long int) -4774086707690354755LL)), (9172106847407182910ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))))) - (309262487268409ULL)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */long long int) (~((~(((((/* implicit */int) var_7)) - (((/* implicit */int) var_1))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_0] [i_3] [i_2] [i_0] [i_0] = ((long long int) ((((/* implicit */_Bool) (~(4774086707690354749LL)))) ? ((+(1152921504606846720LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)1] [(_Bool)1])))));
                                arr_17 [i_0] [i_0] [7LL] = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) | ((~((~(((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */long long int) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (-4774086707690354762LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) > (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)82))))))))));
                    var_14 += ((14ULL) % ((+(17892051815006779179ULL))));
                }
            } 
        } 
    } 
}
