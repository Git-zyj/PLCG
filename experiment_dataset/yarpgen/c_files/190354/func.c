/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190354
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
    var_15 = ((/* implicit */int) var_8);
    var_16 = ((/* implicit */int) (short)-14561);
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_4))));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((((/* implicit */long long int) max((var_1), (((/* implicit */short) var_9))))), (((((/* implicit */_Bool) (short)-14561)) ? (((/* implicit */long long int) ((((/* implicit */int) (short)14560)) << (((900926392) - (900926382)))))) : (((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)-9657))))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    var_19 &= ((/* implicit */int) (((+(((arr_1 [i_1]) ? (3359736307U) : (var_5))))) >= (((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)1)))))))));
                    var_20 = ((/* implicit */int) var_14);
                    arr_9 [i_0] [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) (_Bool)1)), (arr_8 [i_0] [i_0] [i_0 + 1])))));
                }
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-14560)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1810219137050956323ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-12744)) ^ (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 4294967273U)) ? (16636524936658595288ULL) : (((/* implicit */unsigned long long int) 4134111908372711230LL)))))))));
                var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_1]), ((_Bool)1))))) & (9223372036854775807LL)))) ? (((/* implicit */int) (short)14561)) : (((/* implicit */int) ((((/* implicit */_Bool) 4016326733U)) || (((/* implicit */_Bool) 1006632960)))))));
            }
        } 
    } 
}
