/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236969
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
    var_19 = (+(var_7));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) ((unsigned int) max((arr_3 [i_0] [i_1] [i_4]), (((/* implicit */int) arr_4 [16LL] [16LL] [i_1] [i_3])))))) ? (((/* implicit */long long int) arr_3 [(unsigned short)11] [i_1] [8])) : ((-(arr_8 [i_0] [1LL] [i_4] [i_3] [i_4] [(signed char)0]))));
                                var_21 = ((/* implicit */_Bool) ((signed char) (unsigned char)85));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_22 |= ((/* implicit */int) ((unsigned int) min((((/* implicit */unsigned short) var_11)), (min((arr_6 [i_0] [i_1] [(_Bool)1] [i_1]), (arr_6 [i_0] [(_Bool)1] [i_5 - 1] [i_6]))))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [(_Bool)1] [i_6] [i_1] [i_5 - 1])) ? (var_14) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_3 [i_1 - 1] [i_1] [i_6])))) ? (arr_1 [i_0]) : (((/* implicit */int) ((unsigned short) arr_0 [i_6] [i_0]))))))));
                    }
                    var_24 = ((/* implicit */_Bool) arr_14 [i_5] [i_1] [i_0] [i_0]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 18; i_7 += 3) 
                    {
                        var_25 = ((/* implicit */_Bool) ((unsigned int) (+(arr_12 [(short)15] [(short)15]))));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_8 [(unsigned short)2] [i_1] [i_5] [i_1] [i_1] [13U]))));
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) -710035849))));
                        var_28 = ((/* implicit */int) ((_Bool) arr_5 [i_5 - 1] [i_5 - 1] [i_5 - 1]));
                        var_29 = ((/* implicit */short) ((unsigned long long int) arr_18 [i_1 + 2] [i_7 + 1] [i_5]));
                    }
                }
                for (long long int i_8 = 4; i_8 < 16; i_8 += 1) 
                {
                    var_30 |= ((unsigned char) max((arr_6 [i_1 - 1] [i_8 - 3] [i_8 - 4] [i_8 - 4]), ((unsigned short)43777)));
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) arr_17 [i_0] [i_1 - 2]))));
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    var_32 |= ((/* implicit */_Bool) arr_8 [(unsigned short)15] [13] [i_1] [i_1] [i_9] [i_9]);
                    var_33 = ((/* implicit */unsigned char) var_6);
                }
            }
        } 
    } 
}
