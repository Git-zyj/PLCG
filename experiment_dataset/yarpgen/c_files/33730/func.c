/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33730
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
    var_20 = ((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((signed char) (short)-3223))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) ((((((-1372240324) - (var_7))) < (((/* implicit */int) ((var_11) || (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_0)))) ? (((unsigned int) arr_2 [i_0] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) : (((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) var_12)))) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
        var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))));
        var_23 = ((/* implicit */short) -8771373025776516258LL);
        arr_3 [i_0] = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) 6997378545246727616ULL))))), ((~(((((/* implicit */_Bool) -8771373025776516286LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0]))))))));
    }
    for (short i_1 = 4; i_1 < 23; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((17671219812274056407ULL) >> (((arr_1 [i_1] [i_1 + 1]) + (3271880544649428484LL)))));
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_1 - 4])) ? (((/* implicit */int) arr_5 [i_2 + 1])) : (((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_0 [i_2 + 1])) : (arr_4 [i_2 + 1]))))) < (((/* implicit */int) min((arr_0 [i_1 - 3]), (arr_0 [i_1 - 3])))))))));
            arr_9 [i_1] = ((/* implicit */_Bool) (unsigned short)62381);
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 4) 
            {
                arr_12 [i_3] = ((/* implicit */short) ((((arr_7 [i_1 + 1]) + (9223372036854775807LL))) >> (((((int) 11458348037256147175ULL)) + (1183682354)))));
                var_25 &= ((/* implicit */unsigned short) ((((1269412228U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 4]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)125)))))));
            }
            /* vectorizable */
            for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_5 = 3; i_5 < 23; i_5 += 4) 
                {
                    arr_17 [i_4] [i_2 + 1] [i_2 + 1] [i_1 + 1] = ((((/* implicit */_Bool) arr_14 [i_4 - 1])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) var_8)))) : (((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_4)))));
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [i_2] [i_4] [i_5] [i_4 - 2] = 6997378545246727609ULL;
                        var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_1 - 2] [i_1 - 4] [i_1 - 4] [i_1 - 4])) < (((/* implicit */int) arr_16 [i_1 - 2] [i_1 - 4] [i_1 - 3] [i_1 - 4]))));
                    }
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((int) arr_18 [i_4 + 1] [i_4 + 1] [i_4] [i_5] [i_7] [i_1 - 3] [i_5 - 1]));
                        var_27 = ((/* implicit */signed char) ((arr_2 [i_2 + 2] [i_2 + 1]) != (arr_2 [i_2 + 1] [i_2 + 2])));
                        var_28 &= ((/* implicit */unsigned short) (-(arr_2 [i_2 + 1] [i_2])));
                    }
                }
                arr_26 [i_1 + 1] [i_2 - 1] [22U] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)60734)) > (((/* implicit */int) arr_11 [i_1] [i_2 + 1] [i_2 + 1])))))));
            }
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) arr_19 [i_2 + 2] [i_2] [i_2 - 1] [i_2 + 1] [i_1 + 1] [i_1] [i_1])), (arr_11 [i_1 - 4] [i_1 - 1] [i_2 + 1])))) ? (((((/* implicit */int) arr_20 [i_1] [(signed char)22] [(unsigned short)10] [i_1] [i_1 - 3] [i_2 + 1] [i_2 + 2])) % (((/* implicit */int) var_1)))) : (((/* implicit */int) ((max((arr_1 [i_1] [i_1]), (((/* implicit */long long int) var_14)))) != (((/* implicit */long long int) ((int) (unsigned char)21)))))))))));
            var_30 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_12)) <= (((((/* implicit */_Bool) arr_16 [i_2 + 1] [(_Bool)0] [i_2] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 + 1]))) : (arr_22 [i_2 + 1])))));
        }
        var_31 = ((/* implicit */short) ((unsigned int) arr_24 [i_1] [(unsigned char)0] [i_1 - 1] [i_1] [i_1]));
        var_32 = ((/* implicit */long long int) min((var_32), (((((/* implicit */_Bool) min((-8080219092689812173LL), (((/* implicit */long long int) max((var_14), (((/* implicit */unsigned int) arr_10 [i_1] [i_1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((arr_13 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_1]))))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_14)) : (arr_1 [i_1 + 1] [i_1 - 2])))))));
    }
}
