/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241499
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
    var_19 ^= ((/* implicit */unsigned char) -1688502236);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    var_20 *= ((((/* implicit */_Bool) ((1688502235) - ((~(-1688502233)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((int) arr_4 [(unsigned char)0] [i_1]))) > (arr_5 [i_0] [(_Bool)0] [i_2]))))) : (((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))) << (((arr_8 [i_0] [i_1] [8LL]) - (8086971205051588538ULL))))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_13)))) ? (max((-1688502236), (1688502235))) : (((/* implicit */int) arr_7 [i_2 + 1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (-1688502236) : (((/* implicit */int) ((1688502241) < (((/* implicit */int) arr_6 [i_2 + 2] [i_1] [i_0] [i_0])))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_1])) & (((/* implicit */int) arr_0 [i_0]))))) ? (arr_8 [i_2 + 1] [i_2 + 2] [i_2 + 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(unsigned short)7])) ? (1688502264) : (((/* implicit */int) arr_0 [i_0])))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_14);
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (min((min((var_17), (((/* implicit */long long int) var_2)))), (min((((/* implicit */long long int) 1688502235)), (var_7))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) 1688502235)) ? (-1688502220) : (1688502264))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) <= (var_13)))))))));
}
