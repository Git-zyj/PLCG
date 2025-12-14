/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33945
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_12 = (!(((/* implicit */_Bool) max((arr_4 [i_0 - 1] [i_2]), (((/* implicit */unsigned int) arr_2 [i_2]))))));
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max((792526967U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)243)) : (((((/* implicit */int) var_8)) % (((/* implicit */int) arr_1 [i_1] [i_2]))))))))))));
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) arr_0 [(short)2]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) min((((unsigned char) (~(((/* implicit */int) var_3))))), (((/* implicit */unsigned char) (!(arr_8 [i_1 - 3] [i_1] [i_1 - 2] [i_3]))))));
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((unsigned short) (short)-7))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) (unsigned char)12);
                }
                var_18 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) (short)-32742)), (arr_4 [i_0] [i_1 + 2])))));
                var_19 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                /* LoopNest 3 */
                for (unsigned short i_5 = 1; i_5 < 17; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_16 [i_6] [i_5 + 1] [i_1 + 2] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_16 [i_5 + 1] [i_5 - 1] [i_1 + 2] [i_0 - 1]))));
                                var_21 = max((max((arr_21 [i_6] [i_5 - 1] [i_5] [i_0 - 1] [(_Bool)1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)243)) && (((/* implicit */_Bool) var_0))))))), (((/* implicit */unsigned long long int) (!(arr_8 [i_5 + 1] [i_1 - 3] [i_5] [i_1 - 3])))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_2), ((unsigned char)12)))) % (((/* implicit */int) max(((unsigned char)10), ((unsigned char)13))))))) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0 - 1] [i_1] [i_1] [i_6] [i_7])))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1 + 1] [i_0] [i_0] [i_0])), (min((var_4), (((/* implicit */unsigned long long int) 1965772049))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_6);
}
