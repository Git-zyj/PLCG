/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233948
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
    var_13 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_1))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_14 = (+(max((-6752973274015007531LL), (2805832632761895115LL))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((arr_2 [i_3] [i_2 - 3]) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3] [i_2] [i_1] [i_0]))))))))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_0] [i_2 - 1] [i_2])), (-2805832632761895116LL)))) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)-1)))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (unsigned short)49817))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 1) 
    {
        var_18 += ((/* implicit */signed char) var_5);
        var_19 = ((/* implicit */signed char) -6752973274015007537LL);
        arr_13 [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_4 + 2] [i_4 + 2]))));
    }
    var_20 += ((/* implicit */unsigned char) var_11);
}
