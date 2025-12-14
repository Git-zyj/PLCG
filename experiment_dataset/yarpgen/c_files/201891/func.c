/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201891
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -45741645665796565LL)) ? (min((arr_2 [i_0]), (((/* implicit */unsigned int) -1479901907)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_12) / (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) || (((/* implicit */_Bool) arr_3 [i_0] [i_1]))))) : ((~(1479901907))))))));
                var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (short)-24171)))) - (-1479901908)));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)75)) + (((/* implicit */int) (_Bool)1))));
                var_16 = ((/* implicit */unsigned int) var_7);
                arr_6 [i_0] [i_0] [10] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (~(arr_1 [i_0])))), (2345791841U)));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_4);
    var_18 = (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) max((var_12), (711457904)))) : (min((536862720U), (((/* implicit */unsigned int) -1855942287)))))));
    var_19 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-66)) + (2147483647))) >> (((6782407461547412363LL) - (6782407461547412357LL))))))))));
}
