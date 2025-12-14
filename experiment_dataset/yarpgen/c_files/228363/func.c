/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228363
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
    for (unsigned char i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((0U) <= (((((((/* implicit */_Bool) 4U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1401952963U))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)73))))))))));
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1] [i_1]) ^ (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6757))) : (4294967275U)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) | (((/* implicit */int) var_15))))), (min((13867266039810513457ULL), (((/* implicit */unsigned long long int) var_15)))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (2893014333U))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_4] [i_4] [i_1] [0LL] [i_0] [i_2] = ((/* implicit */short) max(((((+(4294967295U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1401952963U)))))))), (max((max((((/* implicit */unsigned int) (short)-20017)), (4294967280U))), (((/* implicit */unsigned int) (-(arr_9 [i_4] [(unsigned short)6] [(unsigned char)7] [i_3] [i_1] [i_4]))))))));
                                arr_13 [(unsigned char)5] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) arr_5 [i_0] [i_1] [(unsigned short)4] [i_3]);
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))) ^ (arr_6 [i_0] [i_1] [7U]))), (max((((/* implicit */long long int) arr_1 [i_2])), (-8674953580334686689LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) (unsigned char)228)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775784LL)) ? (-8674953580334686708LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) (unsigned char)240)), (-8674953580334686696LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)18)))))))) ? (((((/* implicit */_Bool) var_14)) ? ((+(-9223372036854775784LL))) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (4294967278U) : ((~(2748382126U))))))));
}
