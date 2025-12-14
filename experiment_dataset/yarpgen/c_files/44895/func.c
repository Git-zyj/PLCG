/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44895
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
    var_14 = ((/* implicit */unsigned char) (signed char)-118);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((/* implicit */int) ((((long long int) 16511963488222384586ULL)) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2])))))) : (((unsigned int) var_13)))))));
                    var_17 ^= ((/* implicit */short) 1989800578U);
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) arr_12 [i_3]);
        arr_13 [i_3] &= ((/* implicit */unsigned long long int) ((unsigned short) arr_8 [i_3] [i_3] [i_3]));
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned int i_6 = 1; i_6 < 8; i_6 += 4) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) var_8);
                        arr_22 [i_6] [i_6] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_5] [i_4] [i_3]))));
                        arr_23 [i_6] [i_4] [i_5] = arr_10 [i_3];
                        var_20 = arr_0 [i_5];
                        var_21 = ((/* implicit */unsigned long long int) ((arr_8 [i_6 + 4] [i_6 + 2] [i_6 - 1]) <= (((/* implicit */int) ((_Bool) arr_8 [i_3] [i_4] [i_3])))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_7 = 1; i_7 < 17; i_7 += 1) 
    {
        arr_27 [i_7] [i_7] = ((/* implicit */int) arr_24 [i_7] [i_7]);
        var_22 ^= ((_Bool) min((arr_25 [i_7]), (((/* implicit */unsigned int) min((arr_26 [i_7] [i_7]), (((/* implicit */int) var_10)))))));
    }
}
