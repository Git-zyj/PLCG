/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231979
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
    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_17)))))) && (((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)-8376)), (var_2)))) << (((var_15) - (2592692062U))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) arr_3 [i_1])) >= (var_5))))))), ((+(arr_0 [i_0 + 3]))))))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? ((+(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57055)))))) ? (((/* implicit */int) (short)-32754)) : (((((/* implicit */_Bool) arr_2 [(signed char)5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (max((((/* implicit */int) var_2)), (arr_3 [(short)0])))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] = (short)15327;
                                arr_14 [i_0 - 1] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1)))))) ? (arr_9 [i_0] [i_1] [6U] [i_2] [i_3] [i_4]) : (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) (unsigned short)57828)) ? (arr_8 [i_0] [i_0 + 1] [i_0 + 3] [i_2 - 1] [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)768)))))));
                                var_23 = (-((-(((/* implicit */int) (short)24508)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    for (unsigned int i_6 = 1; i_6 < 16; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            {
                                var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((arr_5 [10U] [i_6]), (((/* implicit */unsigned char) (signed char)-64)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))))))) : ((-(arr_22 [i_0] [i_0 - 1] [i_0 + 3] [i_0] [i_0 - 1] [i_0 + 3] [i_5])))));
                                var_25 = (~(((((/* implicit */_Bool) (~(((/* implicit */int) (short)-15323))))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (((/* implicit */short) var_14)))))))));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_19)), (((((var_15) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8481))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_17 [i_0 + 1]), (((/* implicit */short) (_Bool)1)))))) : (min((3706859936U), (((/* implicit */unsigned int) (short)18008))))))));
            }
        } 
    } 
}
