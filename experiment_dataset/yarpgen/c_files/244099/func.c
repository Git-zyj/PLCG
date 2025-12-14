/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244099
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
    var_18 = ((((/* implicit */_Bool) var_2)) ? (min((((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) (-(-528193000)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-749))));
        arr_4 [i_0 + 1] = ((/* implicit */unsigned char) max((((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_2 [i_0])) - (39607))))), ((~(min((((/* implicit */int) (_Bool)0)), (arr_0 [(_Bool)1])))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 3; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_6 [i_1] [i_2]))) ? (((/* implicit */int) arr_5 [i_1])) : ((~(((/* implicit */int) var_14))))));
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27675))) : (var_12))) < (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 2; i_4 < 22; i_4 += 4) /* same iter space */
    {
        arr_17 [i_4 + 1] [i_4] = ((/* implicit */long long int) var_14);
        var_20 += ((/* implicit */unsigned int) arr_1 [i_4]);
        var_21 |= ((/* implicit */signed char) ((int) var_12));
    }
}
