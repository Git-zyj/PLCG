/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231054
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
    var_10 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65531)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)65531)))))), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))) == (((((/* implicit */int) var_2)) >> (((/* implicit */int) (unsigned short)4)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (unsigned short)65529));
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)9619))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (unsigned char)185))))) : (((/* implicit */int) var_1))));
                        var_11 *= ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
                    }
                    var_12 = ((/* implicit */_Bool) ((unsigned char) ((unsigned int) var_4)));
                }
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_13 -= ((/* implicit */_Bool) max((((((_Bool) var_8)) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_7))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)22047)))))));
        var_14 = ((/* implicit */signed char) (((+(((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max((min((((/* implicit */unsigned short) var_4)), ((unsigned short)65531))), (((/* implicit */unsigned short) ((_Bool) 5973940751914057815LL))))))));
        var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)17125)) ? (((/* implicit */int) (unsigned char)97)) : (((int) 66846720LL)))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_6)))) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)87)) || (((/* implicit */_Bool) (signed char)-16)))))))));
        arr_16 [i_4] = ((/* implicit */signed char) (+(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (var_6)))));
    }
}
