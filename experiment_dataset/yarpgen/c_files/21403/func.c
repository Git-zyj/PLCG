/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21403
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_10 = ((/* implicit */int) var_9);
        arr_4 [i_0] [0ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (445084399U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0])))))));
        var_11 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [(_Bool)1] [5ULL])) : (((/* implicit */int) arr_0 [i_0] [i_0])))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 1; i_5 < 14; i_5 += 1) 
                    {
                        {
                            arr_19 [i_1] [i_2] [i_1] [8U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((long long int) arr_6 [i_5] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)1024)) > (arr_13 [i_3 - 1] [i_2] [i_3 - 1] [i_4]))))) : (((((/* implicit */_Bool) (+(0U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5)))));
                            var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_9 [i_1])), (arr_11 [i_3] [i_3])))) ? (((((/* implicit */_Bool) var_6)) ? (arr_7 [i_2]) : (((/* implicit */int) var_3)))) : (((/* implicit */int) min((arr_6 [i_2] [i_2]), (((/* implicit */unsigned short) var_2)))))))) ? (((/* implicit */int) (short)1024)) : (((/* implicit */int) (unsigned short)65535))));
                            var_13 = ((/* implicit */unsigned int) min((var_13), (max((((/* implicit */unsigned int) ((arr_13 [i_1] [i_3] [i_3 - 1] [i_5]) / (((/* implicit */int) arr_12 [i_3 - 1] [i_5] [i_5 + 3] [i_5]))))), (((max((arr_11 [i_1] [i_5]), (((/* implicit */unsigned int) arr_18 [i_2] [i_2])))) ^ (max((0U), (4294967295U)))))))));
                        }
                    } 
                } 
            } 
            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max((min((((/* implicit */unsigned int) ((int) 0))), ((((_Bool)1) ? (((/* implicit */unsigned int) var_6)) : (arr_11 [i_1] [i_2]))))), (max((max((0U), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65527))))))))))));
        }
        for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    {
                        arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((long long int) (unsigned char)124));
                        arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_6] [i_7] [i_8] [i_8]))) / (arr_23 [i_1] [(_Bool)1] [i_7] [i_8])))) ? (((/* implicit */unsigned long long int) arr_25 [i_1] [i_6] [i_7] [i_8])) : (((((((/* implicit */int) (unsigned short)64511)) >= (((/* implicit */int) var_4)))) ? (((/* implicit */unsigned long long int) 7997116240605638955LL)) : (max((((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [i_6] [i_7] [i_1])), (var_5)))))));
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [i_1])) ? (arr_17 [i_1] [i_8]) : (((/* implicit */unsigned long long int) arr_10 [i_8]))))))));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)9)) % (((/* implicit */int) (short)-8192)))))));
            arr_28 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((int) var_2));
        }
        var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)4)), ((unsigned char)40)))) ? (((/* implicit */int) arr_20 [i_1] [i_1])) : (((/* implicit */int) arr_18 [i_1] [5LL]))))), (((arr_11 [6LL] [i_1]) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1]))) : (arr_23 [i_1] [i_1] [i_1] [i_1])))))));
        var_18 |= ((/* implicit */long long int) (+(((((/* implicit */int) arr_24 [i_1] [(unsigned short)9] [i_1] [i_1] [i_1])) - (max((((/* implicit */int) var_9)), (var_8)))))));
    }
    var_19 *= ((short) min((var_1), (((/* implicit */unsigned char) var_3))));
}
