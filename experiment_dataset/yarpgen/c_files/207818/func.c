/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207818
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
    var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -11)) ? (1725444012889509851LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57344)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : ((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))) ? ((~(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) max((min((((int) arr_1 [11LL] [4])), (((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) min(((unsigned short)50518), (((/* implicit */unsigned short) ((arr_7 [i_0] [i_2] [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)11)))))))))));
                    var_22 -= ((/* implicit */_Bool) (unsigned char)239);
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_5 [2LL] [i_1] [i_0]);
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */signed char) arr_10 [i_3]);
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3]))));
        var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(unsigned short)8])) ? (arr_10 [0U]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17104)))))) ? ((((~(1450572523830087038ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23324))))) : (max(((+(arr_3 [i_3] [i_3]))), (((arr_3 [i_3] [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33375)))))))));
        var_25 = ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (short)15308)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-23746))))) : (min((17396049122844076743ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_3]))));
        var_26 = ((/* implicit */int) min((((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) (unsigned short)23147))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_3] [i_3])) ? (arr_11 [i_3]) : (var_4)))) : (max((arr_3 [i_3] [i_3]), (((/* implicit */unsigned long long int) var_14)))))), (((/* implicit */unsigned long long int) var_16))));
    }
    var_27 = ((/* implicit */unsigned char) ((min(((~(4237707657107727658ULL))), (((/* implicit */unsigned long long int) 3820601898U)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (2929803628U)))) ? (max((((/* implicit */long long int) var_10)), (451969120540472702LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)22939))))))))));
}
