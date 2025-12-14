/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215245
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
    var_17 = ((/* implicit */unsigned short) 3464704454U);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4951914101507664938ULL)) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (arr_4 [i_2]))))) : (((/* implicit */int) (unsigned short)34562))));
                    var_18 = ((/* implicit */long long int) min((((/* implicit */int) ((short) 3982206492662155174ULL))), (((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_2])) : (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 8ULL)))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) min((((/* implicit */int) ((-6172720167011841417LL) == (6172720167011841421LL)))), ((-(((((/* implicit */_Bool) var_11)) ? (-1692605876) : (((/* implicit */int) (unsigned char)232))))))));
}
