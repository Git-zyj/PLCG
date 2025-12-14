/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44697
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_1]);
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                arr_8 [i_0] [i_2] [i_0] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0]) : (((/* implicit */int) var_3)))) > (((-1096346265) - (((/* implicit */int) (signed char)-1))))));
                var_10 = ((/* implicit */signed char) ((0) >= (((/* implicit */int) ((var_9) >= (arr_1 [i_2]))))));
            }
            arr_9 [(unsigned char)5] = ((/* implicit */unsigned char) arr_2 [i_0]);
            /* LoopSeq 2 */
            for (int i_3 = 1; i_3 < 10; i_3 += 2) 
            {
                var_11 = (((!(((/* implicit */_Bool) (unsigned char)83)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)29)) : (-1096346265))) : (((var_0) ? (-1096346265) : (1691086988))));
                var_12 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                arr_16 [i_4] = ((/* implicit */signed char) arr_15 [i_0] [i_1] [i_4]);
                arr_17 [i_4] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) var_9));
                var_13 = ((/* implicit */unsigned long long int) var_8);
            }
        }
        var_14 = ((/* implicit */_Bool) (~(max((arr_10 [i_0] [i_0]), (arr_11 [i_0] [i_0] [i_0] [i_0])))));
        var_15 = (((~(arr_15 [(short)6] [(short)6] [6]))) - (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) arr_1 [i_0])) == (11681202416818380562ULL))) ? (((/* implicit */int) ((signed char) 12327625576646791187ULL))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [3])) <= (((/* implicit */int) var_1)))))))));
    }
    var_16 = ((/* implicit */unsigned char) var_7);
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)51))))))) >= (((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                {
                    var_18 &= ((/* implicit */int) arr_6 [i_7] [i_6] [i_7]);
                    /* LoopNest 2 */
                    for (signed char i_8 = 1; i_8 < 7; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
                                arr_33 [i_5] [i_6] [i_7] [(_Bool)1] [i_7] = ((/* implicit */short) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127)))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) ((_Bool) 1096346265))))));
                }
            } 
        } 
    } 
}
