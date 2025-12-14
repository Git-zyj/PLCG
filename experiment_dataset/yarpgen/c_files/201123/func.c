/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201123
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */int) (short)-21917)) : (((/* implicit */int) (short)-10053)))) <= (((((/* implicit */int) arr_4 [i_0] [i_2])) & (((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 2] [i_1 - 3]))))));
                    var_20 ^= ((/* implicit */unsigned char) (short)26402);
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((-4035552638055683819LL), (((/* implicit */long long int) (unsigned short)53753))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -8922915728388414526LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (unsigned char)30)))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)30)), ((short)-1)))))) : (((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 - 2])) ? (arr_6 [i_1 - 1] [i_1 - 1]) : (arr_6 [i_1 + 2] [i_1 + 2])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */int) min(((signed char)-7), ((signed char)-13)))) : (((/* implicit */int) (unsigned char)138))))))))));
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)22185)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)11783)))), (((((/* implicit */int) var_5)) + (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))) + ((+(var_16))))) : (((/* implicit */long long int) ((((/* implicit */int) min((var_15), (((/* implicit */short) var_10))))) - (((/* implicit */int) var_8))))))))));
    var_23 = ((/* implicit */unsigned char) var_2);
    var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)51193)), (3103661984729901766ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)13682))) : (var_2))) * (((/* implicit */long long int) ((/* implicit */int) var_17))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) 4941250945213367401ULL)) ? (((/* implicit */int) (short)-7999)) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)127))))))));
}
