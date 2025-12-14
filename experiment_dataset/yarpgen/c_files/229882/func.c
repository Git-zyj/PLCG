/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229882
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((max((((var_6) ? (var_10) : (var_10))), (max((((/* implicit */int) (unsigned char)249)), ((-2147483647 - 1)))))) < (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) (unsigned char)230))))))));
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((int) (unsigned char)135));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_9))) ? (153859719) : ((((_Bool)1) ? (((int) var_7)) : (((/* implicit */int) min(((_Bool)1), (var_6))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) (+((~(((/* implicit */int) ((_Bool) var_14)))))));
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    {
                        var_18 = ((((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) var_5)) : (var_0))) >= (((var_7) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (unsigned char)252)))));
                        arr_14 [i_4] [i_2] [i_4] = (!(((/* implicit */_Bool) (short)1818)));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */_Bool) ((((((/* implicit */int) var_1)) <= (((/* implicit */int) var_5)))) ? (((/* implicit */int) var_5)) : (((((var_8) + (2147483647))) >> (((/* implicit */int) var_4))))));
        var_20 = ((/* implicit */short) (+(((var_8) - (((/* implicit */int) (unsigned char)234))))));
    }
}
