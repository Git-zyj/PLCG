/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204126
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
    var_10 = ((/* implicit */short) (~((~((~(var_5)))))));
    var_11 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1601436281)) ? (((/* implicit */int) var_9)) : (-2026051742)))), ((~(var_8)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                for (unsigned char i_3 = 3; i_3 < 20; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        {
                            var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_0 + 1] [(short)12])) ? (var_1) : (var_8))) & (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11251)))))))) ? (((((/* implicit */_Bool) max(((short)8333), (((/* implicit */short) arr_6 [1U] [(short)20] [6U]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1] [(unsigned char)6]))))) : ((+(((/* implicit */int) var_4)))))) : (((/* implicit */int) ((unsigned char) ((2026051741) >= (((/* implicit */int) arr_1 [i_3]))))))));
                            var_14 = (+((~(((/* implicit */int) ((unsigned char) arr_5 [i_0] [(short)3] [i_2]))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                arr_19 [i_5] [i_1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_7 [17])) ? (arr_14 [i_5] [i_0 - 3]) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))))))) ? (((/* implicit */unsigned int) (-(max((arr_15 [i_1] [i_5]), (((/* implicit */int) arr_9 [(short)15] [i_1] [i_1] [i_1]))))))) : (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) arr_7 [i_0])) : (var_8))) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [0] [i_1] [i_0])))))))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 2; i_6 < 18; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        {
                            arr_26 [(unsigned char)3] [i_1] [i_5] [i_5] [i_5] [i_1] = ((/* implicit */int) ((unsigned int) max((((/* implicit */int) min(((unsigned char)211), (((/* implicit */unsigned char) arr_1 [i_6]))))), (((((/* implicit */_Bool) -2026051741)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))));
                            var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                        }
                    } 
                } 
                arr_27 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_23 [i_0] [i_1] [i_1] [i_1] [i_5] [i_5]), (((/* implicit */int) (short)-8355))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) : ((-(var_5)))))) ? (((((/* implicit */_Bool) (-(var_6)))) ? ((-(((/* implicit */int) (unsigned char)255)))) : ((+(arr_15 [i_1] [i_1]))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_5] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9))))))));
            }
        }
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            var_16 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((int) arr_2 [i_0 - 2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)55)) : (406818903)))))));
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)201)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)201)))))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)25511)) ? (arr_15 [i_8] [(unsigned char)17]) : (arr_7 [i_8]))))))))));
        }
    }
    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 1) 
    {
        var_18 = ((/* implicit */int) min((var_18), ((+(((((((/* implicit */_Bool) 2026051764)) ? (((/* implicit */int) var_2)) : (var_6))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)184))))))))));
        arr_34 [i_9] = ((/* implicit */_Bool) max((max((((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_9]))))), ((~(arr_29 [i_9] [(_Bool)1] [i_9]))))), ((+(max((var_8), (((/* implicit */unsigned int) var_2))))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_32 [i_9] [i_9])))) ? (((((/* implicit */_Bool) var_5)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9] [i_9] [i_9] [i_9] [18] [i_9] [15]))))) : (max((((/* implicit */unsigned int) arr_31 [i_9])), (var_5)))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (-991528509) : (((/* implicit */int) (unsigned char)71))))), ((-(var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(arr_8 [i_9] [i_9] [i_9])))))))));
    }
}
