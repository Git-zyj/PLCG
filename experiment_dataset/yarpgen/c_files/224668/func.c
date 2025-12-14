/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224668
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
    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)15048))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2]);
                    var_18 = ((/* implicit */short) ((((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)-25655))))) * (((/* implicit */int) ((_Bool) var_5)))));
                    var_19 &= ((/* implicit */short) (unsigned short)124);
                }
            } 
        } 
        var_20 *= ((/* implicit */short) arr_2 [i_0]);
        arr_9 [(unsigned short)11] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) var_5)) << (((arr_4 [(_Bool)1] [2] [i_0]) - (497037631))))));
        arr_10 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-116)), ((short)30184)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)77))) : (6204469333373754590LL))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50553)))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 1) 
    {
        var_21 = ((/* implicit */_Bool) (unsigned char)48);
        var_22 |= ((/* implicit */signed char) ((unsigned short) arr_12 [i_3 - 1] [i_3 + 1]));
    }
    for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_14 [i_4 + 1]), (arr_14 [i_4 + 1])))) ? ((+(((long long int) (unsigned short)50553)))) : ((-(((((/* implicit */_Bool) 6204469333373754589LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)30184))) : (6204469333373754580LL)))))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 2; i_5 < 15; i_5 += 4) 
        {
            for (unsigned char i_6 = 3; i_6 < 14; i_6 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) (~((+(1034610549U)))));
                    var_24 = ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
    }
    var_25 = ((/* implicit */signed char) ((unsigned short) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))))));
}
