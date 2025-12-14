/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238799
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) (unsigned short)45490);
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) ((unsigned short) 5794896171645111743LL))) : (((/* implicit */int) (unsigned char)51)))))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (_Bool)0))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)51)))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)44)) + (arr_7 [i_3] [i_2 + 1] [i_1] [i_0])))));
                        arr_11 [i_0] [i_0] = var_1;
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 3; i_4 < 15; i_4 += 3) 
    {
        arr_14 [i_4] = ((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)51))))))));
        arr_15 [i_4 - 1] [i_4] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (+(arr_7 [i_4 - 2] [i_4 - 3] [i_4] [i_4])))), ((+(0ULL))))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_4] [i_4 - 3] [i_4])))))));
        var_19 += ((/* implicit */short) (signed char)124);
        var_20 = ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */long long int) ((int) ((short) 5LL)))) : (((((/* implicit */_Bool) arr_13 [i_4 - 2] [i_4 - 2])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1)))))));
        var_21 += ((/* implicit */unsigned int) (unsigned char)203);
    }
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (~(min((((long long int) (unsigned short)49976)), (((/* implicit */long long int) var_1)))))))));
}
