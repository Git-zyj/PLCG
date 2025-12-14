/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190071
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
    var_11 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_9) >= (((13489511335317766225ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59190))))))))));
    var_12 = ((/* implicit */_Bool) (+(var_9)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_13 = ((/* implicit */short) arr_0 [i_0] [i_1]);
            var_14 = ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) + ((~(((/* implicit */int) arr_1 [i_0]))))));
            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) arr_2 [8ULL] [3U])) & (((/* implicit */int) arr_2 [i_1] [i_1])))) : (((1659843885) % (((/* implicit */int) (unsigned short)10524)))))))));
            arr_4 [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1]))))) : (1129422998U)));
        }
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_1 [i_0]))))), (arr_3 [i_0])));
            var_17 = ((/* implicit */unsigned int) var_8);
        }
    }
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_6))))))));
}
