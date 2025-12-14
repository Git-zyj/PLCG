/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3556
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
    var_13 = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) (unsigned char)63)) ? (-580955448) : (((/* implicit */int) (short)-27631)))), (((/* implicit */int) (!(((/* implicit */_Bool) 9343083296685205188ULL))))))), (((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (short)0))))) - (((/* implicit */int) (unsigned char)157))))));
    var_14 ^= ((/* implicit */short) var_12);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) var_11);
        var_16 *= ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
        arr_2 [i_0] |= ((/* implicit */short) -580955470);
        var_17 = ((/* implicit */unsigned long long int) ((int) var_0));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_5 [i_2 + 1]))));
                    var_19 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_5 [i_1]))) + (((/* implicit */int) arr_10 [i_1] [i_1] [i_2] [i_3]))));
                    var_20 = ((/* implicit */unsigned long long int) (unsigned char)26);
                    arr_12 [i_1 - 1] [i_1 - 1] = ((/* implicit */_Bool) ((int) 35747322042253312ULL));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)5)))) * (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_5)))))));
    }
}
