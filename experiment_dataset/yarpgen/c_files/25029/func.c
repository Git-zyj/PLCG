/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25029
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
    var_10 = ((/* implicit */short) var_3);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            var_11 = ((/* implicit */short) (~((+(((/* implicit */int) arr_3 [i_0 - 1] [i_1 - 1] [i_0 + 3]))))));
            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (var_5) : (var_5)))) ? ((+(var_3))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_2 [i_1 - 2] [i_0 + 1] [i_0])), (632588309U))))));
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (+(((/* implicit */int) ((short) 3271523829262066696LL))))))));
                        arr_8 [i_0] [i_1 - 1] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (var_5))))));
                    }
                } 
            } 
        }
        for (int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) arr_9 [(unsigned char)8])), ((short)-10))))))), (((((/* implicit */_Bool) 7006474174737606412LL)) ? (-7006474174737606437LL) : (((/* implicit */long long int) var_2)))))))));
            var_15 = min((((/* implicit */long long int) (-(var_2)))), ((~(-7006474174737606462LL))));
            var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1] [i_0 + 2] [i_0 + 1])))))));
        }
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((var_8) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        var_18 = (~(var_4));
        arr_11 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)50)) ? (((((/* implicit */_Bool) 274877890560ULL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)11023)))) : (((/* implicit */int) (unsigned short)23706)))), (((/* implicit */int) (_Bool)0))));
    }
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
}
