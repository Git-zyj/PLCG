/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50076
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
    var_15 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) (short)-6010)) ? (8305238697943696465ULL) : (((/* implicit */unsigned long long int) 3186182853678695906LL)));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)40643)))) & (((arr_2 [i_0] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
        arr_4 [i_0] = max((((/* implicit */int) ((unsigned char) (unsigned short)53208))), (((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (unsigned short)37913)) : (((/* implicit */int) (_Bool)1)))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_17 = ((/* implicit */short) ((signed char) var_6));
            arr_13 [i_1] = ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_1 [i_1] [i_2]))))) ? (arr_5 [i_1 - 1]) : (arr_8 [i_2]))) == (((arr_5 [i_1 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))))));
            var_18 ^= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)32768)) : (1876598249)));
        }
        var_19 = ((/* implicit */short) 1876598249);
    }
    var_20 ^= ((((/* implicit */_Bool) var_8)) ? (min((var_10), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) var_9)));
    var_21 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) (short)7057)) ? (1255351510426127200ULL) : (((/* implicit */unsigned long long int) 262143U)))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)(-32767 - 1))) | (((/* implicit */int) (signed char)2))))))), (((/* implicit */unsigned long long int) (unsigned char)246))));
    var_22 = ((/* implicit */unsigned short) ((((5065645794908166441LL) & (((/* implicit */long long int) 67106816U)))) | (min((((/* implicit */long long int) (+(var_1)))), (var_5)))));
}
