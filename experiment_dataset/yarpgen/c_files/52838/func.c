/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52838
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
    var_15 = ((/* implicit */unsigned short) ((4294967295U) * (3470056809U)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_16 += 3470056809U;
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((3470056809U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)46))))) ? ((~(30720U))) : (((/* implicit */unsigned int) 1708401432)))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */int) (short)13217)) : ((-(((/* implicit */int) (signed char)-46))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) 1210086251)), (-2021564360230115677LL)))) ? (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */unsigned long long int) 0U)) : (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46))) - (var_3)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3897164753U)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) -838915708)) / (824910478U)))) : (min((-3LL), (((/* implicit */long long int) 2967116309U)))))))));
                    var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned char)218), (((/* implicit */unsigned char) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57820))) >= ((~(32767U))))))) : (((((/* implicit */_Bool) min((0), (((/* implicit */int) (unsigned short)7719))))) ? (((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */long long int) var_3)) : (2021564360230115665LL))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))) + (2021564360230115677LL)))))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3807012819U)) ? (((/* implicit */int) (unsigned short)58036)) : (((/* implicit */int) (unsigned short)31)))))));
                }
                arr_8 [i_0] [i_0] = ((/* implicit */long long int) (short)8191);
                var_21 |= ((/* implicit */unsigned short) 3U);
            }
        } 
    } 
}
