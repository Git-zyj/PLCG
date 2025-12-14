/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220423
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (1211805445U))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_3)))) : (((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48))) : (max((((/* implicit */unsigned long long int) -6805633334521481398LL)), (274844352512ULL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) arr_2 [i_0]);
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) var_11)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_2])) : (var_8))) : ((+(((/* implicit */int) arr_8 [i_2])))))) : (((/* implicit */int) (((-(((/* implicit */int) (signed char)-47)))) > (((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_1] [i_1] [i_1]))))))));
                    arr_9 [(unsigned short)2] [(unsigned short)2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (454684196)))) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_5 [i_1])))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_0 [i_0 + 1]) : (((/* implicit */int) (short)26184))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 6805633334521481404LL)))))))) ? (((((/* implicit */_Bool) 113240675)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) -1789256439)) < (-6805633334521481398LL))))) : (1211805441U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20)))));
}
