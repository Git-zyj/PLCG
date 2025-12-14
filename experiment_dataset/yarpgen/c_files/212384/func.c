/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212384
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
    var_17 = ((/* implicit */unsigned short) ((signed char) var_0));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (+(((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) >= (((/* implicit */int) ((signed char) var_7)))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) -637851400286992700LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) : (-8752093088590744110LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_1 + 3])))))));
                arr_8 [i_0] [i_0] [12ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_2))))))));
                arr_9 [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */int) arr_4 [i_0] [9ULL])) % (((/* implicit */int) arr_4 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)63))))) || (((/* implicit */_Bool) (~(-637851400286992719LL)))))))));
                arr_10 [(unsigned short)10] = ((/* implicit */short) (-(((/* implicit */int) ((arr_2 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_0] [i_0])))))))));
            }
        } 
    } 
}
