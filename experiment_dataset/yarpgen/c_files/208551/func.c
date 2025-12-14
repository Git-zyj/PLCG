/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208551
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
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (var_0)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) var_7))))))));
                        arr_12 [i_3] [i_0] [i_0] = ((/* implicit */signed char) (((!(arr_2 [i_2] [i_3]))) ? (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_8 [i_0])))) : (((/* implicit */int) ((unsigned char) ((unsigned int) arr_7 [i_0] [i_0] [i_2]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_4] [(short)6] [i_5])) ? (((/* implicit */unsigned long long int) arr_6 [i_5] [i_4])) : (arr_11 [i_0] [i_4] [i_5] [i_5]))))));
                var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_5]))) : (var_0)));
            }
            for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 4; i_7 < 18; i_7 += 4) 
                {
                    for (short i_8 = 2; i_8 < 18; i_8 += 1) 
                    {
                        {
                            arr_30 [(_Bool)1] [i_4] [i_6] [(unsigned short)8] [i_0] = ((/* implicit */unsigned short) ((unsigned char) var_9));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_7 - 1] [i_7 - 2] [i_7] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) var_3))));
                            arr_31 [i_0] [i_0] [i_6] [(_Bool)1] [i_8 + 2] [i_8 + 2] = ((/* implicit */signed char) var_2);
                            arr_32 [i_0] [i_4] [i_4] [i_6] [15] [i_0] [7LL] = ((/* implicit */unsigned long long int) arr_28 [i_8] [i_0] [i_7] [i_0] [i_7 - 2]);
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (!(arr_5 [i_0] [(short)17]))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_15))));
            }
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [(signed char)13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_4] [i_4]))) : (var_4)));
        }
        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            var_24 = ((/* implicit */unsigned int) arr_3 [i_9] [i_0]);
            var_25 = ((int) max((min((((/* implicit */signed char) arr_2 [i_9] [i_0])), (arr_4 [i_0]))), (max((((/* implicit */signed char) arr_2 [i_9] [i_9])), (var_13)))));
        }
        var_26 = min((arr_20 [i_0]), (((/* implicit */short) min((((unsigned char) arr_29 [i_0] [9LL] [i_0] [i_0] [i_0] [i_0])), (((/* implicit */unsigned char) max((arr_14 [i_0] [i_0]), (arr_4 [i_0]))))))));
        arr_35 [i_0] = ((/* implicit */_Bool) ((unsigned char) var_11));
    }
    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4)))))));
    var_28 = ((/* implicit */long long int) var_14);
}
