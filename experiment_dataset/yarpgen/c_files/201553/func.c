/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201553
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
    var_20 += ((/* implicit */short) ((((((/* implicit */_Bool) ((int) 18446744073709551598ULL))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 0)))) : (2347161133581524356LL))) - (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))));
    var_21 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (var_15)))) >= (((/* implicit */int) ((2347161133581524332LL) == (((/* implicit */long long int) ((/* implicit */int) var_16))))))))) >> (((((/* implicit */int) var_12)) + (59)))));
    var_22 = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) (unsigned short)37859)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_19)))))), (((/* implicit */int) var_6))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) arr_1 [i_0]))));
        var_24 = ((/* implicit */long long int) var_19);
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) (-(((int) arr_2 [i_1] [i_1]))));
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_7))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_27 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (signed char)42)), (2347161133581524341LL)));
            arr_8 [i_2] = ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) (unsigned short)65523)), (max((2347161133581524323LL), (((/* implicit */long long int) (unsigned short)51347))))))));
        }
    }
    for (unsigned int i_3 = 4; i_3 < 10; i_3 += 3) 
    {
        var_28 = ((/* implicit */signed char) (-(max((arr_11 [i_3] [i_3 + 3]), (arr_11 [i_3] [i_3 + 2])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_3 - 3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_18)))) ? (((((/* implicit */_Bool) var_16)) ? (arr_7 [i_4] [i_4] [i_3 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4]))))) : (((/* implicit */long long int) arr_11 [i_3 + 1] [i_3 + 3]))));
            /* LoopNest 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_22 [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
                        arr_23 [i_6] [i_5] [i_6] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)237))));
                        arr_24 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_3 + 2] [11LL] [i_3] [11LL] [11LL] [i_3])) == (((/* implicit */int) arr_19 [i_4] [i_6] [i_4] [i_4] [i_3 - 1] [i_3 + 2]))));
                        arr_25 [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_2 [i_3] [i_3]))))) : (((/* implicit */int) ((_Bool) arr_20 [i_3 + 3] [(_Bool)1] [i_5] [(unsigned char)13])))));
                        arr_26 [i_6] [i_5] [i_5] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3 + 2]))) < ((+(arr_11 [(unsigned short)5] [i_6])))));
                    }
                } 
            } 
            var_30 ^= ((/* implicit */long long int) ((int) arr_18 [i_3 + 3] [i_3 + 1] [i_3 - 4]));
        }
    }
}
