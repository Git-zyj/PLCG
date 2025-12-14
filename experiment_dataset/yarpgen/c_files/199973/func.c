/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199973
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)60))))) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) min((((/* implicit */short) var_4)), (var_3))))))) : ((-((+(-2132966201933035955LL)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) arr_11 [2ULL] [i_1 - 1] [i_2] [i_2] [i_3] [(_Bool)1] [i_4 - 2]);
                                arr_13 [i_0 - 1] [(unsigned char)2] [i_2] [i_4] [i_4 + 1] [(short)7] [i_4 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? ((~(min((((/* implicit */int) (short)-2048)), (arr_10 [i_0] [i_1] [i_2] [i_1] [i_4]))))) : ((~(((/* implicit */int) (short)13301))))));
                                var_14 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min(((short)17284), (((/* implicit */short) (signed char)(-127 - 1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)26638)) && (((/* implicit */_Bool) -5571401125251462561LL))))) : (((/* implicit */int) min(((short)26638), (((/* implicit */short) (signed char)0))))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) var_5))))) : (((((/* implicit */int) var_10)) | (2052904461)))))));
                                var_15 = ((/* implicit */short) ((max((((/* implicit */int) (short)0)), (((((/* implicit */int) (signed char)34)) * (((/* implicit */int) (signed char)34)))))) / (((/* implicit */int) (unsigned short)65054))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) (~((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 2]))))))) >= ((~((~(var_0)))))));
                    var_17 *= ((/* implicit */unsigned char) (signed char)-35);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) var_10);
}
