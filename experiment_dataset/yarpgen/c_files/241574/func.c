/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241574
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) arr_2 [i_0]);
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (var_0)))), ((~(3530933359587542103ULL)))))) ? (((var_6) ? (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_0 [i_2 - 1] [i_2 - 1])))) : (((((/* implicit */_Bool) ((int) var_9))) ? (var_4) : (arr_5 [i_0] [i_1] [i_2 - 1])))));
                        var_13 += ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((var_8) && (arr_0 [i_0] [i_0])))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */int) ((unsigned long long int) max((arr_1 [i_2 - 1]), (((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_2 - 1])))));
                        arr_14 [i_4] [i_2] [i_2] [6ULL] [(_Bool)1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_7 [i_2 - 1] [3])), (((((/* implicit */_Bool) 3530933359587542100ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14915810714122009545ULL)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            arr_18 [i_0] [i_1] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [(unsigned short)15] [i_1] [(unsigned short)15] [i_5] [i_2 - 1]))));
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1])) & (((/* implicit */int) arr_3 [i_5] [4]))));
                        }
                    }
                }
            } 
        } 
        var_15 = min((((int) var_4)), (((((/* implicit */_Bool) var_9)) ? (var_2) : (arr_6 [i_0]))));
        var_16 = ((_Bool) max((var_4), (((/* implicit */int) arr_8 [i_0] [i_0]))));
        var_17 ^= ((((/* implicit */_Bool) (+(((/* implicit */int) ((var_7) && (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) && (((/* implicit */_Bool) (+(131040)))));
    }
    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        arr_23 [i_6] [i_6] = ((/* implicit */_Bool) (~((+(var_4)))));
        var_18 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [(_Bool)1] [(_Bool)1]))));
    }
    var_19 = ((/* implicit */unsigned long long int) var_9);
    var_20 = ((/* implicit */_Bool) 3530933359587542103ULL);
    var_21 = ((_Bool) max((max((var_4), (var_2))), (var_4)));
    var_22 -= ((/* implicit */_Bool) ((int) -946447141));
}
