/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219364
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
    var_15 &= (+(max((((/* implicit */unsigned int) (short)22051)), (var_12))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_16 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) (_Bool)1)), (10LL)))))) % (((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))) ? (arr_0 [16LL]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))))))));
        var_17 *= ((/* implicit */signed char) (+(min((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [10ULL]))), (((/* implicit */unsigned long long int) (unsigned char)120))))));
        var_18 = ((/* implicit */unsigned int) var_0);
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (_Bool)1))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) 1180890602U)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)-30207)))) / (((/* implicit */int) (_Bool)1)))))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((((/* implicit */unsigned int) (((+(arr_3 [(signed char)11]))) > (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_1] [i_1]), (((/* implicit */short) var_6))))))))), (arr_3 [(short)11]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 4; i_2 < 11; i_2 += 2) 
        {
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+(arr_4 [i_2 - 3] [i_2 + 3]))))));
            var_23 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)7116)), (arr_0 [i_2]))))))), ((-(((/* implicit */int) var_14))))));
            var_24 = ((/* implicit */unsigned char) var_13);
        }
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 12; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    {
                        var_25 = ((/* implicit */signed char) var_12);
                        var_26 = ((/* implicit */long long int) max(((+(var_8))), (((/* implicit */unsigned int) var_11))));
                        var_27 = ((/* implicit */unsigned short) arr_12 [i_1] [i_3] [i_4] [i_5] [i_4]);
                        var_28 = ((/* implicit */int) var_3);
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((long long int) (!(((/* implicit */_Bool) var_8))))) & (((/* implicit */long long int) ((/* implicit */int) min((arr_10 [i_3] [i_4 + 3] [i_4 - 1] [i_4]), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) < (arr_11 [i_5] [i_5] [i_1]))))))))))));
                    }
                } 
            } 
        } 
        var_30 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_3 [(_Bool)1])) : (var_13))), (((/* implicit */unsigned long long int) arr_3 [i_1]))))));
    }
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        arr_16 [i_6] = ((/* implicit */short) ((((((((var_11) ? (arr_15 [i_6]) : (arr_15 [i_6]))) + (((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_6]))))))) + (9223372036854775807LL))) << (((max(((+(arr_0 [i_6]))), (((/* implicit */unsigned long long int) arr_1 [5ULL])))) - (10607804207398830011ULL)))));
        var_31 = ((/* implicit */int) var_6);
    }
    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) var_11))));
}
