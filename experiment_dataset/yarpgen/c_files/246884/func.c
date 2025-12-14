/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246884
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
    var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)7)) <= (-1))))))) + (((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_2))))));
                            var_19 = ((/* implicit */signed char) (((+(((/* implicit */int) max(((signed char)-1), (((/* implicit */signed char) (_Bool)1))))))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)11)) != (((/* implicit */int) (unsigned char)7)))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                            {
                                arr_15 [i_4] [i_4] [i_2] [i_1] [i_4] [10ULL] = ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))) : (var_7)));
                                var_20 = ((/* implicit */unsigned short) (+(arr_9 [i_0] [i_3] [12U] [i_3] [i_3 + 2])));
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))) : ((+(arr_12 [10ULL] [i_4] [i_3] [i_4])))));
                                arr_16 [i_0] [i_4] [(signed char)0] = ((((/* implicit */_Bool) arr_12 [(_Bool)0] [i_4] [i_1] [i_3 - 2])) ? (1903237697) : (((/* implicit */int) (unsigned short)65518)));
                            }
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((signed char) var_10))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9511))) : (-880113876626499293LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9497))))) << (((660159416) - (660159378)))));
                arr_17 [i_0] [i_0] |= ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [(unsigned char)12] [i_1] [i_1]);
            }
        } 
    } 
}
