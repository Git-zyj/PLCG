/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51609
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
    var_11 ^= ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 = ((((/* implicit */_Bool) (unsigned short)128)) ? (((/* implicit */int) (unsigned short)65407)) : (((/* implicit */int) (unsigned short)65407)));
                arr_5 [(_Bool)1] &= ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65407)) / (((/* implicit */int) (unsigned short)98))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) * (((/* implicit */int) arr_4 [i_1] [i_0]))))) ? (((((/* implicit */int) (unsigned short)142)) * (((/* implicit */int) (unsigned short)65407)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)98)) : (((/* implicit */int) arr_1 [i_1])))))) : ((~(((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) (unsigned short)128)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))), (((unsigned int) (unsigned short)65408))))) ? (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (var_1))), (((((/* implicit */_Bool) (unsigned short)113)) ? (((/* implicit */int) (unsigned short)128)) : (var_8))))) : (((/* implicit */int) max((min(((unsigned short)65416), ((unsigned short)65407))), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)128)) != (((/* implicit */int) (unsigned short)133)))))))))))));
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
}
