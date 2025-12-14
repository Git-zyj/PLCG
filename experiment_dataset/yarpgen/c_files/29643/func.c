/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29643
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
    var_10 = var_0;
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_11 -= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)69))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16128))) : (4294967295U)));
            arr_9 [i_0] = ((/* implicit */short) (signed char)109);
            var_12 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))));
            var_13 = ((/* implicit */short) (~((~(((/* implicit */int) (signed char)-56))))));
            arr_10 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (((2164787433U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23)))))));
        }
        var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) var_7))))))));
        var_15 = ((/* implicit */short) 2130179869U);
    }
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) min(((+(max((16U), (((/* implicit */unsigned int) (_Bool)1)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((576390383559245824ULL), (940832697066087674ULL)))) ? (((/* implicit */int) max((((/* implicit */short) var_5)), (var_1)))) : (((/* implicit */int) var_8))))))))));
    var_17 = ((/* implicit */_Bool) var_5);
}
