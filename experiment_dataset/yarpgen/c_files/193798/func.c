/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193798
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
    var_19 = ((/* implicit */int) var_6);
    var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)11), (((/* implicit */short) ((unsigned char) 28))))))) - (((((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_12))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_10)) / (var_5)))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2 - 3] = ((/* implicit */unsigned long long int) var_0);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35764))) <= (arr_11 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0]))), ((!(((/* implicit */_Bool) 2147483632))))))))));
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4 - 2] [i_2] [i_0 - 1])) ? (arr_7 [i_4] [i_2] [i_0 + 2]) : (((/* implicit */int) (unsigned short)29771))))) ? (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_5))) >> (((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) min(((!((_Bool)1))), ((_Bool)1)))))));
                                var_23 = ((/* implicit */long long int) ((max((var_18), (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (!(((/* implicit */_Bool) 367884843U)))))));
                                var_24 ^= (~((~(max((((/* implicit */unsigned long long int) var_15)), (var_6))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) -312982445))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (367884843U)))) : (((((/* implicit */_Bool) var_15)) ? (235722972) : (((/* implicit */int) var_14))))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) 2005390482)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3927082460U))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_17)) : (-1116331393)))))))));
    var_26 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((min((var_8), (var_16))) + (2147483647))) >> (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_17)) : (var_16))) + (28)))))), (var_4)));
}
