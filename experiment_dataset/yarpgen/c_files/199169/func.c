/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199169
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
    var_15 = ((/* implicit */unsigned int) var_11);
    var_16 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((short) (_Bool)1))));
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) (~(min((arr_4 [5]), (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_1] [i_1])))))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) arr_1 [i_1]);
    }
    for (int i_2 = 2; i_2 < 17; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)250))));
        arr_10 [i_2] [i_2] = ((/* implicit */_Bool) max(((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) == (arr_1 [i_2])))))), (((/* implicit */int) ((unsigned char) (unsigned char)250)))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) (((-((-(((/* implicit */int) arr_11 [i_2] [i_2] [i_3])))))) >> (((((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_2 - 2] [i_2 - 2])), ((unsigned char)196)))) - (181)))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((18446744073709551615ULL) << (((3738972812U) / (((/* implicit */unsigned int) ((arr_12 [i_2 + 1] [i_2]) << (((arr_1 [i_2]) - (14485149173878170101ULL)))))))))))));
        }
    }
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */_Bool) min((((((/* implicit */int) min((arr_16 [i_4]), (((/* implicit */short) (unsigned char)185))))) << ((+(((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) (short)21358))))));
        arr_18 [(_Bool)1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_13 [i_4]))))) ? (((((/* implicit */int) arr_13 [i_4])) & (((/* implicit */int) arr_13 [i_4])))) : ((+(arr_15 [i_4])))));
        var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_13 [i_4])))), (((/* implicit */int) ((signed char) arr_14 [i_4])))))), (((((_Bool) (unsigned char)190)) ? ((+(15158147008976153480ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 144719491U))))))));
    }
}
