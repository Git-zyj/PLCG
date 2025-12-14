/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246406
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
    var_15 = ((/* implicit */int) var_7);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) (signed char)0)), (var_2)))));
            var_16 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) var_1))))))));
            var_17 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (2408931702057846184LL)));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_9 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((arr_3 [i_2] [i_0] [i_0]) >> (((arr_3 [i_0] [i_2] [i_0]) - (4025445903805454793LL)))));
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (var_10) : (((/* implicit */long long int) arr_4 [i_0]))));
        }
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            arr_12 [i_3] [i_0] [i_0] = ((/* implicit */long long int) var_8);
            var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) var_1)) ? (arr_4 [i_0]) : (arr_4 [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)0)))))));
        }
    }
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        var_20 = ((/* implicit */int) var_13);
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            arr_17 [i_5] = ((/* implicit */unsigned short) 2408931702057846181LL);
            arr_18 [i_4] [i_5] = ((/* implicit */int) min((var_8), (((((/* implicit */_Bool) 475874923U)) && (((/* implicit */_Bool) arr_1 [i_4]))))));
            arr_19 [i_4] [i_5] [i_5] &= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) == (3819092373U)))) >> (((((/* implicit */int) arr_16 [i_5])) - (218)))));
        }
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        var_21 *= ((/* implicit */_Bool) ((arr_8 [i_6] [i_6]) % (2977668762U)));
        var_22 = ((/* implicit */unsigned int) var_11);
        arr_22 [i_6] [i_6] = ((/* implicit */_Bool) (short)15872);
    }
}
