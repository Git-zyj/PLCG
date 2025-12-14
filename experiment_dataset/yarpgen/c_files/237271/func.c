/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237271
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
    var_15 = ((/* implicit */unsigned long long int) (unsigned char)204);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 2542810277U)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) -1805124390905915285LL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)50884)))))) % (min((((/* implicit */int) arr_2 [i_1 + 3] [9U])), ((~(arr_5 [i_0])))))));
                var_17 = ((((/* implicit */long long int) min((((/* implicit */int) var_6)), (((((/* implicit */int) arr_2 [i_0] [i_0])) << (((1752157011U) - (1752157003U)))))))) / (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_0 [i_0]) : (((/* implicit */int) (short)26))))), (4602733299242445356LL))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? ((((_Bool)1) ? (2542810277U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)214))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (var_10))))))));
}
