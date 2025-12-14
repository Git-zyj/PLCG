/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204551
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
    var_17 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)36197)) / (((/* implicit */int) (signed char)18)))), ((+(var_7)))))) >= (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) & (((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [9U] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_2] [i_3] [i_4])) + (2147483647))) >> (((var_12) - (8189107010782339501ULL)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_14)), ((unsigned short)29338)))) : (((((/* implicit */_Bool) (unsigned short)29339)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
                                arr_15 [i_4] [i_3] [i_1] [i_2] [i_3] [4ULL] = (+(((min((1124386522), (((/* implicit */int) var_8)))) / ((-(((/* implicit */int) var_0)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_0] [(unsigned char)3] [(unsigned char)3] [(unsigned char)3] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)18)) == (((/* implicit */int) (unsigned short)29332))));
                                var_18 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-19)) > (((/* implicit */int) (signed char)126)))) ? (max(((-(var_3))), (((/* implicit */unsigned long long int) min(((-2147483647 - 1)), (((/* implicit */int) arr_5 [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-99)) ? (1829811009) : (((/* implicit */int) (signed char)116))))) ? (max((((/* implicit */unsigned int) arr_0 [i_1])), (var_4))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_5] [i_6] [i_0])) * (((/* implicit */int) (unsigned char)147))))))))));
                                arr_24 [(short)7] [i_5] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) min(((signed char)-111), ((signed char)15))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            {
                                arr_32 [i_0] [i_0] [i_0] [2] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */int) max(((signed char)6), (((/* implicit */signed char) (_Bool)1))))) % (((/* implicit */int) (unsigned short)11320))))));
                                arr_33 [i_0] [i_0] [i_0] [i_2] [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) (~((~((-2147483647 - 1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
