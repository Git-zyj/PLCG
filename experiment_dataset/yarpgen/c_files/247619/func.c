/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247619
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) min((-149512857), (((/* implicit */int) var_11)))))))) & (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) / (274877906943LL)));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) arr_2 [i_0])))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_16)) >= (((/* implicit */int) arr_1 [i_0] [i_0])))))) : ((~(((/* implicit */int) min(((short)19829), (((/* implicit */short) arr_0 [i_0] [i_0]))))))))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) var_15))))) ? (((/* implicit */long long int) var_4)) : (((arr_1 [i_0] [i_0]) ? (274877906943LL) : (((/* implicit */long long int) var_0))))))) ? (min((((/* implicit */long long int) var_19)), (8054051468685669333LL))) : (((((((/* implicit */int) var_19)) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 316775548)) ? (((/* implicit */int) (_Bool)1)) : (-1)))) : (min((var_12), (((/* implicit */long long int) arr_1 [i_0] [i_0])))))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -274877906943LL)) ? (((/* implicit */int) (signed char)45)) : (1338978193)))) ? (-8054051468685669333LL) : (8054051468685669333LL)));
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (-1338978210))), (((/* implicit */int) var_18)))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_20 [i_1] [i_1] [i_1] [i_3] [i_4] [i_4] [i_1] = ((/* implicit */short) min(((-(2925210944140824734LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_3] [i_3] [i_4] [i_5])) ? (arr_7 [i_4] [i_3]) : (arr_19 [i_1] [i_2] [i_2] [i_4] [i_4] [i_5]))))));
                                var_25 = ((/* implicit */long long int) min((var_25), (((((/* implicit */_Bool) ((var_17) ? (var_5) : ((~(arr_10 [i_1] [i_3])))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) -274877906943LL)) ? (((/* implicit */int) (signed char)126)) : (arr_7 [i_1] [i_2])))), (((var_13) + (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))) : (var_9)))));
                                var_26 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (261977314) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_0)) ? (7402991833436438642LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((var_4) & (var_5)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_21 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 1363733172U))))))) : (((unsigned int) max((var_0), (((/* implicit */unsigned int) (_Bool)1)))))));
        arr_22 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (max((arr_6 [i_1] [i_1] [i_1]), (((/* implicit */int) (short)-18112)))) : (((/* implicit */int) (short)-7321)))))));
        arr_23 [i_1] [i_1] = ((/* implicit */long long int) ((((-1LL) / (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))) >= (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0)))))));
    }
}
