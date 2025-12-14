/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195995
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_18 = max(((short)1012), (((/* implicit */short) (unsigned char)207)));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (var_6)))) ? (((/* implicit */int) arr_3 [i_3] [i_4 - 1] [i_4 + 1])) : (((/* implicit */int) arr_14 [i_0] [i_2] [i_2] [i_0] [i_4 - 1]))))) ? (max((((/* implicit */int) ((((/* implicit */int) arr_10 [i_4] [i_2] [i_2] [(signed char)11])) == (((/* implicit */int) (unsigned short)65535))))), ((~(var_2))))) : (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_3)) : (var_2))) & (max((var_17), (((/* implicit */int) arr_9 [i_4] [10U] [5]))))))));
                                arr_15 [(short)11] [i_1] [i_3] [i_0] [i_4 - 1] [i_0] [i_4 + 1] = ((/* implicit */unsigned long long int) (unsigned short)65527);
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_10))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (short i_6 = 2; i_6 < 9; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (((+(((unsigned int) var_0)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) -1895606148)))))))))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */int) var_10)), (1848147667))) : ((+(((/* implicit */int) (signed char)-120)))))) ^ (((/* implicit */int) (short)9514)))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) max(((unsigned char)57), ((unsigned char)207)));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_13))));
                                arr_25 [i_0] [1ULL] [i_2] = ((/* implicit */unsigned int) (~(var_11)));
                                var_25 = ((/* implicit */unsigned long long int) var_0);
                                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) max(((-(var_17))), (((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                    var_27 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)49)))))) <= ((+(((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned long long int) var_2)) : (16535092755790900676ULL)))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)8))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((var_16) ^ (var_14))) : (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-120), (var_13)))))))));
}
