/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43414
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
    var_11 = ((/* implicit */unsigned int) min((var_11), (((((((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4167635570U)) ? (((/* implicit */int) (short)8689)) : (((/* implicit */int) var_8))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4558819879149101427ULL))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (1603209971U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
        var_12 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))));
        var_13 ^= ((/* implicit */_Bool) ((((2559372082U) >= (var_2))) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_0))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) var_9)))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */int) (_Bool)1)) >> (((14245585206591070977ULL) - (14245585206591070965ULL))));
                        }
                        var_15 = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_0] [i_3] [i_3]);
                        var_16 = ((/* implicit */long long int) arr_0 [i_0]);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)31)) ? (arr_9 [i_0] [i_0] [4LL] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [8U] [i_0] [i_0] [i_0] [i_0] [8U]))))))));
    }
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) min(((short)12826), (((/* implicit */short) var_9)))))) | (var_2))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (var_9)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) var_0)))))))))));
}
