/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243250
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
    var_10 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (signed char)29)) != ((-(((/* implicit */int) (unsigned char)12)))))))));
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) var_4))));
    var_12 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_3)))))));
    var_13 = max((((/* implicit */unsigned long long int) (signed char)124)), (2819930913531036991ULL));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((var_3), (((/* implicit */unsigned short) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_4)))))))), (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62739)) && (((/* implicit */_Bool) 65535U))))) % (((/* implicit */int) arr_2 [i_0]))))));
                var_14 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (short)9171)) ? (14587842351960461496ULL) : (arr_4 [i_0] [i_1]))));
                var_15 = ((/* implicit */_Bool) arr_4 [i_0] [i_0]);
            }
        } 
    } 
}
