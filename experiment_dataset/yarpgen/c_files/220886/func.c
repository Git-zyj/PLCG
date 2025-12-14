/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220886
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
    var_12 = ((/* implicit */unsigned int) var_1);
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (min((-1828770159215023386LL), (((/* implicit */long long int) var_2))))))))));
    var_14 &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_6)) : (var_5)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((((/* implicit */int) (short)511)) - (501)))))) ? (min((((/* implicit */int) var_8)), (min((var_11), (arr_1 [i_0]))))) : (((int) 3628057372U))));
                        var_16 = ((/* implicit */short) min((((/* implicit */int) min((arr_2 [i_1 - 2]), (arr_2 [i_1 - 3])))), (((((/* implicit */_Bool) arr_2 [i_1 - 3])) ? (((/* implicit */int) arr_2 [i_1 - 3])) : (((/* implicit */int) arr_2 [i_1 - 1]))))));
                        arr_10 [i_3] [i_2] [i_2] [i_1 + 2] [i_1] [i_0] = ((/* implicit */unsigned int) var_9);
                        var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1] [i_1] [4]))))), (((arr_3 [i_1 + 2] [i_1 - 2]) % (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1] [i_1 + 2] [(unsigned char)9])))))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 12; i_4 += 4) 
                    {
                        arr_13 [1] [i_0] [(_Bool)1] [3U] [i_0] [i_0] = ((/* implicit */signed char) arr_12 [i_4] [i_4] [i_2] [i_0] [i_1 + 2] [i_0]);
                        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) arr_9 [i_1 - 3] [i_1] [2] [i_1])))));
                    }
                    var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) min((var_6), (((/* implicit */int) var_0)))))))), (min((((/* implicit */int) var_8)), ((~(var_6)))))));
                }
                for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [(unsigned char)11] [(unsigned char)11] [i_5] [(unsigned char)11])) ? ((-(666909928U))) : (((/* implicit */unsigned int) (((-(((/* implicit */int) var_1)))) + (arr_7 [i_0] [i_1 - 1] [i_1]))))));
                    var_21 = ((/* implicit */unsigned long long int) var_11);
                }
                for (short i_6 = 2; i_6 < 10; i_6 += 4) 
                {
                    var_22 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min((arr_2 [i_1 + 2]), (((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0] [(_Bool)1])))))))));
                    arr_18 [i_0] [i_0] |= ((/* implicit */_Bool) arr_1 [i_0]);
                    arr_19 [i_1] [i_1] [i_1] [i_0] = var_5;
                    var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned int) 0)), (3628057367U)));
                    var_24 += ((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_1 - 1]))))), (min((((/* implicit */unsigned int) var_1)), (((((/* implicit */unsigned int) var_6)) ^ (3628057367U)))))));
                }
                arr_20 [i_0] [i_1 - 3] = ((/* implicit */_Bool) var_11);
                var_25 = (+(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0]))))), ((~(3628057364U))))));
            }
        } 
    } 
}
