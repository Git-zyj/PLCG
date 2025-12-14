/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202037
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
    var_17 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)43318)) > (((/* implicit */int) (signed char)-103)))))) == ((~(var_0))))) || (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 3340183352U)) ? (((/* implicit */int) (signed char)81)) : (-984385025)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) var_9);
        arr_3 [i_0] = ((/* implicit */short) arr_0 [i_0 - 1] [i_0]);
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_19 &= ((/* implicit */unsigned char) (((~(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [(unsigned short)1])) || (((/* implicit */_Bool) arr_4 [i_1] [i_1]))))))) == (((/* implicit */int) var_8))));
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            arr_11 [i_1] [(unsigned short)4] = ((/* implicit */long long int) -984385025);
            var_20 = ((/* implicit */unsigned short) min((var_20), (var_12)));
            var_21 = ((/* implicit */unsigned char) 954783961U);
            arr_12 [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) arr_5 [i_2 - 1] [i_2 + 1])))));
        }
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)1] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) ? (min((-984385025), (arr_5 [i_1] [13]))) : ((+(((/* implicit */int) var_11))))));
            var_23 = ((/* implicit */unsigned short) (unsigned char)186);
        }
    }
}
