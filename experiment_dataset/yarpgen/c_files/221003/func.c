/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221003
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
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(11920865381006327123ULL))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned char) (!(arr_0 [i_0 + 1])));
            var_15 = ((/* implicit */unsigned int) var_6);
            arr_6 [i_1] [i_1] = ((/* implicit */int) ((long long int) min((11920865381006327123ULL), (11920865381006327123ULL))));
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) var_4)))) ? (5568686717486751961LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned short)50343))))))))) ? (min((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 66846720LL))))))) : (((/* implicit */unsigned long long int) -66846720LL))));
        }
        for (unsigned char i_2 = 2; i_2 < 14; i_2 += 4) 
        {
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_0])))))));
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [(_Bool)1])) ? (16642998272LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65519)))))) ? (var_6) : (((/* implicit */unsigned long long int) ((unsigned int) -16642998273LL)))))) || (((/* implicit */_Bool) ((unsigned int) var_4)))));
        }
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_5 [i_0 + 2] [4LL]))))) ? ((~(((13233489620348656135ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99))))))) : (((/* implicit */unsigned long long int) ((arr_4 [17U] [i_0]) << (((min((var_7), (((/* implicit */unsigned long long int) arr_8 [i_0 + 2] [i_0])))) - (42938ULL))))))));
    }
    var_20 = ((/* implicit */int) max((var_7), (((/* implicit */unsigned long long int) (!(((_Bool) var_12)))))));
    var_21 = ((/* implicit */signed char) ((unsigned int) ((((int) var_0)) + (((/* implicit */int) ((_Bool) var_11))))));
    /* LoopSeq 1 */
    for (signed char i_3 = 3; i_3 < 19; i_3 += 4) 
    {
        var_22 = ((/* implicit */_Bool) ((long long int) 5568686717486751961LL));
        var_23 = ((/* implicit */unsigned int) (~(((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)50343))) > (-66846720LL)))) & (((/* implicit */int) ((((/* implicit */int) arr_10 [i_3])) == (((/* implicit */int) arr_10 [i_3])))))))));
        var_24 = ((/* implicit */unsigned int) (!(arr_10 [i_3])));
        arr_11 [i_3] [i_3] = ((/* implicit */long long int) ((unsigned long long int) ((9072855018789281486LL) == (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -66846739LL)))))));
    }
}
