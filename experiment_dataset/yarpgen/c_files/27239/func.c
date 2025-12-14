/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27239
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
    var_10 = ((/* implicit */unsigned int) (((((+(((/* implicit */int) var_1)))) > (((((/* implicit */int) (unsigned short)55547)) - (((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_2)) : (((int) min((var_3), (((/* implicit */unsigned short) var_2)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_11 = ((short) ((((((/* implicit */_Bool) (unsigned short)14495)) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) max(((unsigned short)40856), ((unsigned short)51015)))) : (((/* implicit */int) ((unsigned short) -311737264)))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */_Bool) var_5);
            arr_6 [i_0] [i_1] [i_1] = (unsigned short)14495;
            var_13 = ((/* implicit */long long int) (+(min((min((((/* implicit */int) var_5)), (arr_5 [i_0] [i_0] [i_1]))), (((/* implicit */int) min((arr_2 [i_0] [(unsigned short)9]), (arr_1 [i_0] [i_0]))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] [i_2] = (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14495))) - (2810431787U))));
            var_14 -= ((/* implicit */unsigned short) var_8);
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) arr_2 [i_2] [i_0]))), (arr_0 [i_2])))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) : (var_6)));
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (unsigned short)51024))));
            var_17 = max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_0]))))), ((unsigned short)54578));
        }
        arr_10 [i_0] = ((/* implicit */_Bool) ((unsigned int) ((((int) (unsigned short)14495)) / (((/* implicit */int) var_5)))));
    }
    var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)51018)) ? (((((/* implicit */int) (unsigned short)51015)) + (((/* implicit */int) (unsigned short)51030)))) : (((/* implicit */int) (short)-8941))))));
}
