/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4829
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_6 [i_1])), (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) arr_14 [i_4] [i_4] [i_4] [7LL] [i_4]))))) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_2] [i_3] [i_4])) ? (arr_10 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_3] [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_4] [i_1 - 1])) || (((/* implicit */_Bool) arr_7 [(_Bool)1] [i_0] [7U] [(unsigned char)0])))))))))))));
                                var_11 = ((/* implicit */signed char) min((((/* implicit */long long int) arr_9 [i_0] [i_4])), (((((/* implicit */long long int) ((/* implicit */int) (signed char)27))) & (-2651768869183905913LL)))));
                                var_12 -= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1 + 1]))) >= ((~(arr_15 [i_0] [i_0] [i_1] [i_1] [i_1]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (+((~(arr_16 [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 2] [i_1 + 1]))))))));
                        arr_19 [i_0] = ((/* implicit */short) min((((((((/* implicit */int) (unsigned char)99)) % (((/* implicit */int) (unsigned char)211)))) * (((((/* implicit */_Bool) arr_11 [i_0] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [9])))))), (((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) (unsigned char)249)) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (_Bool)0))))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        arr_23 [i_0] [i_0] = (-(((/* implicit */int) (unsigned char)64)));
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_1] [i_2] [i_6]) ? (((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_6])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))));
                    }
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_0)))) ? (((/* implicit */unsigned long long int) ((long long int) var_5))) : (min((((/* implicit */unsigned long long int) var_9)), (var_2)))))) || (((/* implicit */_Bool) var_1)))))));
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                {
                    arr_33 [i_7] [i_7] [i_7] = ((/* implicit */int) var_5);
                    var_16 = ((/* implicit */unsigned short) arr_32 [i_7] [17] [i_7]);
                    var_17 = ((/* implicit */short) var_4);
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) arr_32 [i_7] [i_8] [i_9]))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((var_5) && (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) >= (var_2)))));
}
