/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237143
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
    var_14 = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 16511137007010501581ULL))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) var_12)) + (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 - 1] [i_0]))))) < (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)26817)) : (((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_1]))))))))))));
                    arr_8 [17LL] [17LL] [i_2 - 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)255)) : (arr_2 [i_0]))) > (((((/* implicit */int) (unsigned short)46823)) | (((/* implicit */int) (unsigned char)73)))))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_1)))));
        arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [5U] [i_0] [i_0]))))) < (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [9U]))))))))));
    }
    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_2 [i_3]))));
        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) arr_11 [i_3] [i_3 - 1])))));
        arr_13 [i_3] [i_3] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_3 [17LL] [i_3])) ^ (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) var_1)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((int) (_Bool)1)) == (((/* implicit */int) (unsigned short)28291))))))));
    }
    var_18 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned int) min((var_9), (var_2)))));
    var_19 *= ((/* implicit */unsigned short) ((min((((-6775512387007674848LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38728))))), (((/* implicit */long long int) max((((/* implicit */unsigned char) var_12)), ((unsigned char)109)))))) - (((/* implicit */long long int) 134217728))));
}
