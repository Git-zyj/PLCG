/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43843
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
    var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1772245018)) ? ((~((~(var_10))))) : (((/* implicit */int) ((((/* implicit */int) min((var_4), (((/* implicit */unsigned char) var_0))))) == (((/* implicit */int) (unsigned short)23126)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) (+(((((/* implicit */int) (unsigned short)42426)) << (((((/* implicit */int) var_17)) - (20))))))))));
                    var_21 -= ((/* implicit */short) 603610409979825565LL);
                    arr_7 [i_0] |= ((/* implicit */long long int) var_8);
                    var_22 = ((/* implicit */unsigned char) max(((((~(((/* implicit */int) (unsigned short)23109)))) - (((/* implicit */int) ((unsigned short) arr_3 [i_2] [8]))))), (min(((~(((/* implicit */int) var_4)))), (((((/* implicit */_Bool) (unsigned short)42409)) ? (arr_3 [i_0] [i_0 - 1]) : (var_16)))))));
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)23126)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_8))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42426)))))) : (((((long long int) var_3)) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)29755)) < (((/* implicit */int) arr_2 [i_0 - 3] [i_2]))))))))));
                }
            } 
        } 
    } 
}
