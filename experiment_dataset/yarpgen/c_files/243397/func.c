/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243397
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_5 [i_1] [(signed char)9] [i_1]))));
                var_18 = ((/* implicit */unsigned long long int) arr_5 [i_0] [(signed char)5] [i_0]);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 8; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_13 [1ULL] [i_3] [i_3] [i_3] [(short)1] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((arr_1 [i_2]), (((/* implicit */long long int) var_15))))) ? (arr_1 [i_4]) : (((/* implicit */long long int) -869262307))))));
                                arr_14 [i_0] [3ULL] [i_3] [i_2] [i_3 + 2] [(short)5] [i_4] = max((16531140050841303376ULL), (((/* implicit */unsigned long long int) (short)5369)));
                                arr_15 [i_3] [(short)4] [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) var_12)))));
                                arr_16 [i_0] [i_3] [i_1] [i_1] [i_2] [i_3 - 1] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_3 - 2])))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0]))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0])) <= (((/* implicit */int) (short)4370)))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned short)65515), (((/* implicit */unsigned short) arr_3 [(unsigned short)4])))))))) : (((arr_9 [i_0] [(_Bool)1] [(_Bool)1] [i_1]) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (arr_6 [i_1] [i_1] [i_0] [i_0])))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_14);
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)15)) < (((/* implicit */int) (signed char)-87)))) ? ((~(1180888309U))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-95))))))))))));
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    for (signed char i_8 = 3; i_8 < 12; i_8 += 3) 
                    {
                        {
                            arr_30 [6U] [6U] [i_6] [i_8] = ((/* implicit */_Bool) min((((/* implicit */int) arr_22 [(unsigned char)10] [i_8])), ((-(((/* implicit */int) var_10))))));
                            var_23 = ((/* implicit */unsigned short) var_16);
                        }
                    } 
                } 
                arr_31 [(_Bool)1] [i_6] &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_23 [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_18 [i_6] [i_5]), (arr_23 [i_5]))))) : (((((/* implicit */_Bool) arr_23 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_11)))));
            }
        } 
    } 
}
