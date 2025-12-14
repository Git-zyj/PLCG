/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213234
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
    var_15 = ((/* implicit */signed char) var_4);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_16 = var_9;
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_17 = ((/* implicit */short) (-((+(((/* implicit */int) arr_3 [i_0] [i_0]))))));
            var_18 = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
            var_19 = ((/* implicit */unsigned long long int) (short)-27867);
        }
        var_20 = ((/* implicit */unsigned char) (short)27887);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2])) || (((/* implicit */_Bool) 879162024569192264ULL)))))));
        var_22 = ((/* implicit */short) min((((/* implicit */unsigned int) min((min(((unsigned short)31889), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) (short)-27867))))), (((unsigned int) arr_5 [i_2] [i_2]))));
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) var_10)) : (min(((~(((/* implicit */int) (unsigned char)85)))), (((/* implicit */int) (unsigned char)154))))));
    var_24 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)9957))))) : (((/* implicit */int) var_10)))));
}
