/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216546
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_0]))));
                var_20 = ((/* implicit */unsigned int) max(((unsigned short)65535), ((unsigned short)16308)));
                arr_6 [i_1] = ((/* implicit */long long int) ((max((3316940921U), (arr_3 [i_0]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))) - (9223372036854775807LL)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((var_16) <= (((/* implicit */long long int) arr_3 [i_1]))))))) - ((~((-(((/* implicit */int) arr_1 [(unsigned char)19]))))))));
            }
        } 
    } 
    var_21 = (~(316284534));
    var_22 = ((/* implicit */unsigned char) var_3);
}
