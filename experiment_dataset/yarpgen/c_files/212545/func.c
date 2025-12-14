/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212545
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_1 - 2] [i_1 - 2] [i_0] = ((/* implicit */unsigned short) max((var_9), (((/* implicit */unsigned int) (signed char)100))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */unsigned long long int) (-(1073739776LL)));
                        arr_11 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */short) ((unsigned char) (signed char)-79));
                    }
                }
            } 
        } 
        var_12 += ((/* implicit */_Bool) ((int) min((-1073739777LL), (((/* implicit */long long int) (signed char)79)))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                {
                    var_13 &= ((/* implicit */unsigned char) var_9);
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((196608U), (((/* implicit */unsigned int) (signed char)-79))))) ? (1037803627U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) (unsigned short)31053)) : (((/* implicit */int) arr_18 [i_7] [i_5] [i_4] [i_0]))))))) | (((/* implicit */unsigned int) max((var_8), (((/* implicit */int) var_2)))))));
                                arr_23 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((~(4294770706U))) << (((((/* implicit */int) var_10)) - (4331)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)31055)) : (((/* implicit */int) var_7))))) ? (max((var_0), (((/* implicit */int) (unsigned short)31055)))) : (((((/* implicit */int) (signed char)28)) | (var_8))))) : ((+(((/* implicit */int) var_6))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */int) var_2)), ((~(((/* implicit */int) var_4)))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */long long int) var_0)), (arr_16 [i_0] [i_0] [i_0]))));
    }
    var_17 = ((/* implicit */unsigned short) var_0);
}
