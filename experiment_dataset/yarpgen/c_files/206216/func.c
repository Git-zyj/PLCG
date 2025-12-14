/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206216
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_2 - 1])) ? (((((/* implicit */long long int) arr_3 [i_1])) ^ (arr_5 [i_0] [i_0] [(_Bool)1] [i_0]))) : (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)38)) | (var_9))) ^ (((/* implicit */int) (signed char)-106)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned char) ((unsigned int) (~(1361188256U))));
                                var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0] [i_1] [(signed char)14] [i_3 - 1])) >= (((/* implicit */int) var_5))))), (min((min((((/* implicit */unsigned long long int) -1LL)), (2305841909702066176ULL))), (((/* implicit */unsigned long long int) arr_0 [i_3 - 1] [i_2 - 2]))))));
                            }
                        } 
                    } 
                    arr_12 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((_Bool) arr_11 [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (unsigned short)65535);
}
