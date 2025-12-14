/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230560
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned char) var_6)), ((unsigned char)32)));
        arr_5 [i_0] = min(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)0)));
        /* LoopNest 3 */
        for (unsigned int i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 21; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_12 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) var_11);
                        var_14 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)3567)))))));
                        var_15 ^= ((/* implicit */unsigned int) ((short) var_2));
                        arr_13 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_2);
                        var_16 = ((/* implicit */unsigned char) var_1);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)61958))))) >= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((unsigned int) min(((unsigned short)3567), (((/* implicit */unsigned short) (signed char)-7)))))));
    }
    var_18 ^= ((/* implicit */int) min((((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) (~(((((/* implicit */int) var_6)) & (((/* implicit */int) var_5)))))))));
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((_Bool) 1414672958))))) : (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (signed char)29)))) != (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_5)))))))))))));
    var_20 = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) 4294967295U)), (((((/* implicit */_Bool) 848077432U)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))))))));
}
