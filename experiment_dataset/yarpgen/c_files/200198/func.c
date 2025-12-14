/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200198
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((arr_0 [i_0]) ^ (((/* implicit */unsigned int) -703078923)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)12288)))))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (max((703078923), ((~(((/* implicit */int) (signed char)127))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(var_9))) / (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-4)), (var_2)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) || (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) min((arr_10 [i_0] [i_0 + 1] [i_2] [i_2] [i_2 + 2]), (((/* implicit */unsigned short) var_6)))))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((((/* implicit */int) min((((((/* implicit */_Bool) (signed char)-125)) && (((/* implicit */_Bool) var_0)))), (arr_11 [i_4] [(_Bool)1] [i_0])))), (min(((+(-703078933))), (((/* implicit */int) min(((unsigned short)65161), (((/* implicit */unsigned short) var_7))))))))))));
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [i_1] [i_1])), (((unsigned int) (unsigned short)29327))))) ? (((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */unsigned long long int) 703078935)) : (11085106026104298715ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_4]))))))));
                                var_17 = ((/* implicit */short) var_12);
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (min(((~(((/* implicit */int) arr_4 [i_0] [i_0])))), (max((((/* implicit */int) (unsigned short)23530)), (-1))))) : (((/* implicit */int) min(((short)4463), (((/* implicit */short) arr_11 [i_0 + 1] [i_2] [8U])))))));
                            }
                        } 
                    } 
                } 
                var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_0] [2LL] [(unsigned char)5]))))) ? (((/* implicit */int) arr_8 [i_0 - 2] [2LL] [i_0] [i_0] [i_1])) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_1] [6U])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_8 [i_1] [i_0] [i_0] [i_0 - 2] [i_0]))))));
                arr_12 [i_1] [i_1] [i_0 + 1] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))))) * (min((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])), (-1))));
                var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)25)), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)39)) / (((/* implicit */int) (unsigned short)65526))))) ? (((/* implicit */int) (unsigned short)1)) : ((+(((/* implicit */int) var_2))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (315487930U))))), (((unsigned int) var_8))));
}
