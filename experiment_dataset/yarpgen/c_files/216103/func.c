/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216103
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
    var_18 = var_4;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_19 *= ((/* implicit */unsigned long long int) (unsigned short)28880);
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) 2688758747U);
                        arr_13 [i_3] [i_2] [i_3] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) var_9);
                        arr_14 [i_2] [i_1] [i_2] [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) var_14);
                        arr_15 [i_1] [i_0] [i_2] = ((/* implicit */long long int) ((max((arr_4 [i_1] [12ULL]), (arr_4 [i_1] [i_1]))) - (((/* implicit */unsigned long long int) (-((+(var_15))))))));
                    }
                    for (long long int i_4 = 2; i_4 < 12; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)54586))))) == (((3679097181U) >> (((((/* implicit */int) (unsigned short)65527)) - (65496)))))))) | (((/* implicit */int) var_5))));
                        var_22 = ((/* implicit */long long int) min((var_22), ((+(((arr_1 [i_4 - 2]) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)6680))) >= (arr_11 [(unsigned short)3] [i_1])))))))))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~(((((/* implicit */int) (unsigned char)4)) - (arr_12 [i_4] [i_4] [i_4 + 1] [i_0]))))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)14448)) & (((/* implicit */int) ((((((/* implicit */_Bool) 615870117U)) ? (((/* implicit */int) (short)18876)) : (((/* implicit */int) (short)18876)))) != (((/* implicit */int) min(((unsigned short)28672), ((unsigned short)7925)))))))));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775798LL)) ? (((((/* implicit */_Bool) var_12)) ? (arr_1 [i_1]) : (((/* implicit */long long int) arr_12 [i_0] [i_5] [i_5] [i_0])))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_2])))) - (((((/* implicit */int) (unsigned short)54586)) - (arr_16 [i_2] [i_2] [i_0])))))))))));
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 615870106U))))), (min((((/* implicit */unsigned short) (signed char)-54)), (var_17)))))) ? (((/* implicit */int) ((unsigned short) 8463492468014777613LL))) : (((/* implicit */int) arr_3 [i_5]))));
                    }
                }
            } 
        } 
    } 
}
