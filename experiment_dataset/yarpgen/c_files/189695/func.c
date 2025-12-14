/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189695
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */int) (unsigned short)37)) : (((/* implicit */int) (short)-17760))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) & (max((((/* implicit */unsigned int) (unsigned short)55)), (1365449613U)))))) : (((((var_4) && (((/* implicit */_Bool) (unsigned short)31)))) ? ((~(arr_3 [i_0] [i_0] [i_0]))) : ((+(arr_2 [i_0])))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65499))) / (234881024U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64604))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (arr_4 [i_0] [i_1]))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)29)) : (((/* implicit */int) var_5)))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (unsigned short)54537))));
                            var_14 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((max((var_8), ((short)17769))), (((/* implicit */short) (!(((/* implicit */_Bool) 1365449604U))))))))));
                            arr_11 [i_3] [i_3] [i_2 - 2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) != (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) arr_1 [i_2 - 2])))))));
                            arr_12 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */long long int) ((arr_9 [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 2]) == (((/* implicit */long long int) ((/* implicit */int) (!((!((_Bool)1)))))))));
                        }
                    } 
                } 
                var_15 ^= ((/* implicit */signed char) var_4);
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_7 [i_1] [i_1] [i_0] [i_0]))))), (((long long int) (_Bool)0))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_1);
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_11)))))));
}
