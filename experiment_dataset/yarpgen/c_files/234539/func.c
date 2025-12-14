/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234539
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
    var_10 = ((/* implicit */long long int) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_6)))))) : (min((((/* implicit */unsigned int) var_7)), (var_1)))))));
    var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_4)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */signed char) min((var_3), (arr_3 [i_0])));
                    var_13 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned int) arr_0 [i_0]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))), (min((-1019133915), (-1019133899))));
                    var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) (~(arr_6 [i_0] [i_1] [i_0])))) ? (((((/* implicit */_Bool) ((int) arr_1 [(unsigned char)18]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) : (min((((/* implicit */int) ((_Bool) var_9))), (((((/* implicit */int) arr_1 [(signed char)7])) ^ (((/* implicit */int) arr_3 [i_1]))))))))));
                    arr_7 [i_0] [9U] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_1 [(short)13])))))) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) var_9))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14420782542364912153ULL)));
                                var_16 ^= ((/* implicit */unsigned char) ((unsigned long long int) 6122727222338156426LL));
                                arr_12 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_9))) & (((((/* implicit */_Bool) (unsigned char)37)) ? (1019133914) : (2147483647)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 - 1]))) ^ (var_1))) >> ((((+(((/* implicit */int) arr_1 [i_1])))) - (74)))))) : (arr_6 [i_0] [i_0] [i_0])));
                                var_17 += ((/* implicit */unsigned long long int) ((short) (~(arr_6 [i_4 - 1] [i_3 + 1] [i_0 + 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
