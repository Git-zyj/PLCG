/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221013
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) -1001095259);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */short) var_10);
                                arr_16 [i_1] [i_4 - 1] = ((/* implicit */short) ((unsigned int) min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                                var_16 = 1001095258;
                            }
                        } 
                    } 
                    var_17 = var_7;
                    var_18 = 1001095249;
                }
            } 
        } 
        var_19 = ((/* implicit */short) arr_3 [i_0]);
        arr_17 [i_0] = ((/* implicit */short) ((((/* implicit */int) (signed char)-108)) + (max(((+(1001095247))), (((/* implicit */int) arr_6 [i_0] [i_0] [(_Bool)1]))))));
        var_20 *= ((short) ((int) min((var_12), (1001095258))));
    }
    var_21 += ((/* implicit */_Bool) (((((+(-1001095258))) / (((/* implicit */int) ((short) var_4))))) << (((max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (var_12))), (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (short)-1))))))) - (21537)))));
    var_22 = ((/* implicit */int) min((var_14), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (var_10)))))))));
}
