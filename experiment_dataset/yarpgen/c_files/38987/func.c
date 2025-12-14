/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38987
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)27981)) && (((/* implicit */_Bool) (unsigned short)2149))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((unsigned long long int) arr_0 [i_0] [i_0])) : (max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))));
                var_19 = ((/* implicit */short) ((unsigned int) ((unsigned short) arr_0 [i_0] [i_1])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (unsigned char i_3 = 3; i_3 < 15; i_3 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) (unsigned short)27994)) << (((/* implicit */int) (_Bool)1)))));
                arr_8 [i_2] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37555)) ? (var_3) : (((/* implicit */int) arr_2 [i_2] [i_3] [i_3 - 1]))))) && (((/* implicit */_Bool) ((int) arr_0 [i_2] [i_2])))))), (max((((((/* implicit */_Bool) (unsigned short)27981)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)1)))), (((/* implicit */int) arr_3 [(unsigned short)3]))))));
            }
        } 
    } 
    var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 28064988U)) ? (((/* implicit */int) (unsigned short)8644)) : (1623406755)))) ? ((+(max((((/* implicit */unsigned long long int) var_15)), (var_6))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (4266902313U) : (((/* implicit */unsigned int) var_3))))) / (((var_9) + (14704223647296124278ULL)))))));
    var_22 ^= ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_9)))))), ((((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65524)))))) : (min((550451857U), (((/* implicit */unsigned int) var_14))))))));
}
