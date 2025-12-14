/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52144
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
    var_14 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)10745))) + (389596284414468065ULL)))) ? ((-(5155244286129887192ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (483579257834192997LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
    var_15 += ((/* implicit */unsigned short) ((_Bool) var_11));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)-68))))))) ? (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) 1056339643505437542LL))))), (var_11)))) : ((-(var_0)))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_3 [i_0] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))))) ? ((~(arr_3 [i_1] [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((long long int) (short)-32757)))));
                arr_6 [i_0] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (_Bool)1)), (98355960310781852ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))));
                arr_7 [i_1 + 1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)127))))) % (min((((/* implicit */long long int) (unsigned short)12923)), (-483579257834193008LL))))));
                var_17 |= ((unsigned short) (-(((/* implicit */int) (unsigned short)65535))));
            }
        } 
    } 
}
