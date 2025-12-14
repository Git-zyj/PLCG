/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54387
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
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)27993)) && (((/* implicit */_Bool) var_0))))), (max((((/* implicit */unsigned long long int) var_1)), (0ULL))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) var_4)) : (8964886618185832740LL)))) || ((!(((/* implicit */_Bool) var_3)))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((arr_9 [7ULL] [i_2] [i_1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2])))));
                        var_23 = ((/* implicit */signed char) (-((+(((arr_5 [(unsigned short)6] [i_0]) >> (((((/* implicit */int) (short)-534)) + (593)))))))));
                    }
                    var_24 = ((/* implicit */unsigned char) (-(982326129)));
                    var_25 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) 7892140466099550010LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) 629631858))))))));
                    var_26 = ((/* implicit */short) max((max((max((((/* implicit */int) var_13)), (629631858))), ((+(-629631859))))), (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_12 [i_0])) - (220)))))));
                }
            } 
        } 
    } 
}
