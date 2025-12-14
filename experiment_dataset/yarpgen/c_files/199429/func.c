/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199429
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) var_13)))))) ? (((/* implicit */int) ((unsigned char) max((4294967279U), (((/* implicit */unsigned int) -1402958280)))))) : (((/* implicit */int) var_13))));
    var_16 = var_11;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) || (((/* implicit */_Bool) (~(-1426647892))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (1426647904) : (((/* implicit */int) var_7))))) ? (1073741823) : (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (unsigned char)241)))))))));
            var_18 = ((/* implicit */unsigned short) var_6);
            var_19 = ((/* implicit */unsigned int) var_11);
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */int) var_11)) << ((((~(((((/* implicit */_Bool) var_3)) ? (var_10) : (var_3))))) - (485512794U))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (unsigned int i_4 = 1; i_4 < 21; i_4 += 1) 
                {
                    for (int i_5 = 2; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_21 *= ((/* implicit */short) arr_2 [i_0]);
                            var_22 = ((/* implicit */unsigned char) ((short) (~(-1073741821))));
                            arr_14 [i_0] [i_2] [(short)13] [i_3] [i_5] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_10 [i_0] [i_4 - 1] [i_5 - 2])) - (48518))))));
                        }
                    } 
                } 
            } 
            arr_15 [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_9 [(short)2] [i_0] [i_0])) / ((~(536739840)))));
            var_23 *= ((/* implicit */short) var_1);
            var_24 = ((/* implicit */unsigned short) min((-1877671092), (((/* implicit */int) ((((/* implicit */int) (short)-5762)) > (((/* implicit */int) (unsigned short)65535)))))));
            var_25 = ((/* implicit */_Bool) var_7);
        }
        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            arr_18 [(unsigned short)5] [i_6] = ((/* implicit */unsigned long long int) (~(var_5)));
            var_26 = ((/* implicit */short) ((signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -536739864)) ? (((/* implicit */int) (unsigned short)64083)) : (((/* implicit */int) (signed char)-122))))), (var_3))));
            arr_19 [i_0] [i_6] [i_0] = ((/* implicit */int) var_11);
        }
        var_27 = ((/* implicit */unsigned long long int) (~(((arr_3 [i_0]) >> (((arr_3 [i_0]) - (3429698555U)))))));
    }
}
