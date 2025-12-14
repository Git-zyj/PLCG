/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213009
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
    var_10 -= ((/* implicit */unsigned char) max((var_2), (var_8)));
    var_11 |= (~(((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) var_3)))) >= (((((/* implicit */_Bool) (short)-27399)) ? (-467535137) : (((/* implicit */int) (unsigned short)3))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) (~(min((((/* implicit */int) (unsigned short)65529)), (((((/* implicit */_Bool) 2558975535U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)50332))))))));
                var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) (unsigned char)249)))) : (((/* implicit */int) arr_4 [i_0])))) + (max((arr_2 [i_0]), (arr_2 [i_1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 2; i_2 < 21; i_2 += 4) 
    {
        for (int i_3 = 1; i_3 < 20; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) (unsigned short)15207);
                    var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_4] [i_2 + 1])) && (((/* implicit */_Bool) (-(var_0))))))) & (((((/* implicit */int) ((((/* implicit */int) (signed char)-40)) != (((/* implicit */int) arr_8 [(signed char)20] [17LL]))))) >> (((((arr_5 [i_2]) / (((/* implicit */long long int) 1809824862U)))) + (2473714235LL)))))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50332)))))))), (arr_5 [i_4]))))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_5 [i_2]))) ? (((unsigned long long int) arr_7 [i_3] [i_3] [i_3])) : (((/* implicit */unsigned long long int) (~((-(arr_5 [i_4]))))))));
                }
            } 
        } 
    } 
}
