/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202301
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
    var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))), (((/* implicit */int) ((_Bool) var_16)))))) ? (((((/* implicit */_Bool) ((int) -1832650955))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0)))) : (min((((/* implicit */int) (signed char)-6)), (min((((/* implicit */int) var_3)), (var_10)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_18 ^= ((/* implicit */_Bool) (~(((((((/* implicit */int) var_16)) >= (((/* implicit */int) (signed char)22)))) ? (((/* implicit */int) ((signed char) (unsigned short)0))) : (((/* implicit */int) arr_4 [i_0] [(_Bool)1]))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_5 [i_0 - 1]) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-6)))))))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((11576444162130188262ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_0 [i_0]))))))) ? (((/* implicit */int) ((((/* implicit */int) max((var_1), (var_1)))) >= ((+(((/* implicit */int) (signed char)4))))))) : (((/* implicit */int) var_16))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 9; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) var_16);
                                arr_17 [i_3] [i_3 - 3] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) min((var_0), (((/* implicit */signed char) var_8))))) ? (((((/* implicit */_Bool) var_14)) ? (2132791240053039984ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)32))))))));
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((long long int) var_1))), (((((/* implicit */_Bool) max((arr_9 [i_3] [(_Bool)1] [i_3] [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1))))) ? (((arr_14 [i_3] [i_3] [i_3] [i_0]) / (var_14))) : (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) var_13))))))))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 8; i_5 += 4) 
                {
                    for (signed char i_6 = 2; i_6 < 10; i_6 += 3) 
                    {
                        {
                            arr_25 [i_0 - 1] [i_0 - 1] [2U] &= (signed char)-8;
                            arr_26 [i_0] [i_1] [i_5 + 3] [i_0] = (((-(((/* implicit */int) (signed char)1)))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_6]))) : (5683352537379092975LL))))))));
                            arr_27 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((var_13) ? (((/* implicit */int) (unsigned short)38109)) : (((/* implicit */int) (signed char)6)))) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((unsigned char) -5689347791530501207LL))))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_24 [(_Bool)1] [(_Bool)1])) ? (arr_11 [i_0] [i_0] [i_0] [7LL] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
