/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49650
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
    for (unsigned int i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) arr_1 [i_0 - 3]);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                var_20 = ((/* implicit */long long int) min((var_4), (((/* implicit */unsigned long long int) 2885912574U))));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_21 = ((/* implicit */short) arr_9 [i_0]);
                    var_22 = ((/* implicit */unsigned int) ((((1409054722U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44395))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_3 [i_0 - 1])));
                }
                var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((int) arr_2 [i_0 - 3] [i_1 + 1]))), (((((/* implicit */_Bool) arr_3 [i_0 - 3])) ? (arr_3 [i_0 - 3]) : (((/* implicit */unsigned long long int) arr_6 [i_0 - 3] [i_1 + 1] [i_1] [(_Bool)1]))))));
            }
            var_24 = ((/* implicit */long long int) arr_0 [i_1] [i_0]);
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_5 = 3; i_5 < 9; i_5 += 3) 
            {
                var_25 = ((/* implicit */_Bool) var_10);
                var_26 = ((/* implicit */unsigned char) ((var_3) * (arr_0 [i_0 - 1] [i_4 - 1])));
                arr_17 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_4 - 1] [i_5 - 3])) : (((/* implicit */int) arr_10 [i_0] [i_4 - 1] [i_5 - 1]))));
                arr_18 [i_5 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 1] [1U] [i_4 - 1])) : (((/* implicit */int) arr_13 [i_4 - 1] [i_5 - 3]))));
            }
            var_27 = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_4 - 1] [i_4 - 1]);
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)21140)) ? (1409054722U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_23 [i_6] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_19 [i_6] [i_6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6]))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((arr_22 [i_6]), (2885912595U)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (arr_19 [i_6] [i_6])))))))));
        var_29 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))), ((+(arr_22 [16])))))), ((-(arr_19 [i_6] [i_6])))));
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6])) ? (((((/* implicit */_Bool) max(((unsigned short)12323), (((/* implicit */unsigned short) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (max((((/* implicit */unsigned int) var_18)), (1409054722U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_6])) >> (((var_7) - (1313614230))))))));
    }
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            for (signed char i_9 = 1; i_9 < 19; i_9 += 2) 
            {
                {
                    var_31 = ((/* implicit */int) ((((/* implicit */long long int) ((((var_13) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) var_1)))) % (((/* implicit */int) (unsigned char)235))))) + (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)49202)) / (41362221)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_9)))) : (max((((/* implicit */long long int) var_12)), (3932631309620336812LL)))))));
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_9] [i_9 + 1] [i_9 + 1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [8U] [i_8])))));
                    var_33 = ((/* implicit */unsigned int) var_12);
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */int) var_12))));
}
