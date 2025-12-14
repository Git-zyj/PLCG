/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3879
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
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((max((((/* implicit */unsigned char) var_5)), (var_6))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) && (var_5))))))) : (((/* implicit */int) ((_Bool) ((short) (_Bool)1))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) && (((/* implicit */_Bool) var_13))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((short) ((long long int) 12008190689070075570ULL)));
                    arr_6 [7ULL] [0LL] = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) ((arr_3 [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))))));
                    var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_2 - 1] [i_1] [i_2]))) ? (((/* implicit */int) ((arr_3 [i_2 - 1] [i_1] [i_2]) && (arr_3 [i_2 - 1] [i_2 - 1] [i_2])))) : (((/* implicit */int) (!(arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) var_1))))))))));
}
