/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242034
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
    var_14 = ((/* implicit */unsigned short) var_9);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((((/* implicit */int) var_8)), (var_13))) * (((/* implicit */int) var_11))))) ? (((max((((/* implicit */int) var_8)), (var_6))) / (var_13))) : (((/* implicit */int) var_3))));
    var_16 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) (short)0)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) var_4);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((var_13) / (((/* implicit */int) var_1)))))));
            arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [i_1 - 1])) * (((/* implicit */int) arr_2 [i_0] [i_1 - 1]))));
        }
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_0] [i_0]))));
            var_19 = ((/* implicit */_Bool) ((max(((+(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))))) / (((/* implicit */int) min((arr_2 [i_0] [i_2]), ((short)-28785))))));
        }
        var_20 = ((/* implicit */unsigned short) min((max((min((var_0), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) var_7))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (short i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    {
                        var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_5)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_4 + 1] [i_5]))) * (arr_15 [i_5] [i_4] [i_0] [i_0])))));
                        var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (max((((/* implicit */unsigned int) (unsigned short)38885)), (4227858432U)))));
                    }
                } 
            } 
        } 
    }
}
