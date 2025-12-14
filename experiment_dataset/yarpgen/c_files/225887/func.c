/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225887
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) <= (((3862024067U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) + ((-(((/* implicit */int) var_2))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2 - 1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))), ((+(arr_7 [i_0])))))) : (18446744073709551608ULL)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] |= ((/* implicit */_Bool) var_6);
                                var_13 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_9 [i_0])))) : (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(signed char)18] [i_1] [i_2 - 1] [i_3] [i_4 - 1]))) : (18446744073709551608ULL))))), (((/* implicit */unsigned long long int) max((arr_14 [i_0] [(short)7] [10] [i_3] [i_4]), (((/* implicit */int) arr_13 [i_2 - 1] [i_1] [i_2 - 1] [i_4 - 1] [i_4 + 2])))))));
                                var_14 = ((/* implicit */int) max((var_14), (arr_4 [(_Bool)1] [i_4])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] = ((/* implicit */long long int) min(((_Bool)1), (((_Bool) arr_4 [i_0] [i_1]))));
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_5]))))) % (((/* implicit */int) ((((/* implicit */int) arr_20 [i_2 - 1] [i_2 - 1] [(_Bool)1] [(_Bool)1])) <= (((/* implicit */int) arr_20 [i_2 - 1] [i_2 - 1] [i_2] [(unsigned char)16])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = min((((/* implicit */int) (unsigned char)128)), (524287));
}
