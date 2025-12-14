/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30108
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (min((arr_11 [i_0] [i_3] [i_2] [(short)1] [i_3]), (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (0))))))));
                            arr_15 [i_3] [i_2 - 1] [i_3] = ((/* implicit */unsigned long long int) var_7);
                            arr_16 [i_0 - 2] [i_3] [i_0 - 2] [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_0 + 1] [i_2 - 1] [i_3])) ? (arr_9 [i_2 - 1] [i_2] [i_2] [i_2]) : (arr_11 [i_0] [i_3] [i_1 - 2] [i_2 - 1] [i_2]))));
                            var_18 = ((/* implicit */int) min((((unsigned short) var_12)), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (arr_7 [i_3]))) != (((/* implicit */unsigned long long int) arr_12 [i_1 - 3] [i_0 + 2] [i_0 + 2] [i_0 - 2])))))));
                            arr_17 [i_0] [i_3] [i_1 - 3] [i_3] [(short)19] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0]))) ? (max((((/* implicit */int) arr_14 [i_3])), (var_2))) : (((/* implicit */int) arr_6 [16LL] [(short)15])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_3])) ? (arr_11 [i_3] [i_3] [i_1] [i_3] [8]) : (((/* implicit */int) var_0))))) <= (min((arr_12 [i_0] [i_1] [i_2 - 1] [i_3]), (((/* implicit */unsigned int) 2147483647)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 2) 
                    {
                        for (signed char i_6 = 2; i_6 < 20; i_6 += 2) 
                        {
                            {
                                arr_25 [i_0 + 1] [i_1 - 4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((arr_5 [i_1 + 1] [i_1]), (arr_5 [i_1 + 1] [i_1])))), (((((/* implicit */_Bool) arr_11 [i_1 + 2] [i_5] [i_1] [11] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_4 [i_1 - 4] [i_1])))));
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) var_8)) >> (((max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)42360)) >= (((/* implicit */int) var_6))))), (arr_18 [i_5 - 1] [i_1 + 1] [i_0 + 1]))) - (751776024U))))))));
                                var_20 = ((/* implicit */_Bool) (+(max((arr_11 [i_0 + 2] [i_5] [i_0 - 1] [i_0] [i_0 + 2]), (max((((/* implicit */int) arr_14 [i_5])), (var_2)))))));
                                arr_26 [20ULL] [i_1 + 2] [i_4] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) (-2147483647 - 1)))))) ? ((-(((/* implicit */int) arr_6 [i_0 + 1] [(signed char)12])))) : ((-(((/* implicit */int) arr_13 [i_6] [i_5 + 1] [i_4] [9U] [6U]))))))));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) var_7)))), (((((/* implicit */unsigned long long int) (-(var_7)))) > (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_5]))) : (var_16))))))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((int) var_2))))) ? ((-(((/* implicit */int) ((short) 1778985071))))) : (max((((((/* implicit */_Bool) arr_13 [i_0] [i_1 + 1] [(unsigned short)8] [18] [i_1])) ? (arr_9 [(short)3] [(unsigned char)0] [i_0] [i_0 - 1]) : (((/* implicit */int) var_11)))), (((/* implicit */int) arr_14 [i_0])))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_8)))))))));
}
