/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201333
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-(max((var_13), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_7))))) < (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (var_5))))))) * (var_16)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_22 = ((/* implicit */short) arr_1 [i_0]);
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) var_7)), ((unsigned char)252)))) * ((-(((/* implicit */int) arr_1 [i_1]))))))) ? (((/* implicit */int) min((arr_10 [i_2] [i_3] [i_2] [i_1] [i_0]), (arr_6 [i_2])))) : ((((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_18)))) : (((/* implicit */int) var_12))))));
                            var_24 += ((/* implicit */signed char) max((((/* implicit */short) ((signed char) max((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0 + 1])), (var_16))))), (((short) arr_9 [6] [i_0 - 2] [i_0] [i_0 + 1]))));
                        }
                        var_25 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((unsigned char) arr_5 [i_0 + 1]))), (arr_4 [i_1] [i_3])));
                    }
                } 
            } 
        }
        for (signed char i_5 = 1; i_5 < 14; i_5 += 4) 
        {
            var_26 = ((/* implicit */unsigned int) ((unsigned char) (signed char)0));
            var_27 = ((/* implicit */unsigned int) arr_9 [i_0 - 1] [i_0] [i_5] [i_5 - 1]);
            var_28 = (!((_Bool)1));
        }
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((_Bool) ((unsigned short) arr_8 [i_0] [i_0] [i_0] [i_0 - 1]))))));
        arr_14 [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 2657995157U))))))));
    }
    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) var_9))));
    var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) && (((/* implicit */_Bool) (~(var_2)))));
}
