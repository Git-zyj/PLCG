/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237513
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
    var_16 = ((/* implicit */short) var_15);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_17 = min((min(((unsigned short)27820), ((unsigned short)37698))), (min(((unsigned short)65535), (((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_1])))));
                arr_6 [(unsigned short)0] = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) var_11)))))))), ((+(((/* implicit */int) (unsigned short)65530))))));
                var_18 = ((/* implicit */long long int) (-(min((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)1)), (var_1)))), (((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) (unsigned short)27814)) : (((/* implicit */int) (unsigned char)1))))))));
            }
        } 
    } 
    var_19 ^= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) min((4196336154850600320ULL), (((/* implicit */unsigned long long int) var_9))))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)24180)) != (var_8))))))));
    var_20 = ((/* implicit */long long int) ((var_3) != (((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))) << (((((((/* implicit */_Bool) (short)-24181)) ? (var_8) : (((/* implicit */int) (unsigned char)254)))) + (1384850861))))))));
}
