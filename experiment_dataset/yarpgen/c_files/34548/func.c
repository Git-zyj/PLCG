/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34548
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
    var_11 = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_2)) * (((/* implicit */int) var_5)))) / (((/* implicit */int) var_3)))) % ((~(((((/* implicit */_Bool) (unsigned short)17244)) ? (((/* implicit */int) (unsigned short)30542)) : (((/* implicit */int) (unsigned short)48292))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)64575)) << (((((/* implicit */int) var_10)) - (22522))))), (((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_2 [i_0])) - (8460)))))))) ? (((((((/* implicit */int) var_0)) * (((/* implicit */int) arr_0 [i_0] [i_0])))) ^ (((((/* implicit */int) (unsigned short)64695)) % (((/* implicit */int) (unsigned short)24352)))))) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_13 -= var_4;
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((unsigned short) (unsigned short)47742)))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 3; i_3 < 23; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            arr_14 [i_3] [i_4] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_8 [i_3]))));
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)62382)) ^ (((/* implicit */int) (unsigned short)48292))));
                            arr_15 [i_1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned short) (unsigned short)64676)))));
                        }
                    } 
                } 
            } 
            arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_1] [i_2 + 3])) / (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_4)))))));
            arr_17 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41183)) ? (((/* implicit */int) (unsigned short)14160)) : (((/* implicit */int) (unsigned short)18463))))) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned short) arr_4 [i_1])))));
            arr_18 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_1] [i_2 - 2]))));
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                var_15 += ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (~(((/* implicit */int) var_5)))))));
            }
        }
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_8 [i_1]))));
            arr_24 [i_1] [i_1] [i_7] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_10))))));
            var_18 += var_8;
            arr_25 [i_1] &= ((unsigned short) arr_12 [i_1]);
        }
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            for (unsigned short i_9 = 2; i_9 < 21; i_9 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)841)) : (((/* implicit */int) var_2)))) / (((/* implicit */int) (unsigned short)12234))));
                    var_20 = arr_3 [i_9];
                }
            } 
        } 
    }
    for (unsigned short i_10 = 4; i_10 < 16; i_10 += 1) 
    {
        arr_34 [i_10 + 2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_12 [i_10 - 2])))) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) (unsigned short)17256)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_10] [i_10]))))))) && (((((/* implicit */_Bool) min(((unsigned short)841), (arr_20 [i_10 - 3] [i_10 - 3] [i_10])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)859)) ? (((/* implicit */int) (unsigned short)19672)) : (((/* implicit */int) (unsigned short)57651)))), (((((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_33 [i_10 - 1]))))) ^ (((/* implicit */int) max((arr_19 [i_10] [i_10] [i_10] [i_10]), (var_5)))))))))));
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) << (((((/* implicit */int) var_3)) - (58773)))));
}
