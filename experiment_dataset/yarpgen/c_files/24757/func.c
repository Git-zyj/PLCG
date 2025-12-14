/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24757
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
    var_14 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) var_0)) : (var_11)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_13))) + (var_9))) : (((/* implicit */long long int) ((/* implicit */int) var_13))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [14ULL] [i_1] [i_0])))))) >= (((min((var_12), (732210572044457184ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(unsigned char)6] [i_0] [i_0])) ? (arr_0 [i_1]) : (arr_0 [i_1]))))))));
                arr_5 [i_0] |= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) || (((/* implicit */_Bool) ((int) arr_3 [i_0] [i_1] [i_1])))))), (max((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(short)17])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)31))) : (arr_0 [i_0]))), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [(signed char)19])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1] [i_0])))))));
                arr_7 [14] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)55042)) ? (arr_1 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-34)))))) < (max((4597310274718952421ULL), (((/* implicit */unsigned long long int) arr_1 [i_1])))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) var_1))))) : (max((((/* implicit */long long int) (unsigned short)65535)), (var_6)))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_9) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 18446744073709551615ULL))))));
            }
        } 
    } 
}
