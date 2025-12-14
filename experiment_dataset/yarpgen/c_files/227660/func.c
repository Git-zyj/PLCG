/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227660
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
    var_16 = ((/* implicit */int) (short)-19000);
    var_17 ^= min(((+(((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) var_12)), ((short)-18996)))) && ((!(((/* implicit */_Bool) (short)19004))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) ((((unsigned int) (short)-19000)) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2982996791182915162LL)) ? (((/* implicit */int) arr_4 [i_1] [i_1 - 3])) : (((/* implicit */int) arr_4 [i_0] [i_1 - 1])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((min((arr_0 [i_1 - 2]), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-18999)) & (((/* implicit */int) arr_3 [i_0] [i_3])))))))) | (((((((/* implicit */long long int) ((/* implicit */int) (short)19004))) & (607566815678149658LL))) | (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_2] [i_3] [i_4] [i_4] [i_0])) | (arr_9 [i_0] [i_1 - 1] [i_0]))))))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)19009))))) >= ((((-(var_3))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 2])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (signed char i_6 = 4; i_6 < 15; i_6 += 3) 
                    {
                        {
                            arr_17 [i_5] [i_5] = ((/* implicit */long long int) (short)18994);
                            var_21 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((((/* implicit */int) (short)-19018)) * (((/* implicit */int) (short)-18996))))) / (((((/* implicit */_Bool) (signed char)108)) ? (4294967295U) : (((/* implicit */unsigned int) -246156321)))))) < (min(((~(var_3))), (((/* implicit */unsigned int) (short)-18996))))));
                            var_22 &= ((/* implicit */unsigned int) (short)-18984);
                            var_23 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_3) / (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_6]))))) ? (((((((/* implicit */int) (short)-19023)) + (2147483647))) >> (((((/* implicit */int) (short)18991)) - (18985))))) : (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (signed char)94)))))))), (((long long int) ((((/* implicit */_Bool) (short)19002)) ? (((/* implicit */int) (short)18999)) : (arr_7 [i_6] [i_1]))))));
                        }
                    } 
                } 
                arr_18 [i_0] = ((/* implicit */int) var_10);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-102)) : (var_9))), (((/* implicit */int) (unsigned short)45358))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2722341819U) + (var_3)))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)18994)))))))) : ((+(((((/* implicit */_Bool) (short)18992)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_7)))))));
}
