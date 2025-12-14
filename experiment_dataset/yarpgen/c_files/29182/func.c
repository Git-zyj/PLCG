/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29182
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
    var_13 |= ((/* implicit */_Bool) min((((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) var_7)))) % ((+(((/* implicit */int) var_2)))))), (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_12))) ? ((+(((/* implicit */int) (signed char)34)))) : ((+(((((/* implicit */int) var_6)) % (((/* implicit */int) (short)255))))))));
        var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) -4655232757620379713LL))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-255)) ^ ((-(var_4)))));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_11)), (var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (var_9)))) : ((((~(((/* implicit */int) var_6)))) - (((/* implicit */int) var_0)))))))));
                /* LoopNest 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            {
                                arr_18 [i_1] [i_1 + 1] [i_1] [i_1] [(unsigned char)19] [i_1 - 1] [i_1] = ((/* implicit */unsigned int) ((-4857980309461925940LL) ^ (((/* implicit */long long int) ((int) 5092186934049112171ULL)))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 18349688458323433765ULL)))))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) ^ (((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))));
                                var_18 ^= ((/* implicit */unsigned long long int) ((var_10) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 *= ((/* implicit */short) (+(min((min((((/* implicit */int) var_12)), (2147483647))), ((-(var_3)))))));
}
