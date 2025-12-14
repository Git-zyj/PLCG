/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40034
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_13 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((4611686018426863616LL) / (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) min((arr_2 [i_0]), (((/* implicit */int) arr_1 [i_0])))))))) ? (2877067937U) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)37), (((/* implicit */unsigned char) arr_1 [i_1 - 1]))))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_7 [i_2] = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_4 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) max((((/* implicit */signed char) (_Bool)0)), (arr_3 [i_2] [i_2]))))))) ? (((/* implicit */long long int) min((2156903313U), (((/* implicit */unsigned int) (unsigned char)232))))) : (min((((/* implicit */long long int) ((((/* implicit */unsigned int) 308559074)) | (12582912U)))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (8010696699954289890LL)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) << (((32640) - (32638)))));
                            var_16 = ((/* implicit */_Bool) ((unsigned char) arr_12 [i_1 - 2] [i_1] [i_1] [i_1] [i_1]));
                            var_17 = ((/* implicit */unsigned short) (unsigned char)218);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned char) var_1);
                            var_19 ^= ((/* implicit */short) ((long long int) arr_13 [i_1] [i_1] [i_1 - 2] [i_1] [i_1] [i_1] [i_1]));
                            arr_17 [i_1] [i_2] [i_5] = ((/* implicit */unsigned int) var_0);
                        }
                    }
                    var_20 += ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) arr_0 [i_1])), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((long long int) arr_12 [i_0] [i_1] [i_0] [i_1] [i_0])))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((2ULL), (((/* implicit */unsigned long long int) 2318660597U))))) ? (((/* implicit */int) ((signed char) arr_1 [i_1]))) : (((/* implicit */int) (unsigned short)255))));
                }
                var_22 = ((/* implicit */long long int) ((_Bool) max((((/* implicit */unsigned short) (unsigned char)31)), (arr_10 [i_0] [i_0] [i_0] [i_1] [i_1]))));
            }
        } 
    } 
    var_23 += ((/* implicit */unsigned short) var_1);
}
