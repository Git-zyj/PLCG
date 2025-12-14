/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234616
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) max((arr_1 [i_0] [4U]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [(_Bool)1] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) + (2147483647))) << (((min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (18446744073709551615ULL))) - (18446744073709551530ULL)))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) (((-2147483647 - 1)) >= (((/* implicit */int) (short)23021))))), (arr_1 [i_0] [16U])))));
        arr_6 [(signed char)0] &= ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_4 = 3; i_4 < 16; i_4 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned int) var_2);
                            var_21 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
                            arr_20 [12] [i_1] [i_1] [12] [i_4] [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) ^ (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23022)))));
                        }
                        for (unsigned int i_5 = 3; i_5 < 16; i_5 += 1) /* same iter space */
                        {
                            var_22 = ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0]))) : (((unsigned long long int) -5784680665638558960LL)));
                            arr_25 [i_0] [i_1] [i_0] [i_3] [i_5 - 1] = ((/* implicit */unsigned int) arr_18 [i_1] [i_1] [(signed char)16] [i_1] [i_1] [(unsigned char)15]);
                        }
                        for (unsigned int i_6 = 3; i_6 < 16; i_6 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)18779)) : (((/* implicit */int) var_13))))), (((((/* implicit */unsigned long long int) ((int) var_11))) % (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) arr_19 [i_1] [i_1])) : (arr_16 [i_1] [i_2] [i_1] [i_2]))))))))));
                            var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_18 [i_6] [i_3] [i_2] [i_1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_0] [i_1] [i_6] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_12 [i_0] [(_Bool)1] [i_1] [i_0]))))) % (((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)-23044))) & (var_19))), (3139716688U))))));
                            arr_28 [i_6] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_6 - 3] [i_6 - 2] [i_6] [i_6 + 1] [i_6] [i_6 - 3])) ? (max((arr_23 [i_6 - 1] [i_6 + 1] [i_6] [i_6 - 3] [i_6]), (arr_18 [i_6 + 1] [i_6 + 1] [(signed char)14] [i_6 + 1] [3LL] [i_6 + 1]))) : (((((/* implicit */_Bool) arr_23 [i_6 - 3] [i_6 + 1] [i_6 - 1] [i_6 - 1] [1U])) ? (arr_23 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6 - 1] [i_6]) : (arr_23 [i_6 - 1] [i_6 - 2] [i_6] [i_6 - 2] [i_6])))));
                            arr_29 [i_0] [i_1] [i_2] [i_6] [i_6] = ((/* implicit */signed char) (unsigned char)226);
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((var_3) >= (((/* implicit */long long int) arr_22 [i_0] [i_0] [i_2] [i_3] [i_6])))))));
                        }
                        arr_30 [i_3] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)0)) % (((/* implicit */int) (signed char)-96)))) << (((/* implicit */int) ((((/* implicit */int) (short)6)) != (((/* implicit */int) (short)896)))))));
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)211)) : ((+(arr_23 [i_3] [i_1] [i_2] [i_1] [i_0])))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        var_27 += ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_31 [i_7])) ? (((/* implicit */int) arr_32 [i_7] [i_7])) : (var_7))));
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-905)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) (_Bool)1))) : (max((65535), (((/* implicit */int) arr_32 [i_7] [i_7]))))))) ? (min((((/* implicit */unsigned long long int) ((-1601777239) * (((/* implicit */int) arr_32 [i_7] [i_7]))))), (var_2))) : (((((unsigned long long int) arr_32 [i_7] [i_7])) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_16))))))));
    }
    var_29 = ((/* implicit */unsigned long long int) ((_Bool) var_9));
    var_30 -= ((/* implicit */short) 0ULL);
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1073741823)) ? (var_9) : (((((/* implicit */_Bool) (short)23043)) ? (var_9) : (var_2)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) + (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))))) : (((var_12) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_2))) : (((/* implicit */unsigned long long int) ((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))))));
}
