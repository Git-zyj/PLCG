/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219177
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) || (((/* implicit */_Bool) min(((short)4095), (((/* implicit */short) arr_1 [i_0]))))))) || ((!(((/* implicit */_Bool) ((unsigned long long int) var_12)))))));
        var_13 = ((/* implicit */unsigned char) max((((unsigned long long int) arr_1 [i_0])), (((/* implicit */unsigned long long int) var_9))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [5U] = ((/* implicit */unsigned long long int) (+(((unsigned int) (short)4102))));
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (short)29492))));
                        var_15 = ((/* implicit */long long int) arr_5 [i_2 + 2]);
                        arr_13 [(short)12] [(short)12] [10ULL] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_7 [i_2] [i_2 + 2] [i_2 + 2]), (((/* implicit */unsigned short) (short)4075)))))) - (((long long int) arr_1 [i_0]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (-(((unsigned int) 3304115636214015351ULL)))))));
            arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_11 [i_0] [i_0]);
            var_17 = ((/* implicit */unsigned char) (-(-4746027906056257550LL)));
            arr_18 [i_0] [i_0] [i_0] = (!(arr_16 [i_0] [i_4]));
        }
        arr_19 [i_0] = ((/* implicit */short) arr_11 [i_0] [i_0]);
    }
    var_18 = ((/* implicit */_Bool) ((((long long int) (-(var_1)))) & (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    var_19 = ((/* implicit */_Bool) var_11);
}
