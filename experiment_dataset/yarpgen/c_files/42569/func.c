/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42569
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
    for (short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_11 |= ((/* implicit */unsigned short) (!(((var_10) >= (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_11 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 827907827)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (_Bool)1)))))) : (0U)));
                        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_7))));
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-15859)) && (((/* implicit */_Bool) (unsigned short)64434))));
                    }
                } 
            } 
        } 
        var_14 ^= ((/* implicit */unsigned short) ((int) var_3));
    }
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        var_15 = ((/* implicit */_Bool) min((max((4022398161U), (((/* implicit */unsigned int) 550569017)))), (((/* implicit */unsigned int) ((short) max((((/* implicit */short) var_9)), (var_2)))))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_6), (((/* implicit */short) (_Bool)1))))) << (((((arr_7 [i_4] [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-12830))))) - (2090666044U)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)15850)) < (((/* implicit */int) (_Bool)0)))))) != (1969992961U)))) : (((min(((_Bool)0), (arr_14 [i_4]))) ? (((/* implicit */int) (short)-21894)) : (((/* implicit */int) ((unsigned char) (signed char)127)))))));
        var_17 = arr_1 [i_4];
    }
    var_18 = ((/* implicit */short) (signed char)60);
    var_19 = ((/* implicit */unsigned int) var_0);
    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
}
