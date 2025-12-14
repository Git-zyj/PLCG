/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44535
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
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))));
        arr_3 [i_0 - 2] = ((/* implicit */signed char) ((((((/* implicit */int) var_11)) + (2147483647))) << (((((/* implicit */int) var_6)) - (46)))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */short) ((arr_2 [i_0] [0U]) || (((/* implicit */_Bool) (short)21885))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_2))));
                        arr_11 [i_1] = ((/* implicit */signed char) var_5);
                        var_21 &= ((/* implicit */short) (+(((((/* implicit */_Bool) 3705719716U)) ? (((/* implicit */int) (unsigned short)40290)) : (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 4063232U)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)65535)))))))));
        var_23 = ((/* implicit */int) (~(((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32758))) : (1804266108935479351ULL)))));
    }
    var_24 = ((/* implicit */unsigned int) ((unsigned short) var_8));
    var_25 = ((/* implicit */unsigned int) min(((unsigned short)19414), ((unsigned short)25245)));
}
