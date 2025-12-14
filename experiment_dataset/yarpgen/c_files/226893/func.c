/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226893
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
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) -2147483645)), (18158513697557839872ULL)));
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-76)), ((unsigned char)91)));
    var_14 *= ((((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned char) var_9))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_2)))) != (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (+(569949948))))));
                arr_6 [i_1] [17U] [7U] = ((/* implicit */long long int) min((max((((/* implicit */unsigned int) (_Bool)1)), (1386621724U))), (((/* implicit */unsigned int) max(((unsigned char)2), (((/* implicit */unsigned char) (signed char)57)))))));
                arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (var_6) : (arr_1 [i_0] [i_1])))) ? (((/* implicit */int) var_4)) : (arr_0 [i_1])));
                arr_8 [i_0] [i_1] |= ((((long long int) ((short) (signed char)-91))) % (((/* implicit */long long int) max((((/* implicit */int) (signed char)79)), (((int) var_6))))));
            }
        } 
    } 
    var_16 &= ((/* implicit */int) ((((int) 2013265920U)) < (((/* implicit */int) ((short) var_8)))));
}
