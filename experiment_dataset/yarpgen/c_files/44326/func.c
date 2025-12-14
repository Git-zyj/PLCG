/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44326
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
    var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)231)) ? ((+(((/* implicit */int) (unsigned short)49388)))) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) 15448082014643434050ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_16)))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (var_6)))) || (((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) ((short) (unsigned short)127)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((unsigned char) max((arr_7 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_1] [i_2]))))) : (((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_1])))))));
                    arr_9 [i_2] [7ULL] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)178))));
                    arr_10 [i_2] [i_2] [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) max((((/* implicit */short) arr_5 [i_1] [(unsigned short)4])), (var_13)))))) && ((((!(((/* implicit */_Bool) arr_4 [i_0])))) && (((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2]))))));
                    var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2561269551166599106LL)) ? (3432118608896822306ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82)))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_0);
    var_25 = ((/* implicit */unsigned char) var_2);
}
