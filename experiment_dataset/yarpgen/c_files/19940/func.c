/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19940
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
    var_15 = ((/* implicit */short) (((-(((/* implicit */int) ((var_7) != (((/* implicit */int) var_4))))))) < (((/* implicit */int) (!((_Bool)1))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_3 [(_Bool)1] = ((/* implicit */short) 15734420500826355443ULL);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) (((((-(((((/* implicit */_Bool) 239843708U)) ? (((/* implicit */int) var_14)) : (1992536431))))) + (2147483647))) >> ((((-(((/* implicit */int) var_4)))) - (62)))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1 + 1]))))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_7))));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) min(((-(((((/* implicit */unsigned int) var_7)) * (var_13))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(arr_4 [i_1])))))))));
                        arr_15 [i_1] [i_1 + 1] [i_0] [i_4] = ((/* implicit */unsigned short) ((4055123588U) <= (((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_5 [i_1] [(_Bool)1])))), (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_0))))))))));
                        arr_16 [i_1] [i_2] [i_1] = ((/* implicit */short) (-(min((((4055123610U) / (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_1 + 1] [8]))))));
                        arr_17 [i_1] [i_1] = ((/* implicit */signed char) var_2);
                    }
                }
            } 
        } 
    }
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(var_11))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (2))))))));
}
