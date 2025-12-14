/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53209
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
    var_20 = ((/* implicit */int) (~(min((var_12), (((/* implicit */long long int) var_9))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        arr_4 [i_0 - 1] = ((/* implicit */short) min((4414378658233872680LL), (var_14)));
        arr_5 [i_0] = ((/* implicit */signed char) (~((-(arr_3 [i_0 + 1] [i_0 - 2])))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) var_8);
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6ULL)) ? (15ULL) : (35184372088831ULL))))))), (var_19))))));
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                arr_13 [(short)5] [i_1] [13U] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_7 [i_1 + 3]) : (6677142784668939982ULL))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (6677142784668939974ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (6677142784668939976ULL))) : (11769601289040611632ULL)))));
                arr_14 [(signed char)6] [i_2] [16U] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) arr_8 [i_2])))))))));
            }
            arr_15 [i_1] [21] [i_1] = ((/* implicit */unsigned long long int) (~(2809145275U)));
            /* LoopSeq 2 */
            for (long long int i_4 = 2; i_4 < 22; i_4 += 3) 
            {
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~((~(9223372036854775789LL))))))));
                arr_19 [8U] [i_2] [i_1] [9LL] = ((/* implicit */signed char) arr_10 [i_1 + 3]);
                /* LoopSeq 4 */
                for (long long int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
                {
                    arr_22 [i_5] [i_1] [i_1] [i_1 - 2] = ((/* implicit */unsigned short) arr_1 [i_1]);
                    arr_23 [(unsigned short)22] [i_4 - 1] [i_1] [(unsigned short)22] = ((/* implicit */signed char) max((arr_17 [i_1] [i_2] [1LL]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_4 + 1])))))));
                    var_24 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)254))))) + (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) -823325144)) : (arr_0 [21]))))));
                }
                for (long long int i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
                {
                    arr_26 [i_2] [i_1] = ((/* implicit */long long int) ((short) (~(arr_16 [i_4 + 1] [i_4 - 2] [i_1 + 1]))));
                    var_25 += ((/* implicit */long long int) (!(((/* implicit */_Bool) max((-823325127), (((/* implicit */int) (short)12141)))))));
                }
                for (long long int i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_4 - 1])) ? (((/* implicit */int) arr_11 [i_1 - 2] [i_4 - 2])) : (((/* implicit */int) arr_17 [i_4 - 2] [i_7] [i_1 - 1]))))) ? (((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)254))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (var_0) : (((/* implicit */int) (signed char)-105))))))))));
                    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_10 [5ULL]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(signed char)20] [(unsigned short)17] [(signed char)20] [i_7]))))))) : (max((((/* implicit */long long int) arr_2 [i_1 - 2] [i_1 - 2])), (arr_6 [i_1] [i_1])))))))))));
                }
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned int) arr_3 [21] [21]);
                    var_29 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_4 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_8)))) : (11769601289040611628ULL)));
                }
                var_30 = ((/* implicit */unsigned short) arr_18 [i_1 - 1] [i_1 - 1] [i_1 - 1] [(signed char)1]);
            }
            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                var_31 += ((/* implicit */signed char) max((arr_32 [i_1 - 2] [i_2] [i_9] [i_9] [20U]), (((((/* implicit */_Bool) 18446744073709551607ULL)) ? (max((((/* implicit */int) var_11)), (var_9))) : (((/* implicit */int) ((unsigned short) (unsigned char)255)))))));
                var_32 = ((/* implicit */long long int) ((((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_29 [i_1] [i_1 - 1] [(unsigned short)21] [(unsigned short)21])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_9]))))))) < (var_14)));
                var_33 = var_2;
                arr_36 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) max((var_5), ((signed char)-36)))) * ((+(((-823325145) / (((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [(unsigned short)11]))))))));
                var_34 += ((/* implicit */long long int) (signed char)-101);
            }
        }
        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? ((+(((/* implicit */int) ((unsigned short) 11769601289040611645ULL))))) : (((/* implicit */int) (unsigned char)32))));
    }
    var_36 ^= ((/* implicit */unsigned int) (short)258);
    var_37 = ((/* implicit */unsigned short) ((unsigned int) ((((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25171))) : (6677142784668939966ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)27))))));
}
