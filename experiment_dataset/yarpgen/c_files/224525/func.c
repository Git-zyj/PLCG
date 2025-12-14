/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224525
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) << ((((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)24861)) : (((/* implicit */int) var_9)))))) + (24870)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) var_12)) * (((((/* implicit */_Bool) (unsigned short)41502)) ? (((/* implicit */int) (short)24397)) : (1519813159))))))));
                    var_18 *= ((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)14336)) : (arr_0 [i_0] [i_0]))) != (((/* implicit */int) var_9)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_3 = 2; i_3 < 15; i_3 += 3) 
        {
            for (unsigned short i_4 = 4; i_4 < 18; i_4 += 3) 
            {
                for (signed char i_5 = 1; i_5 < 18; i_5 += 2) 
                {
                    {
                        arr_15 [i_0] = ((/* implicit */_Bool) ((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_4] [i_5] = ((/* implicit */short) 13199950929829890887ULL);
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned long long int) ((var_5) & (((/* implicit */int) var_13))));
}
