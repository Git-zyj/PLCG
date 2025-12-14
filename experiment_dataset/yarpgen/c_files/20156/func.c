/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20156
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_14 = var_2;
                                var_15 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [(short)11] [i_3] [(short)5] [(short)5] [(short)5])) : (((/* implicit */int) arr_2 [i_1] [i_1]))))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) >= (var_5))))))));
                                var_16 = ((/* implicit */_Bool) max(((~(((unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((signed char) var_3))), (((((/* implicit */_Bool) arr_0 [(short)15])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (+(8589869056LL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 3; i_5 < 16; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((short) ((unsigned char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_7 [(unsigned char)15] [(unsigned char)15] [i_2] [1]))))));
                                arr_16 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (var_13) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_5] [i_6])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2])))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [2U] [i_5] [2U] [2U] [i_0]))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [5LL] [5LL] [5LL])) ? (((/* implicit */int) arr_6 [(unsigned short)6] [(unsigned short)6])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) min((((/* implicit */signed char) arr_14 [i_1] [i_1])), (arr_4 [i_0] [i_0] [i_0])))))) : ((-(((((/* implicit */int) var_3)) & (((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) max((var_13), (((/* implicit */unsigned long long int) var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */signed char) var_9)))))) == (min((var_2), (((/* implicit */unsigned int) var_8)))))))) : ((~(var_2)))));
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) var_13)) ? (((var_2) | (var_12))) : (((unsigned int) var_10))))));
}
