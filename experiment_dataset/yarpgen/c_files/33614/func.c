/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33614
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
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((488412234U), (((/* implicit */unsigned int) var_15))))) ? (((/* implicit */int) min((((/* implicit */short) var_5)), (var_4)))) : (((/* implicit */int) var_11))))) ? ((~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4116875506U))))) : (((3U) >> (((((/* implicit */int) (unsigned short)22586)) - (22581))))));
    var_17 = ((/* implicit */int) var_11);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */int) var_11)) + (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? ((+(((/* implicit */int) (unsigned char)252)))) : ((~(((/* implicit */int) (unsigned char)19)))))))))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)4)) ^ (((/* implicit */int) (short)-24527))))) >= (max((min((16269024744983950747ULL), (((/* implicit */unsigned long long int) (unsigned char)239)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)229)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_1 [i_0])))))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */signed char) (((-(max((var_2), (((/* implicit */long long int) var_4)))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)31))))) || ((_Bool)0)))))));
    }
}
