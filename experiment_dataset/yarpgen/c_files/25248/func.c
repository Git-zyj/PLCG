/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25248
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */int) max((-8848343614553561895LL), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)32754)), ((unsigned short)504)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32756))) : (var_6))) : (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)16633))))))));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                var_19 = ((/* implicit */unsigned int) var_8);
            }
        } 
    } 
    var_20 -= ((/* implicit */unsigned int) var_3);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6138955164114854152LL))))) : (((/* implicit */int) (unsigned short)65032))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) (short)-28233)) && (((/* implicit */_Bool) 18020979243492279840ULL)))))))) : (1068462041U)));
    var_22 = ((/* implicit */signed char) var_4);
    var_23 = (~(((/* implicit */int) var_17)));
}
