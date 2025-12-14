/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43109
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
    var_16 = ((/* implicit */int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_2)), (min((var_1), (var_1)))))), (var_0)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((short) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_10))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) 2548013404170578769ULL);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((15898730669538972853ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46))))))));
        arr_7 [i_1] = ((/* implicit */short) (~(((/* implicit */int) (!(var_3))))));
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            for (long long int i_3 = 2; i_3 < 14; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */long long int) (short)4976);
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_3 + 2] [i_2 - 1])) ? (((/* implicit */int) arr_8 [i_2 + 4])) : (((/* implicit */int) ((15898730669538972846ULL) >= (((/* implicit */unsigned long long int) -5454537479999546780LL)))))));
                        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */_Bool) ((2548013404170578791ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
}
