/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217747
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_14 = ((((/* implicit */_Bool) (unsigned char)196)) ? (6642400487015315015LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)47605)))));
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) var_9);
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)44169)))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 700397496)) >= ((+(((((/* implicit */_Bool) 17897926205847290805ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (548817867862260810ULL)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 17897926205847290805ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)20279))))) ? (((/* implicit */int) (unsigned short)45244)) : (((/* implicit */int) var_7))))) : (14438122260016472551ULL)));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned int) ((unsigned short) max((arr_0 [i_1]), (((4008621813693079053ULL) + (((/* implicit */unsigned long long int) -3194063966908291923LL)))))));
            arr_12 [i_1] [(unsigned short)15] [i_2] |= ((/* implicit */unsigned long long int) arr_6 [i_2]);
        }
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    {
                        arr_21 [2U] [i_3] [(_Bool)1] [i_5] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_9 [i_1] [(unsigned short)13] [i_5])) ? (((/* implicit */int) arr_2 [i_5])) : (arr_9 [i_5] [i_3] [i_1]))), (((((/* implicit */_Bool) arr_9 [i_1] [i_3] [i_4])) ? (arr_9 [i_1] [i_1] [i_1]) : (((/* implicit */int) arr_2 [i_5]))))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (-5781381478625550641LL))) || (((/* implicit */_Bool) (+(3838144395U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((unsigned long long int) arr_11 [i_1] [i_3])))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 6233901916766906584ULL)) || (((/* implicit */_Bool) arr_4 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((548817867862260811ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4273))))))) : (0U))))));
            var_21 = ((/* implicit */unsigned short) (~(arr_18 [i_1])));
        }
    }
    var_22 += ((/* implicit */long long int) var_1);
    var_23 = ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max((9007199254738944ULL), (((/* implicit */unsigned long long int) min((var_9), (var_5)))))))));
}
