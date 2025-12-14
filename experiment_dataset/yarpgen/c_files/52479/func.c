/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52479
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_7))));
    var_19 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 + 1])) >> (((((/* implicit */int) arr_1 [i_1])) - (20701)))))) ? ((~(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))))), (((/* implicit */unsigned int) arr_2 [i_0]))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */int) min((((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_8 [i_3] [i_0 + 1] [i_0 + 1] [i_3] [i_3]))))))), (((((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */int) var_1))))) ? (((long long int) arr_3 [i_2 - 1] [3])) : (((/* implicit */long long int) ((/* implicit */int) max((var_16), (((/* implicit */unsigned short) arr_5 [i_0] [i_1]))))))))));
                            arr_10 [i_0] [i_1] [i_1] [i_1] [(_Bool)1] [i_3] = ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned short) min((arr_4 [i_3]), (var_8)))), (max((((/* implicit */unsigned short) arr_3 [i_2] [(unsigned short)10])), (arr_7 [i_0] [i_2] [i_0] [i_0])))))), (max(((+(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_3 [i_0] [i_0]))))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)62161)), (0))))))), (min((((/* implicit */int) var_8)), ((-(((/* implicit */int) arr_1 [i_0])))))))))));
                            var_23 = ((/* implicit */short) ((unsigned int) min((((((/* implicit */_Bool) (short)1314)) ? (((/* implicit */int) (short)-18714)) : (345135393))), (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)-122)) : (0))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0 + 1] = ((/* implicit */signed char) min((max((min(((short)(-32767 - 1)), (((/* implicit */short) (signed char)-122)))), (((/* implicit */short) arr_4 [i_1 - 3])))), (((/* implicit */short) ((((/* implicit */int) max((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_0])))) > (((/* implicit */int) ((short) arr_9 [i_0 - 2] [i_1 + 2] [i_1]))))))));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_1 [i_0])), (var_16)))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (arr_2 [i_1 - 2])))), (max((var_7), (((/* implicit */unsigned int) var_3)))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_3 [i_1 - 3] [i_1 - 3]) || (((/* implicit */_Bool) var_12))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_25 = ((/* implicit */int) min(((!(((/* implicit */_Bool) var_8)))), ((!(((/* implicit */_Bool) max((((/* implicit */int) var_6)), (arr_13 [9LL]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    var_26 = arr_5 [i_5] [i_6];
                    arr_18 [(_Bool)1] [1U] [i_6] = ((/* implicit */unsigned char) (+(-4021517563674837310LL)));
                    var_27 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_6] [i_4])) ? (arr_14 [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
                }
            }
        } 
    } 
}
