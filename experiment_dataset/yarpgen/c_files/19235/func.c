/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19235
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
    var_12 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -531090030)) ? (min((((/* implicit */unsigned long long int) var_5)), (((unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) min((max((((/* implicit */int) (_Bool)1)), (var_6))), (((/* implicit */int) var_2)))))));
    var_13 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    var_14 = arr_2 [4ULL] [4ULL] [4ULL];
                    var_15 &= ((/* implicit */unsigned int) (short)-28);
                }
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_16 &= ((/* implicit */unsigned int) arr_2 [(_Bool)1] [i_1] [i_1]);
                    var_17 = ((/* implicit */int) (((_Bool)1) ? (13418049162745566428ULL) : (((/* implicit */unsigned long long int) -252794093))));
                }
                var_18 = ((/* implicit */int) arr_9 [i_0] [i_0]);
                var_19 = ((/* implicit */unsigned char) arr_7 [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (max((((/* implicit */int) (signed char)(-127 - 1))), (var_4)))));
    /* LoopSeq 1 */
    for (unsigned char i_4 = 1; i_4 < 20; i_4 += 1) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((arr_11 [i_4 - 1] [i_4 - 1]), (var_6))), (((/* implicit */int) (_Bool)1))))) ? (arr_10 [i_4]) : (((arr_10 [i_4]) ^ (arr_10 [i_4])))));
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 21; i_5 += 2) 
        {
            for (unsigned int i_6 = 3; i_6 < 21; i_6 += 3) 
            {
                {
                    arr_16 [14] [(unsigned char)21] [14] = ((((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_5 - 1])) || (((/* implicit */_Bool) arr_12 [i_4 + 3] [i_5 - 1])))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-1283326570)))) ? (((((/* implicit */_Bool) 994526888)) ? (var_11) : (((/* implicit */unsigned long long int) arr_11 [3] [i_4 + 2])))) : (((/* implicit */unsigned long long int) arr_11 [i_6 - 3] [i_5 + 2])))) : (((unsigned long long int) arr_11 [i_5 + 2] [i_6 - 1])));
                    var_22 = ((unsigned long long int) max((((/* implicit */int) arr_12 [i_4] [i_6 - 1])), (max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        var_23 &= max((((/* implicit */unsigned int) var_0)), (max((min((var_5), (((/* implicit */unsigned int) arr_11 [i_4] [16])))), (((/* implicit */unsigned int) max((var_0), (((/* implicit */int) var_2))))))));
    }
}
