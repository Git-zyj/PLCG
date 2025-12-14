/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211053
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) >= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))));
    var_11 = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) : (((unsigned long long int) 3774392009U)))) != (((/* implicit */unsigned long long int) var_0))));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) (unsigned short)32063)))) : ((((+(((/* implicit */int) (_Bool)1)))) * ((-(((/* implicit */int) var_6)))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((var_7), (((/* implicit */int) arr_1 [(signed char)3]))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_0]))) : (var_8))) < (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [(_Bool)1] [i_1])))))))) : (((/* implicit */int) arr_0 [i_2] [i_1]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [(unsigned short)15] [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 520575285U)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (unsigned short)33472))));
                                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)32063)) : (var_7))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)33464)) || (((/* implicit */_Bool) (unsigned short)33495)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1942190736U)) ? (((/* implicit */unsigned int) 1172351024)) : (1505160755U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [(unsigned char)20] [i_2] [i_3] [i_4] [i_3]))) + (var_0))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (var_5)))))))))));
                                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32049))) : (((((((/* implicit */_Bool) 0U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) * (((/* implicit */unsigned int) ((arr_3 [9ULL]) ? (((/* implicit */int) arr_6 [2] [i_1] [i_3] [i_4])) : (((/* implicit */int) var_6)))))))));
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (~((~(arr_4 [i_4] [i_4] [i_4]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
