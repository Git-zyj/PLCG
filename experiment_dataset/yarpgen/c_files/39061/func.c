/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39061
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
    var_14 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)8954)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) (unsigned short)8965)) ? (1987775271U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56574)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                            {
                                var_15 = ((/* implicit */unsigned long long int) (unsigned short)8938);
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((unsigned short) arr_6 [i_0] [i_0] [i_0] [i_0])))));
                                var_17 -= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (~(-1073741824)))) : (((arr_2 [i_0]) | (2939205321U))))), (((1265082525U) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)56586)) / (var_10))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_2)))));
                            }
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) 3029884791U))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_5] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_4)))) + (((((/* implicit */_Bool) var_13)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_5])))))));
                            var_19 = ((((/* implicit */int) (short)32410)) > (((/* implicit */int) (unsigned short)8941)));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2939205337U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_13))), (((/* implicit */unsigned long long int) max((2307192024U), (((/* implicit */unsigned int) -1063964478))))))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)56581))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (arr_15 [i_5] [i_1] [i_1] [i_6])))) ? (((/* implicit */long long int) ((max((var_12), (((/* implicit */unsigned int) (signed char)1)))) ^ (2939205362U)))) : (max(((-(var_4))), (((/* implicit */long long int) var_11))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
