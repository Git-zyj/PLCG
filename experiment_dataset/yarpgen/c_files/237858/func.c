/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237858
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] = var_14;
                                arr_16 [i_3 - 1] [i_3 - 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) % (((/* implicit */int) ((min((((/* implicit */int) var_18)), (arr_12 [i_0] [i_0] [18U] [i_3 - 1] [(_Bool)1]))) < (((/* implicit */int) var_12)))))));
                                var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_11 [(signed char)14] [i_1] [16U] [i_2 + 2] [i_1 + 1]), (arr_11 [i_0] [i_1] [i_0] [i_2 - 2] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_11 [i_0] [8U] [i_3] [i_2 - 2] [i_1 + 1])) ? (((/* implicit */int) arr_11 [i_0] [i_2 - 1] [i_2] [i_2 - 3] [i_1 - 1])) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_2] [i_2 - 3] [i_1 - 1])))) : (((/* implicit */int) min((arr_11 [(_Bool)1] [i_1 - 1] [i_2 + 1] [i_2 + 2] [i_1 + 1]), (arr_11 [i_0] [i_2] [14U] [i_2 - 2] [i_1 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_20 ^= max((((/* implicit */unsigned int) var_8)), (arr_13 [i_2 + 1] [i_2] [i_2] [i_2]));
                                var_21 = ((/* implicit */short) min((var_5), (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)65527), (((/* implicit */unsigned short) arr_22 [(unsigned char)11] [i_1] [i_1] [i_1] [(unsigned char)16] [i_1] [i_1]))))))))));
                                arr_23 [i_0] [1ULL] [i_2] [i_5] [i_6] = ((/* implicit */short) arr_18 [i_0] [i_1 + 1] [7LL] [(short)11]);
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)4))))) % (((/* implicit */int) var_17))))) % (min((max((var_2), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)228))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) (unsigned char)52);
    var_24 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? (((/* implicit */int) ((max((var_1), (((/* implicit */unsigned int) var_12)))) >= (((/* implicit */unsigned int) ((/* implicit */int) max((var_18), (var_12)))))))) : (((/* implicit */int) var_13)));
}
