/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210666
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 23; i_2 += 3) 
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) / (((/* implicit */int) (short)-32744))))), (((unsigned int) (-(((/* implicit */int) (short)-17385)))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) arr_2 [i_2 + 1])) >= (((/* implicit */int) min(((short)-17391), ((short)32743)))))));
                }
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_16), (((/* implicit */short) arr_1 [i_0] [i_1]))))) ? (((arr_1 [i_0] [i_1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 10LL)))))));
                arr_10 [i_0] = ((/* implicit */_Bool) ((short) (_Bool)1));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (((+(-3790784789034895251LL))) >= (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
    var_18 = ((/* implicit */_Bool) var_4);
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((unsigned int) (_Bool)1)) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_17 [i_3] = ((/* implicit */short) (!((_Bool)1)));
                arr_18 [i_3] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) (short)32720))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_5), (((/* implicit */short) (_Bool)1)))))) : (((((/* implicit */_Bool) (short)31511)) ? (((/* implicit */long long int) var_9)) : (8600409069260950203LL))))), (((/* implicit */long long int) ((arr_12 [i_4]) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_15 [i_3])))))));
            }
        } 
    } 
}
