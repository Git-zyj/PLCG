/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214414
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)41)) * (((/* implicit */int) arr_1 [i_0]))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_14 [(unsigned char)12] [i_1] [i_1] [i_1] [(unsigned char)18] [i_1] [i_2] = arr_13 [i_0] [i_1] [i_1] [i_3] [i_4 + 1];
                                arr_15 [i_2] [8ULL] [i_2] = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)210));
                                arr_16 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_13 [16] [16] [i_2] [i_4 + 1] [i_2 + 2]) - (arr_13 [i_0] [i_0] [i_4] [i_4 + 1] [i_2 - 1])))) ? (min((arr_13 [i_0] [i_3] [i_4 + 1] [i_4 + 1] [i_2 + 3]), (arr_13 [i_0] [(_Bool)1] [i_4] [i_4 + 1] [i_2 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_3] [i_4 + 1] [i_2 - 1]))))))));
                            }
                        } 
                    } 
                    var_21 = ((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_13 [i_2] [i_2 + 2] [15U] [i_2] [i_2 - 1]))) >= (((unsigned long long int) arr_13 [i_2] [i_2 - 1] [i_2 - 1] [15LL] [i_2 - 1])));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 2147483647)))) - (15540407699285424079ULL)));
                                arr_24 [i_2] [13] [8ULL] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 15540407699285424079ULL)) ? (((/* implicit */int) (signed char)67)) : (arr_9 [i_0] [i_5] [i_2] [i_1] [i_5]))))))), (min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) arr_21 [i_0] [i_1] [i_2 + 1] [(unsigned char)13] [i_2]))))))));
                            }
                        } 
                    } 
                }
                arr_25 [0LL] [i_1] [(signed char)14] = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (arr_5 [i_1] [i_1] [i_1]))))) <= (2076502287U))), ((!(min((arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]), ((_Bool)1)))))));
            }
        } 
    } 
    var_23 |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_3)), (var_18)));
    /* LoopNest 3 */
    for (unsigned char i_7 = 1; i_7 < 20; i_7 += 4) 
    {
        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) 2147483647))));
                    var_25 = ((((/* implicit */_Bool) arr_31 [i_7 + 2])) ? (((/* implicit */int) (!(((((/* implicit */int) (_Bool)0)) <= ((-2147483647 - 1))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((var_18), (((/* implicit */unsigned char) (_Bool)1))))) && ((!(((/* implicit */_Bool) var_6))))))));
                    arr_33 [i_7] [i_7] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7 - 1]))) / (arr_31 [i_7 + 1])))) ? ((+(arr_31 [i_7 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_31 [i_7 + 2])))));
                    arr_34 [i_9] [i_8] [i_7 + 1] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_26 [i_7 + 1]))))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            {
                                arr_39 [i_7] [(unsigned char)17] [i_9] [i_9] [i_10] [i_10] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_10] [i_8] [i_8] [i_7 - 1])) ? (((/* implicit */int) arr_35 [i_11] [i_9] [(_Bool)1] [i_7 + 2])) : (((/* implicit */int) arr_35 [i_7 + 1] [i_8] [4] [i_7 - 1]))))) ? (min((((/* implicit */unsigned long long int) arr_35 [i_7] [(unsigned short)6] [i_9] [i_7 + 1])), (15540407699285424073ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_35 [5ULL] [i_8] [i_9] [i_7 + 2])))));
                                arr_40 [i_10] [i_8] [i_8] [(unsigned char)14] [i_11] = ((/* implicit */unsigned long long int) ((unsigned char) (~((~(((/* implicit */int) arr_27 [i_7 + 2] [i_9])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_2))))));
}
