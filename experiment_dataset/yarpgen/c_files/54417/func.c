/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54417
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
    var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_17)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned int) var_2);
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((arr_6 [i_0] [i_1 - 2] [i_0]) > (((/* implicit */int) (unsigned char)243))));
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) ((14041228972591934729ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239)))));
                                arr_17 [i_1] [i_3] [i_2 + 2] [i_3] [(_Bool)0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(min((3695007399U), (((/* implicit */unsigned int) 1765525939))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_1 - 1] [i_1 - 3] [i_1] [i_1 - 3])) << (((((((/* implicit */_Bool) arr_2 [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(short)1] [(short)1] [i_2] [i_4]))) : (var_7))) - (4294939666U)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (var_14)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_5 [i_0] [9ULL] [i_0]))) : (((/* implicit */long long int) arr_14 [i_2] [i_2 + 1] [(short)2] [i_2 + 1] [(short)3] [i_2 + 2]))))));
                                arr_18 [14LL] [14LL] [i_2] [i_3] [i_4] = ((/* implicit */signed char) min((((/* implicit */int) arr_9 [i_4] [i_1] [i_0])), (((((/* implicit */_Bool) max((arr_4 [i_0] [i_1]), (((/* implicit */unsigned char) arr_1 [(signed char)3] [i_2]))))) ? ((-(((/* implicit */int) var_19)))) : (((/* implicit */int) var_8))))));
                                arr_19 [i_0] [i_1] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) ((var_5) | (((((/* implicit */_Bool) -679970625)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))) : ((((_Bool)1) ? (((/* implicit */unsigned int) 1765525950)) : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))) + ((-(((/* implicit */int) (unsigned char)13))))))) ? (18446744073709551615ULL) : (1162835878889618735ULL))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
