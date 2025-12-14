/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49590
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
    var_13 *= ((/* implicit */short) var_5);
    var_14 = ((/* implicit */unsigned int) (unsigned char)255);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_15 = arr_0 [i_0];
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_5) - (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */int) ((signed char) var_2))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) ((_Bool) var_2)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) (unsigned char)7));
        arr_4 [i_0] = ((/* implicit */unsigned int) var_6);
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */signed char) (short)32767);
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (signed char)25))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (arr_12 [(unsigned short)10] [i_2] [3U] [3U]) : (arr_0 [i_1]))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (var_3)))))))) : (2736686562U)));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            arr_18 [i_1] [i_1] [i_1] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) : (var_9))) : (((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        }
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (unsigned char)255))) ? (((/* implicit */int) arr_7 [i_2])) : (((int) ((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                    }
                } 
            } 
        } 
        var_21 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_3)) ? (arr_15 [i_1] [10U] [(unsigned short)7] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    }
}
