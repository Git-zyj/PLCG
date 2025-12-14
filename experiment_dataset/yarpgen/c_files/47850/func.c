/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47850
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */short) var_4)), (max(((short)-13), (((/* implicit */short) (unsigned char)168))))))) + (((((/* implicit */int) max(((unsigned char)119), ((unsigned char)183)))) * (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) var_18))))))));
    var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_15))));
    var_22 = ((/* implicit */short) ((_Bool) var_8));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [(signed char)2] [(signed char)2] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)164), (var_2))))) / (((8116556774493762181LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)168))))))), (max((arr_2 [i_2]), (((/* implicit */long long int) var_5))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        arr_14 [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) ((((arr_6 [(unsigned char)22] [i_2]) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15050)) ? (8116556774493762181LL) : (((/* implicit */long long int) 1322869221U))))) || (((/* implicit */_Bool) (+(var_3)))))))));
                        arr_15 [i_3] = (!(((/* implicit */_Bool) min((arr_5 [i_0 - 1]), (arr_5 [i_0 + 2])))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_20 [i_0] [(signed char)2] [i_1] [i_2] [i_4] [(signed char)2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_2] [4U] [i_0 + 1] [(short)14])) ? (((/* implicit */long long int) var_0)) : (arr_18 [i_0] [i_0] [i_0 + 3] [i_0])));
                            arr_21 [i_0 + 2] [i_0 + 2] [i_4] [15U] [15U] [14U] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)139)) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7582))) < (var_8))))));
                            var_23 = ((/* implicit */_Bool) (+(6431035581717299910ULL)));
                            var_24 += (+(((/* implicit */int) (signed char)28)));
                        }
                        arr_22 [i_0] [i_4] [i_1] [12LL] [i_4] [i_4] = -302450053;
                    }
                }
            } 
        } 
    } 
}
