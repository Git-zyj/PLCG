/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48883
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_20 = (+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_0) : (((/* implicit */long long int) var_10)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_21 = ((((((((741944456449595579LL) + (-741944456449595591LL))) | (((/* implicit */long long int) -827818058)))) + (9223372036854775807LL))) >> (((((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_0])), ((unsigned char)93)))) - (74))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((arr_3 [(_Bool)1] [i_1] [12U]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_16)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_2 + 1] [i_2 + 2]) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 + 1] [(_Bool)1]))))))) : (arr_0 [i_2] [i_1])));
                    arr_6 [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) (!(((((((/* implicit */_Bool) (unsigned char)93)) ? (var_16) : (((/* implicit */unsigned long long int) -741944456449595591LL)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                }
            } 
        } 
    }
    var_23 = ((unsigned char) var_3);
}
