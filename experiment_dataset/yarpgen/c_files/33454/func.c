/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33454
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
    var_11 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) arr_1 [(signed char)8] [0])))))) : ((~(((long long int) var_3))))));
        arr_3 [(unsigned char)4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [3]))) & (var_1)))) ? ((-(((/* implicit */int) var_0)))) : ((+(((/* implicit */int) var_9)))))) >= ((((!(((/* implicit */_Bool) arr_1 [7] [(_Bool)1])))) ? (1931761457) : (((/* implicit */int) var_3))))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (short i_4 = 1; i_4 < 8; i_4 += 3) 
                {
                    {
                        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) / ((-(16000115704263080705ULL)))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1])) * (((/* implicit */int) arr_12 [i_1] [i_3 + 1] [i_4 - 1])))))));
                        var_13 = ((/* implicit */unsigned char) arr_7 [i_4]);
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((int) (signed char)26)))))));
    }
    for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        var_15 = ((/* implicit */long long int) arr_17 [(_Bool)1] [i_5]);
        var_16 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (unsigned char)254)) - (((/* implicit */int) arr_15 [12U])))) : (((((/* implicit */_Bool) arr_17 [16ULL] [2LL])) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (unsigned char)255))))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((((var_10) - (4582327953235538731LL))) > (min((((/* implicit */long long int) (short)31804)), (var_10)))))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [i_6]))));
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) (_Bool)0);
            var_19 |= ((/* implicit */signed char) (unsigned char)1);
            var_20 = ((/* implicit */_Bool) ((unsigned int) arr_21 [(_Bool)1] [i_7]));
        }
    }
    var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) var_7))))) ? (((var_7) + (((/* implicit */int) var_9)))) : (((/* implicit */int) ((unsigned short) var_5))))), ((+(((/* implicit */int) var_9))))));
}
