/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39174
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
    var_13 = ((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)4)), ((unsigned char)2)))), ((-(((((/* implicit */_Bool) 511U)) ? (((/* implicit */long long int) -411614518)) : (4294967295LL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) min((var_2), (10020815576436682734ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-53)))) : (var_1))));
                var_15 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((short)-6492), (((/* implicit */short) var_3))))), ((~(var_2)))))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((var_9) + (((/* implicit */unsigned long long int) arr_3 [i_0])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-6492)))))))) ? (((/* implicit */int) max((arr_2 [i_1]), (arr_2 [i_0])))) : (((((1134769042) & (((/* implicit */int) (_Bool)1)))) & ((~(var_7)))))));
            }
        } 
    } 
    var_16 ^= ((unsigned long long int) min((((/* implicit */long long int) var_12)), (((((/* implicit */_Bool) var_12)) ? (9006649498927104LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)111)))))));
    var_17 = ((/* implicit */int) (_Bool)1);
}
