/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238708
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
    var_11 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
    var_12 = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8128LL)) ? (-106176972) : (106176942)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)36)))) : (((/* implicit */int) (unsigned short)9210)))) : (((/* implicit */int) var_4)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = max((-106176968), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : ((-(-106176969))))));
                var_13 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_1]) % (((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (var_2))))) : (arr_0 [i_0])))) <= (var_2)));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (~(-1)));
    var_15 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (var_2))));
}
