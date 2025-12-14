/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52314
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
    var_17 = ((/* implicit */unsigned char) var_9);
    var_18 = (((-(var_15))) / (((/* implicit */long long int) (-(((/* implicit */int) var_12))))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2160050829U)) ? (((/* implicit */int) (unsigned short)43561)) : (((/* implicit */int) (unsigned short)21974))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    var_20 ^= ((/* implicit */unsigned short) arr_0 [i_2 - 2]);
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)228)) ? ((~(var_10))) : (((((/* implicit */_Bool) arr_1 [i_2 - 2] [12ULL])) ? (-6456678624993061472LL) : (((/* implicit */long long int) 1126809199))))));
                    var_22 = ((/* implicit */unsigned int) 6013175618914724340LL);
                    var_23 = ((/* implicit */int) ((unsigned long long int) arr_1 [i_0] [i_2 - 2]));
                }
                arr_7 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4788554869577001909LL)) ? (var_13) : (13897253241738130084ULL)))) ? ((~(var_10))) : (6884866615343554537LL)))));
                arr_8 [i_0] [i_0] = ((/* implicit */long long int) arr_5 [13U] [(short)1] [i_1] [i_1]);
                arr_9 [i_0] = ((/* implicit */unsigned short) var_14);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (~(var_1)));
}
