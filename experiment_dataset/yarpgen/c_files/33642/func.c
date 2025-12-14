/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33642
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_9))) : (((/* implicit */long long int) var_16))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((((/* implicit */int) (unsigned char)149)) <= (((/* implicit */int) (unsigned char)83)))) ? (min((var_16), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) max((arr_3 [i_0] [i_1]), (((/* implicit */int) var_19))))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((min((var_9), (((/* implicit */long long int) var_12)))) != (((/* implicit */long long int) (+(arr_1 [i_0] [i_0]))))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~((~(((((/* implicit */unsigned long long int) -7610800559657126649LL)) | (var_4)))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    var_21 ^= ((long long int) arr_5 [i_0 + 2] [i_0 - 3]);
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) -7514022204919935570LL)) && (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0])))) ? (max((((/* implicit */int) arr_5 [i_2] [i_2])), (arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_8 [i_2] [i_0])) ? (((/* implicit */int) arr_5 [i_1] [i_2])) : (((/* implicit */int) (signed char)-1)))))), (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                }
            }
        } 
    } 
}
