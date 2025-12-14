/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25869
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
    var_12 = ((/* implicit */unsigned long long int) var_10);
    var_13 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_0))) << (((/* implicit */int) ((((/* implicit */int) (signed char)-8)) < (((/* implicit */int) ((((/* implicit */int) (short)-32761)) == (((/* implicit */int) var_8))))))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) ((long long int) (_Bool)1))))))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (var_0))) : (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) ((9223372036854775792LL) <= (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-84)))))))) : ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) var_11))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (var_0)))) ? (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_5 [i_0 - 1] [i_1 + 1] [i_1])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1] [i_1])) | (arr_2 [i_0 + 2])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_10))))) : (min((939095095U), (((/* implicit */unsigned int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] [i_3] [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-27369)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)42234), (((/* implicit */unsigned short) (unsigned char)130)))))) : (arr_6 [i_0] [i_1] [i_2] [i_3]))) == (min((((/* implicit */unsigned int) min(((-2147483647 - 1)), (((/* implicit */int) arr_3 [i_2]))))), (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2)))))))));
                                arr_15 [i_1] [i_1 - 1] = ((/* implicit */unsigned short) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
