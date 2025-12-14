/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247678
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
    var_19 += ((/* implicit */int) ((min((var_16), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) <= (var_7)))))) > (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (917504) : (((/* implicit */int) var_1)))) != (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))))))));
    var_20 = ((max((((/* implicit */int) ((signed char) var_16))), ((~(((/* implicit */int) var_4)))))) ^ ((+(var_17))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_0]))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 2] [i_0 - 2] [i_2])) ? ((~(((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_0 - 2] [i_0])))) : (((((/* implicit */_Bool) 917504)) ? (-917500) : (((/* implicit */int) (unsigned short)53615))))));
                    var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) -1021847285)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_16 [(signed char)1] [(unsigned short)4] [i_2] [i_3] [i_4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 - 3] [i_0] [i_0] [i_0 + 1] [i_0 - 4]))) <= (((((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)15659))))) ? (arr_12 [i_0] [i_0] [i_0 - 4] [i_0 - 4] [i_0 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [i_0] [i_1] [(short)3] [i_4]), (((/* implicit */short) var_10)))))))));
                                arr_17 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4])) / ((-(-689284700)))));
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)127), (var_2))))) : (arr_2 [i_0])));
                                arr_18 [i_2] = ((/* implicit */unsigned char) 917499);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        for (signed char i_6 = 1; i_6 < 7; i_6 += 3) 
                        {
                            {
                                var_24 -= ((max((var_5), (((((/* implicit */_Bool) var_4)) || (arr_3 [i_0] [i_1]))))) ? (((long long int) var_13)) : (((/* implicit */long long int) max((-917514), (((/* implicit */int) arr_22 [i_0 - 3] [i_6 + 3] [i_6 + 3] [i_6 + 3] [i_6 - 1] [i_6] [i_6]))))));
                                arr_25 [i_0] [i_0] [i_2] [i_2] [i_0] [(short)3] = ((/* implicit */unsigned char) arr_1 [i_0 - 1]);
                                arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [(short)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(917499)))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_1 [i_0 - 4])) : ((-(arr_19 [3] [i_0 - 4] [(_Bool)1] [i_0 - 4]))))) : (((/* implicit */int) ((unsigned char) var_3)))));
                                var_25 += ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))) < (min((((int) arr_20 [(_Bool)1] [i_1] [i_2] [5])), ((+(var_6)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
