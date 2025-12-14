/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211775
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
    var_18 = ((/* implicit */unsigned short) (signed char)-40);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_14))) <= (((((/* implicit */int) arr_0 [i_0 + 2])) & (((/* implicit */int) var_9))))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */short) (+(min((((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_0))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */short) (~(var_10)));
                            var_21 = ((/* implicit */unsigned short) max(((-(min((-1378520295), (((/* implicit */int) (unsigned char)57)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))) <= (((((/* implicit */_Bool) 1926764435U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)198))) : (var_5))))))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_11))));
                        }
                        for (unsigned int i_5 = 3; i_5 < 14; i_5 += 2) 
                        {
                            arr_22 [12U] [i_2] [(short)7] [i_3] [(short)7] [i_5] = ((/* implicit */short) (signed char)-126);
                            arr_23 [i_0] [i_1 - 1] [i_5] [i_3] [15U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) ((long long int) var_2))), (((((/* implicit */_Bool) -813241668)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_5))))) : (((/* implicit */unsigned long long int) var_17))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_0 + 1] [i_6]))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 10815863782893398059ULL)) || (((/* implicit */_Bool) arr_11 [i_2])))) ? (((long long int) (signed char)39)) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_9))))))))));
                        }
                        var_25 += ((/* implicit */short) (unsigned char)94);
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */short) (~(min((((/* implicit */unsigned int) min((var_3), (((/* implicit */unsigned short) var_12))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))) : (var_17)))))));
}
