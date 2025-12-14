/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31680
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) min((((/* implicit */short) arr_1 [i_0] [i_0])), ((short)-26861)))))) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) (short)26860))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) (short)26840)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) <= ((~(((/* implicit */int) (short)-26844))))))) & (((((/* implicit */_Bool) (short)13)) ? ((-(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)26860)))))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((short)26837), (((/* implicit */short) min(((signed char)5), (arr_0 [i_0]))))))) ? ((~(((/* implicit */int) ((((/* implicit */int) (signed char)-5)) == (((/* implicit */int) (short)26426))))))) : (((/* implicit */int) ((((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */short) arr_0 [(signed char)5]))))) > (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_11 = ((/* implicit */short) min((((min((((/* implicit */long long int) arr_2 [i_0])), (-6102002894171002563LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)27))))))), (((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) arr_1 [i_0] [i_0])))) && (((/* implicit */_Bool) arr_2 [0U])))))));
    }
    var_12 = ((/* implicit */_Bool) min((max((var_1), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) (unsigned char)6))));
    var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) -598755087)) / (var_9)))))))) / (((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (var_9))) ^ (1025327241U)))));
}
