/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39355
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
    var_18 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (short)7168)) >= (((/* implicit */int) (signed char)-115))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            arr_15 [i_0] [i_1] [12LL] [i_2] [i_4] = ((/* implicit */int) (short)24973);
                            var_19 = ((/* implicit */short) ((((((/* implicit */int) (short)7147)) + (((/* implicit */int) var_11)))) + (((/* implicit */int) min((((/* implicit */unsigned short) (short)7168)), (var_2))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_16))) ? (((/* implicit */int) ((2147483629) > (((/* implicit */int) (unsigned short)65532))))) : (((/* implicit */int) arr_1 [i_4]))));
                            var_21 -= ((/* implicit */unsigned int) ((max((((/* implicit */int) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))), ((+(((/* implicit */int) (signed char)-104)))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9623)) ? (((/* implicit */int) (short)-7161)) : (((/* implicit */int) (short)-7169))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)4599)), ((unsigned short)53047)))) : (((/* implicit */int) (short)-7169))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */int) ((-8683003123022368506LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_5] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)15256))) % (4095462886U));
                        }
                        for (short i_6 = 4; i_6 < 20; i_6 += 1) 
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */_Bool) var_8);
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) || (arr_18 [i_6 + 1] [i_6] [i_6 - 2] [i_6] [i_3] [19U])));
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */short) 2147481600);
                        }
                        arr_27 [i_2] [i_1] [i_2] |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)7168)))), (((((/* implicit */int) var_2)) | (((/* implicit */int) var_2))))));
                        var_23 *= ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) (_Bool)1)), (1854513326U)))));
                        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_4))) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)37))))))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)97)) ? (32704) : (((/* implicit */int) arr_1 [i_2])))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */_Bool) var_5);
                        var_27 = ((/* implicit */int) min(((!(((/* implicit */_Bool) var_1)))), ((((+(((/* implicit */int) (short)-29812)))) != (((/* implicit */int) arr_5 [i_0] [i_2] [i_2] [i_7]))))));
                    }
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (unsigned short)65522))));
                    arr_31 [i_2] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-17827))))));
}
