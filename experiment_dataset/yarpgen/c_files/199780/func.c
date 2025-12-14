/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199780
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
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min(((((-(((/* implicit */int) var_3)))) + (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) var_9))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        arr_11 [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)13845)), (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))))))));
                        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)51691)) ? (((/* implicit */int) (unsigned short)53999)) : (((/* implicit */int) (unsigned short)51701))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = arr_10 [i_3] [(unsigned short)6] [i_3] [(unsigned short)6];
                            var_11 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)29743)) << (((min((((/* implicit */int) ((unsigned short) arr_9 [i_4] [i_4] [i_4 + 3] [i_4]))), (((((/* implicit */_Bool) (unsigned short)51703)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_10 [(unsigned short)6] [i_1 + 2] [i_2] [i_4 - 1])))))) - (24686)))));
                            arr_16 [(unsigned short)2] [i_1] [i_2] [(unsigned short)10] [i_3] [i_4] = ((/* implicit */unsigned short) ((min(((+(((/* implicit */int) arr_12 [i_3] [i_4] [i_4 - 1] [(unsigned short)8] [i_0] [(unsigned short)7])))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_1] [i_2])) : (((/* implicit */int) (unsigned short)13842)))))) >= (((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0 - 4]))))));
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((unsigned short)51691), (var_7))))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_4 + 1] [i_1])) : (((/* implicit */int) var_4)))), (((/* implicit */int) (unsigned short)51699)))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)6800)))) >= ((-(((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)57775))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) max((var_6), (var_7))))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8679))))) ? (((/* implicit */int) min((var_4), (var_3)))) : (((/* implicit */int) min((var_4), (var_2)))))) : (((((/* implicit */int) (unsigned short)13820)) % (((((/* implicit */_Bool) (unsigned short)51691)) ? (((/* implicit */int) (unsigned short)53197)) : (((/* implicit */int) (unsigned short)13832))))))));
}
