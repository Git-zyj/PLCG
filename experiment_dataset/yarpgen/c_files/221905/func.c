/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221905
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
    var_19 += ((/* implicit */_Bool) ((unsigned int) var_11));
    var_20 = ((/* implicit */short) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 4; i_2 < 22; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [i_2])))))));
                    var_22 &= ((/* implicit */unsigned short) (~(min((((/* implicit */long long int) arr_6 [i_0] [i_1 - 1] [i_2 - 1] [i_2])), (((((-7872240470203049498LL) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1))))))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) ((arr_0 [i_1] [i_1]) > (((/* implicit */int) arr_4 [i_0] [i_1] [(_Bool)1]))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_9)))))))) <= ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3224))) : (-7872240470203049498LL)))));
                    var_24 = ((/* implicit */int) arr_4 [i_2 - 4] [i_1] [i_2 - 3]);
                }
            } 
        } 
    } 
}
