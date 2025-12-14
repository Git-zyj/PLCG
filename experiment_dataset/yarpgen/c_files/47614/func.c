/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47614
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
    var_20 = ((/* implicit */signed char) var_17);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)81))))) != (2ULL))) ? (min((arr_2 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >> (((var_5) + (5473873971812757937LL)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) 33488896U)) && (((/* implicit */_Bool) 361188128)))))))))))));
                    var_22 &= ((unsigned int) min((((/* implicit */short) arr_1 [i_0] [i_0])), (arr_7 [i_2 + 1] [i_2] [i_2 + 1] [i_2])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (int i_4 = 1; i_4 < 17; i_4 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4] [i_4 + 1])))));
                    arr_13 [i_3] = ((/* implicit */int) (short)-6183);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] [i_3] [i_4] [i_4] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 478903384)))) / ((~(arr_15 [i_3] [i_5] [i_6])))))) ? (((((/* implicit */_Bool) -8348891047036257716LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_4]))) : (arr_15 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) arr_3 [i_0] [i_4 - 1]))));
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_16 [i_3] [i_4 - 1] [i_4] [i_4 - 1] [i_6]), (arr_16 [i_0] [i_4 + 1] [(signed char)0] [i_5] [i_6]))))) != (arr_14 [i_0] [i_3] [i_4] [i_5]))))));
                            }
                        } 
                    } 
                    var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_13)) * (((/* implicit */int) (short)255))))))) ? (((/* implicit */unsigned int) ((arr_8 [i_4 - 1]) / (((/* implicit */int) arr_1 [i_4] [i_0]))))) : ((+(arr_12 [i_4 - 1] [i_4] [i_4 + 1])))));
                    var_26 = ((/* implicit */unsigned short) ((arr_9 [i_0] [i_3] [i_4 - 1]) != (max((((/* implicit */int) (short)7070)), (arr_9 [i_0] [i_0] [i_4 + 1])))));
                }
            } 
        } 
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_15 [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [(_Bool)1])) != (1846582552)))), (((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])) / (arr_9 [i_0] [i_0] [i_0])))))))))));
        arr_21 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)14408)) && (arr_10 [(unsigned short)6] [(unsigned short)6]))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [2LL] [i_0])))))));
        var_28 = max((((/* implicit */unsigned int) (unsigned short)65524)), (((arr_3 [i_0] [i_0]) / (arr_3 [i_0] [i_0]))));
    }
}
