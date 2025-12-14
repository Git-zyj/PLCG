/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33341
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
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) var_9))))), ((+(max((-9223372036854775793LL), (((/* implicit */long long int) var_9))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_13 += ((/* implicit */long long int) (_Bool)1);
                var_14 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) min((-7843036096701621501LL), (arr_3 [i_0] [i_0]))))) == (((/* implicit */int) min(((unsigned char)21), (((/* implicit */unsigned char) (_Bool)0)))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((unsigned char) var_6)))) > (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))))))));
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))) > (((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) : (var_10))))) ? (min((((((/* implicit */int) arr_4 [i_1 + 1] [i_1] [i_1])) >> (((((/* implicit */int) arr_6 [i_0] [i_0] [(_Bool)1])) - (92))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) || ((_Bool)1)))))) : ((-(((/* implicit */int) arr_6 [i_1] [i_1 + 1] [i_1 + 1]))))));
                    var_16 = ((/* implicit */long long int) min((var_16), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1])) && (((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1])))))) / (arr_3 [i_1 + 1] [i_1 + 1])))));
                }
                arr_9 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */_Bool) ((((long long int) arr_0 [i_0] [i_0])) >> (((min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)147)) - (((/* implicit */int) arr_0 [i_0] [i_0]))))), ((-(arr_7 [i_1] [(_Bool)1] [i_0]))))) + (4201923287266801843LL)))))) : (((/* implicit */_Bool) ((((long long int) arr_0 [i_0] [i_0])) >> (((((min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)147)) - (((/* implicit */int) arr_0 [i_0] [i_0]))))), ((-(arr_7 [i_1] [(_Bool)1] [i_0]))))) + (4201923287266801843LL))) - (4201923287266801782LL))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((((var_0) < (((/* implicit */long long int) ((((/* implicit */_Bool) -5096788264431232525LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))), (var_8))))));
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_9))))) | (((var_11) | (var_0)))))) || (((/* implicit */_Bool) var_6)));
}
