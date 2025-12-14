/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51354
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
    var_14 ^= ((/* implicit */unsigned char) (_Bool)1);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((2757527961U), (((/* implicit */unsigned int) min(((-2147483647 - 1)), (((/* implicit */int) var_6)))))))) ? (-1789947998) : (((((/* implicit */_Bool) -2147483622)) ? (((((/* implicit */_Bool) -1514337132)) ? (2147483620) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)68))))));
    var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) % (((int) arr_3 [i_0]))));
                arr_5 [0ULL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? ((+(83380552948521742ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) min((((((/* implicit */int) (unsigned short)26591)) / (2147483606))), (((-228763827) / (((/* implicit */int) (signed char)-80))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? ((~(var_9))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)89)))))));
}
