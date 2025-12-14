/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247814
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) (unsigned short)65532);
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)15966)) == (((/* implicit */int) (signed char)-127))));
                    var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) || (((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 18446744073709551615ULL))))) < ((+(((/* implicit */int) var_16))))))));
                    var_20 = max((max((((/* implicit */unsigned int) var_16)), (max((((/* implicit */unsigned int) (signed char)57)), (4294967284U))))), (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_6 [(signed char)12] [i_1] [i_1])) ^ (arr_4 [i_0])))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)18)), ((((-(((/* implicit */int) var_14)))) % (var_1)))));
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) + (min((((/* implicit */int) ((unsigned char) (signed char)-97))), (((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) var_14)))))))))));
}
