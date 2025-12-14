/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218655
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
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_7 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) | (arr_5 [i_0] [i_1])))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 2]))))), (((unsigned long long int) (unsigned short)59301))));
                var_19 = ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) (unsigned char)152)))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0 - 2])), (arr_5 [i_0 + 1] [i_0])))) || (((/* implicit */_Bool) arr_2 [i_0 + 1]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 -= (unsigned short)57344;
                    var_21 &= ((/* implicit */unsigned char) ((_Bool) 8764577672208832924ULL));
                    arr_12 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_1] [i_1]))) - (-17LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0])))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (unsigned short i_5 = 3; i_5 < 11; i_5 += 4) 
            {
                {
                    var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((signed char)-59), (((/* implicit */signed char) (_Bool)1)))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_10 [i_3] [i_4]))));
                    var_24 = ((/* implicit */_Bool) max((var_24), (((2255743768U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233)))))));
                }
            } 
        } 
    } 
}
