/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210444
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((((((/* implicit */int) arr_1 [(unsigned short)7] [(unsigned short)7])) == (((/* implicit */int) (_Bool)1)))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)13531)) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) ((_Bool) (unsigned short)52139));
                            var_12 |= ((/* implicit */unsigned short) ((var_7) ? (((/* implicit */int) min((max((((/* implicit */unsigned short) var_10)), (arr_0 [i_4]))), (min(((unsigned short)30658), (((/* implicit */unsigned short) var_0))))))) : ((+(((/* implicit */int) var_8))))));
                            var_13 = ((/* implicit */unsigned short) arr_1 [(unsigned short)4] [i_1 + 1]);
                        }
                    } 
                } 
            } 
            var_14 ^= ((/* implicit */_Bool) (-(((/* implicit */int) max((max((((/* implicit */unsigned short) (_Bool)1)), (arr_6 [i_0] [i_1]))), (((/* implicit */unsigned short) arr_12 [i_1] [i_1] [(_Bool)1] [(_Bool)1] [i_1] [i_0])))))));
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((+((+(((/* implicit */int) var_7)))))) : (((arr_10 [(_Bool)1] [i_0] [i_1] [i_1]) ? (((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
            var_16 += ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_1])))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_9 [i_0] [i_1] [i_1 + 2])))) : ((~(((((/* implicit */int) arr_3 [i_0] [i_0])) - (((/* implicit */int) var_1))))))));
        }
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            arr_20 [i_0] [i_5] = ((/* implicit */unsigned short) arr_15 [i_0] [i_0]);
            var_17 = ((/* implicit */_Bool) max((max((max((arr_6 [i_0] [i_5]), (((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned short) max((arr_12 [(_Bool)1] [i_0] [i_0] [i_5] [(unsigned short)6] [i_5]), (arr_8 [i_0] [i_5] [(_Bool)1] [i_0])))))), (var_8)));
        }
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            arr_25 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) var_0)))))));
            var_18 ^= var_9;
        }
    }
    var_19 = var_6;
}
