/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3953
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_16 += ((/* implicit */unsigned char) (-(min((4294967292U), (arr_0 [i_0])))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_17 = max((((/* implicit */long long int) max((arr_5 [i_2 - 1] [i_1] [i_2 + 1]), (arr_5 [i_2 + 1] [i_1] [i_0])))), (var_2));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(unsigned short)2] [i_3])) ? (428160913U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19568)))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55063)) ? (((/* implicit */int) arr_2 [(unsigned char)17] [(_Bool)1] [i_3])) : (((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_0] [i_0] [i_2])), (arr_4 [i_1])))) : (min((((/* implicit */int) arr_4 [i_3])), (1281304382)))))))))));
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */short) min((((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) var_10)))))), (2094098899462062543LL)));
    var_20 = ((/* implicit */long long int) max((var_20), ((+(min((max((((/* implicit */long long int) 1966663570U)), (-3549973866084400997LL))), (((/* implicit */long long int) min((1966663570U), (((/* implicit */unsigned int) var_13)))))))))));
}
