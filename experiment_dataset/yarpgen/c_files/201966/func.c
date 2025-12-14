/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201966
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
    var_17 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */long long int) 1423879423U)) & (((((/* implicit */long long int) arr_3 [i_2])) | ((-9223372036854775807LL - 1LL)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 3; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) min((((unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)28791))))), (((/* implicit */unsigned long long int) arr_7 [i_4] [i_1] [i_1] [i_0]))));
                                var_20 = ((/* implicit */int) max((var_20), (arr_8 [i_2] [i_2])));
                                arr_11 [i_0] [i_3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 2] [i_1] [i_0])) * (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [(signed char)16]))))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) max(((signed char)-39), ((signed char)-62))))))));
                                arr_12 [i_1] [i_1 + 2] [i_2] [i_2] [i_4 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-7941)) ? (((((/* implicit */_Bool) ((signed char) arr_10 [i_4] [i_1] [i_1] [i_1] [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((703047385U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1]))))))) : (((long long int) 15867329532600877801ULL)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-127)))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_0] [2ULL] = ((/* implicit */unsigned int) arr_6 [i_0 + 1] [14U] [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) min(((short)7941), (((/* implicit */short) (_Bool)1))))) / (((var_7) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (unsigned short)28677))))) + (1039839000021762028LL)))));
}
