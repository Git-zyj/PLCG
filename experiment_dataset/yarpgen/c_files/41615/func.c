/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41615
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (_Bool)0);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [(_Bool)1] [(unsigned short)1]);
        var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) var_5))));
        arr_4 [i_0] [(unsigned short)21] = ((/* implicit */unsigned int) ((unsigned long long int) (short)-32763));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (short)32763)) == (((/* implicit */int) var_6)))))));
                        var_12 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)57603)) ^ (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        arr_18 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_4])) >= (((/* implicit */int) arr_6 [i_4]))));
        arr_19 [i_4] |= ((/* implicit */unsigned long long int) var_7);
        arr_20 [7U] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_15 [i_4] [i_4])) / (((/* implicit */int) var_1)))) - (((((/* implicit */int) arr_1 [i_4] [i_4])) * (((/* implicit */int) var_6))))));
    }
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        arr_23 [i_5] = ((/* implicit */short) min((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_21 [(_Bool)1] [i_5])) ^ (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) (short)30282)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32733))) : (var_8))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)4196)) & (((/* implicit */int) var_1)))))));
        arr_24 [(short)3] = ((/* implicit */signed char) (+(((min((arr_12 [i_5] [i_5] [i_5]), (((/* implicit */unsigned int) var_0)))) - (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), ((_Bool)1)))))))));
    }
    var_13 = ((/* implicit */_Bool) var_2);
}
