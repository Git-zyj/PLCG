/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237702
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) arr_3 [i_0] [i_1])), (var_6))) ^ (arr_6 [i_0] [i_1] [i_0] [i_0])));
                    var_12 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) (short)-21755)), (2031089633U))) * (2263877663U)));
                    arr_9 [i_0] [(unsigned short)14] [i_0] |= ((arr_1 [i_0] [i_0]) << (((((/* implicit */int) min((var_9), (((/* implicit */signed char) (_Bool)0))))) + (103))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_12 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_10 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2]) : (arr_10 [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2 + 1])))) ? (((((/* implicit */_Bool) var_9)) ? (2263877662U) : (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2031089633U))))))));
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_1 [i_2 - 2] [i_1]))) >> (((((/* implicit */int) var_7)) - (30046)))))) ? ((((!(((/* implicit */_Bool) var_9)))) ? (((-134072625) / (arr_7 [i_0] [i_1] [i_2] [i_2]))) : (((/* implicit */int) (!((_Bool)0)))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_3]))))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                        arr_13 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((signed char) (!((!(((/* implicit */_Bool) arr_2 [i_3] [i_1])))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_4 = 2; i_4 < 17; i_4 += 1) 
                    {
                        arr_16 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_14 [i_0] [(unsigned char)5] [i_0] [i_0])), (var_10)))) : (min((((/* implicit */unsigned int) arr_7 [i_4 - 1] [i_2] [i_1] [i_0])), (2031089655U))))))));
                        var_14 = ((484370723) - (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))));
                        var_15 = ((/* implicit */unsigned short) ((var_1) >> (((max((arr_6 [11] [i_4 + 1] [i_4 - 2] [i_4]), (((/* implicit */long long int) 621589858U)))) - (621589828LL)))));
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_4);
}
