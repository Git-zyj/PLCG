/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36015
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_11 [i_2] [i_1] [i_1 + 3] [i_2] [i_2] [(unsigned char)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */int) (short)30562)) >> (((arr_10 [2U] [i_3] [i_2] [i_0 - 2] [9U] [i_0 - 2] [i_0 - 2]) + (1181953954846371007LL)))))))) ? (min((((((/* implicit */_Bool) arr_7 [i_4] [(_Bool)1] [(_Bool)1] [i_1 + 3] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1]))) : (arr_9 [i_2] [i_3 - 2]))), (arr_2 [i_2]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0 - 1])))))));
                                var_11 = ((/* implicit */_Bool) min(((+((+(((/* implicit */int) arr_1 [(signed char)1])))))), (((((/* implicit */int) ((12) == (((/* implicit */int) (_Bool)1))))) + (((/* implicit */int) ((((/* implicit */unsigned int) 1791472564)) != (var_6))))))));
                            }
                        } 
                    } 
                    var_12 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-865152522)))) ? (((/* implicit */int) max((var_7), (((/* implicit */short) arr_4 [i_0 - 1] [5ULL] [i_2]))))) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) ((int) 865152521))) ? (((/* implicit */unsigned int) ((var_1) | (((/* implicit */int) arr_4 [(_Bool)1] [i_1] [(_Bool)1]))))) : (var_6))) : (((/* implicit */unsigned int) -865152522))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 10; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                arr_19 [i_6] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((max(((+(arr_6 [i_1] [i_1 + 1]))), (((/* implicit */unsigned int) arr_12 [i_2] [(unsigned char)10] [(unsigned char)1] [(short)1])))) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (_Bool)1))));
                                var_14 = ((/* implicit */_Bool) max((((3378765080U) - (((/* implicit */unsigned int) 2147483647)))), (((/* implicit */unsigned int) (!(((((/* implicit */long long int) arr_0 [i_0 - 2] [i_6])) > (arr_9 [8LL] [10]))))))));
                                var_15 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) var_5)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((var_2) % (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((unsigned long long int) var_6)) <= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (var_2)))))))));
    var_17 -= ((/* implicit */short) (+(((/* implicit */int) var_10))));
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(865152516)))) ? (((/* implicit */int) ((((/* implicit */int) (short)-21664)) == (865152521)))) : (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (4028769927U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-14238))))) : (var_6)))));
}
