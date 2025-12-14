/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229297
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
    var_16 = var_10;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(unsigned short)0] [i_0])) ? (((max((var_8), (-1163270327))) ^ (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) == (1628959928))))));
        var_18 = ((/* implicit */unsigned short) var_8);
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) arr_8 [i_2])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    arr_12 [i_1] [i_2] = ((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) (unsigned char)71))))) ? (((/* implicit */int) ((-1628959928) != (((/* implicit */int) (unsigned char)55))))) : (((arr_2 [i_1] [i_3]) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) var_11)))))) == (((/* implicit */int) ((_Bool) var_12))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            {
                                arr_19 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_2] [i_2]))))) ? (((/* implicit */int) ((unsigned char) arr_16 [(signed char)10] [i_2] [i_3] [i_1 + 2] [i_1 + 1] [i_2 + 1]))) : (((/* implicit */int) ((unsigned short) 6106185997324812688LL)))));
                                arr_20 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [6]))))) ? ((-(((/* implicit */int) arr_3 [4] [4])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)192)) || ((_Bool)1))))))) : (((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) 4294967295U)) ? (-204670680711997415LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 1628959928))))))));
                                arr_21 [(short)15] [i_2 + 1] [i_2] [i_3] [i_3] [3U] [3U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (signed char)111))) ? (((/* implicit */int) arr_10 [i_2])) : (503316480)))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) (unsigned char)175))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2 - 1] [i_1 + 2] [i_2 + 1] [i_1] [i_1 - 1]))) >= (var_3))))));
                }
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)37276))))))) << (((((/* implicit */int) var_2)) - (22)))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((unsigned int) arr_14 [i_1 - 1] [i_1 - 1] [i_1] [i_2] [i_2] [i_2])) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (1558763531473464333ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4))))));
            }
        } 
    } 
}
