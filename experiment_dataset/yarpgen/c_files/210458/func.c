/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210458
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) var_3)), (max((((/* implicit */long long int) 2510246259U)), (144115179485921280LL)))))));
        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 16711680U)), (12011465259551341263ULL)))) && (((/* implicit */_Bool) (unsigned short)52416))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))))), (min((10310774338033747526ULL), (((/* implicit */unsigned long long int) 4294967168U)))))) & (((/* implicit */unsigned long long int) min((((4294967164U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((arr_6 [i_0]) ^ (((/* implicit */int) arr_3 [i_0]))))))))));
                    var_18 = ((/* implicit */long long int) (-(((((/* implicit */int) var_7)) + (arr_6 [i_0])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_2] |= ((/* implicit */long long int) (((~(((/* implicit */int) (short)-10441)))) * ((-(((/* implicit */int) (unsigned char)254))))));
                        var_19 = ((/* implicit */int) ((var_10) == (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                    }
                    var_20 &= ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (short)1008)), (arr_4 [i_2]))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        arr_11 [0ULL] &= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) (short)-1833)) || (((/* implicit */_Bool) arr_1 [i_0]))))), (((((/* implicit */int) ((4294967168U) <= (arr_9 [i_0] [12LL] [i_0] [i_0] [i_0] [i_0])))) >> (((((/* implicit */int) max((arr_0 [15LL] [i_0]), (((/* implicit */unsigned char) (_Bool)1))))) - (149)))))));
    }
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((min((max((((/* implicit */long long int) var_6)), (var_10))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))) >> (((min((min((((/* implicit */unsigned long long int) var_12)), (var_14))), (((/* implicit */unsigned long long int) var_1)))) - (31233ULL))))))));
    var_22 = ((/* implicit */_Bool) var_8);
    var_23 |= ((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)233)));
}
