/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209679
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) max(((+(((((/* implicit */_Bool) 2251795518717952ULL)) ? (var_12) : (((/* implicit */unsigned long long int) -1437729389)))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_11)) ? (arr_2 [i_0]) : (((/* implicit */int) (_Bool)1))))))))))));
        var_16 ^= ((/* implicit */_Bool) min((((-6313353321712038167LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (-4LL)));
        var_17 = ((/* implicit */_Bool) arr_2 [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) arr_3 [i_1 - 1]);
        var_19 = ((/* implicit */unsigned long long int) ((((_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1441798601) != (arr_4 [i_1]))))) : (((((/* implicit */_Bool) var_11)) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
        arr_5 [i_1] = ((/* implicit */long long int) 268402688ULL);
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 2) 
                {
                    {
                        var_20 -= (~(arr_7 [i_1] [i_3]));
                        arr_14 [i_3] [i_1 - 2] [i_1 + 2] [i_2] [i_3] [i_4 - 3] = ((/* implicit */long long int) (short)-25835);
                        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) : (arr_12 [i_3] [i_2] [i_2] [i_3] [i_3] [i_4]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_3 [i_4 + 1]))))))));
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_3 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 136069195651976991ULL))))) : (((/* implicit */int) arr_6 [i_1 + 2])));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        arr_17 [i_5] [i_5] = (((+(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [(short)14] [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) 2147483621))))))) % (((/* implicit */int) arr_11 [i_5] [i_5] [(unsigned short)0])));
        arr_18 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (arr_16 [i_5] [i_5]) : (((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_6 [i_5])), (var_3)))) | (268402673ULL)))));
        var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (((/* implicit */int) arr_8 [i_5])) : (((/* implicit */int) var_1)))) >= (((/* implicit */int) (_Bool)1)))))) < (((unsigned int) arr_9 [(_Bool)1] [i_5] [i_5] [i_5]))));
        var_24 = ((/* implicit */unsigned int) arr_15 [i_5]);
        var_25 = ((/* implicit */unsigned int) (unsigned char)0);
    }
    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_14)), (var_6))), (((/* implicit */long long int) (+(var_4))))))), ((-(arr_7 [i_6] [i_6])))));
        var_27 = ((/* implicit */long long int) var_4);
    }
    var_28 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))))), (max(((+(8796093022207ULL))), ((+(var_12)))))));
}
