/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26047
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] [8LL] = ((/* implicit */_Bool) ((max((((/* implicit */int) (!(arr_0 [i_0])))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_9)))))) >> (((unsigned int) var_9))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))) < (9223372036854775807LL)))))))));
                        var_13 = (+(((/* implicit */int) var_11)));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 13620626220651310583ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((245760) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (1183366612U)))))))) : (3600605292U)));
        arr_14 [(signed char)9] = ((/* implicit */unsigned int) ((signed char) 3721633428U));
        arr_15 [i_4] = ((/* implicit */signed char) 9223372036854775807LL);
    }
    var_15 = ((/* implicit */_Bool) ((unsigned short) var_7));
    var_16 = ((/* implicit */unsigned char) var_1);
    var_17 = (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)60))) == (var_7)))) >> (((((((/* implicit */_Bool) 796137772)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (4806683361180507249LL))) - (6532LL)))))));
}
