/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35538
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
    var_20 = ((unsigned char) (unsigned char)255);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((((((((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) < (((/* implicit */int) arr_5 [i_0] [i_1])))) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) arr_3 [i_0] [i_2 + 1])))), (((/* implicit */int) max((arr_4 [i_0] [i_2 - 2] [i_0] [i_1 - 2]), ((unsigned char)1)))))))));
                    arr_6 [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) max((max(((unsigned char)5), (arr_0 [i_2]))), (((unsigned char) (unsigned char)232))))) ^ (((((/* implicit */int) arr_4 [i_2 - 2] [i_2 - 2] [i_1 - 1] [(unsigned char)5])) ^ (((/* implicit */int) ((unsigned char) (unsigned char)238)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)11)))) < (max((((((/* implicit */int) (unsigned char)39)) * (((/* implicit */int) (unsigned char)5)))), (((/* implicit */int) max(((unsigned char)189), (arr_4 [i_0] [(unsigned char)8] [i_3 - 1] [i_3]))))))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) max((arr_8 [i_0] [i_0]), ((unsigned char)250))))) != (((((/* implicit */int) arr_3 [i_0] [i_3 - 1])) % (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned char)1)))))))));
            arr_9 [(unsigned char)8] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)36)) && (((/* implicit */_Bool) arr_4 [i_3 - 1] [i_3] [i_3 + 1] [i_3 + 1])))) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */int) arr_7 [i_3 - 1])) << (((((/* implicit */int) max(((unsigned char)251), ((unsigned char)140)))) - (230)))))));
            arr_10 [i_0] [i_3] = var_3;
            var_24 ^= ((unsigned char) arr_5 [i_3] [i_0]);
        }
        /* vectorizable */
        for (unsigned char i_4 = 4; i_4 < 12; i_4 += 4) 
        {
            var_25 -= ((unsigned char) arr_12 [i_4 - 1] [i_4 + 1] [i_4 - 4]);
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_0])) * (((/* implicit */int) arr_1 [i_0])))))));
        }
        var_27 = ((/* implicit */unsigned char) max((((/* implicit */int) var_15)), (((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) arr_12 [i_0] [i_0] [(unsigned char)5])))) + (((/* implicit */int) var_1))))));
    }
    var_28 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_18)))) % (((/* implicit */int) ((((/* implicit */int) ((unsigned char) (unsigned char)228))) <= (((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (unsigned char)5)))))))));
}
