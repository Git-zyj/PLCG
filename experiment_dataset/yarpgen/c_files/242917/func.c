/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242917
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) var_7);
                var_16 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)7] [i_0]))) : (arr_0 [i_0]))), (arr_0 [i_0])));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) var_8))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) (unsigned char)15))))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) var_13);
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 12; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((short) min((((arr_14 [i_0] [i_0] [(unsigned char)8] [i_4] [(unsigned char)8] [(unsigned char)1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) min((var_2), (((/* implicit */unsigned char) (signed char)10))))))));
                                var_18 = ((/* implicit */_Bool) ((unsigned char) min(((unsigned char)255), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) > (3810450623837142587ULL)))))));
                                var_19 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((arr_0 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (min((arr_9 [i_3 + 2] [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned long long int) (signed char)-104)))))), (((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)113)), ((short)-1940)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-3898))))) : (min((arr_9 [i_0] [i_3] [i_0]), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_0] [i_3 + 1] [i_4] [i_1]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 += ((/* implicit */signed char) ((((/* implicit */int) var_12)) * (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_2))))))));
}
