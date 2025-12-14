/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195482
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
    var_20 = ((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)82)) : (6))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((9793833403062530041ULL) + (((/* implicit */unsigned long long int) -1))))))))));
    var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 8652910670647021587ULL)))))));
    var_22 = ((/* implicit */unsigned int) var_18);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ^ (((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) / (((/* implicit */int) (_Bool)1))))))) ? (min((0), (((/* implicit */int) ((((/* implicit */_Bool) 10358756278766081226ULL)) || (((/* implicit */_Bool) (unsigned char)143))))))) : ((((-(((/* implicit */int) (short)-21421)))) ^ ((+(((/* implicit */int) arr_4 [(signed char)15] [i_1]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_14 [11U] [11U] [7] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((long long int) 828581804)), (((/* implicit */long long int) ((var_1) == (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(short)2] [i_2] [(short)2]))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((828581804) <= (((/* implicit */int) (signed char)-96)))), ((_Bool)1))))) : (8652910670647021575ULL)));
                                var_24 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((576460752303423472ULL) | (9793833403062530041ULL))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) == (var_16)))), (8652910670647021573ULL)))));
                                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(signed char)18] [i_1] [i_0])) ? ((+(((((/* implicit */_Bool) -9223372036854775784LL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-39))))))) : (((/* implicit */long long int) ((((/* implicit */int) var_14)) | (((((((/* implicit */int) arr_8 [14LL] [i_0])) + (2147483647))) << (((/* implicit */int) (_Bool)0))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
