/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4659
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [(short)14] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */int) var_3)) - (((/* implicit */int) var_5)))) < (((1394968034) + (((/* implicit */int) var_3))))))) + (((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_2] [i_3] [i_0])) && ((_Bool)0))) || (((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_0)))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_4 - 4] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) -1394968035)) && (((/* implicit */_Bool) 18446744073709551615ULL))))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1])) || (((/* implicit */_Bool) var_6)))))))) != (((/* implicit */int) ((((/* implicit */int) ((arr_2 [i_0] [i_0]) > (1394968034)))) > (((((/* implicit */int) arr_6 [i_0 + 1])) + (((/* implicit */int) arr_4 [(short)16] [i_1] [18U])))))))));
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))))) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (var_9))))))) || (((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) * (var_7))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) / (1394968034))))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((-1394968035) < (((/* implicit */int) var_1)))))) / (((((/* implicit */unsigned int) 1394968053)) % (647646004U))))) < (((/* implicit */unsigned int) ((/* implicit */int) (((((-2147483647 - 1)) % (-1394968035))) < (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) (unsigned char)96))))))))))))));
}
