/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236492
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                arr_7 [i_0] [16] [i_2] [i_2 + 1] &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 + 2])) < (((/* implicit */int) arr_1 [i_1 + 1])))))));
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) (unsigned char)72))))), (arr_5 [i_1 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)237))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)248)), (5022074560038851600LL)))))))) : (((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2] [i_2 - 1])))))));
            }
            for (unsigned short i_3 = 3; i_3 < 14; i_3 += 2) /* same iter space */
            {
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((/* implicit */int) (!(((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) (unsigned char)8)))))))));
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) 2068405556))));
                /* LoopSeq 3 */
                for (unsigned int i_4 = 1; i_4 < 14; i_4 += 4) 
                {
                    var_14 -= ((/* implicit */unsigned short) arr_1 [i_4]);
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((min((((((/* implicit */int) (unsigned short)411)) ^ (((/* implicit */int) (unsigned char)237)))), (((((/* implicit */int) var_5)) & (((/* implicit */int) arr_2 [i_4])))))), (((/* implicit */int) arr_11 [i_1] [i_1])))))));
                }
                for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    var_16 += (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 2]))) ^ (arr_5 [i_1 - 1])))));
                    var_17 -= ((/* implicit */unsigned char) arr_1 [i_5]);
                    var_18 = ((/* implicit */unsigned char) ((_Bool) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) arr_13 [13LL] [i_5])))))));
                }
                for (unsigned char i_6 = 1; i_6 < 16; i_6 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_3 + 3]))))) < (((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_0] [i_1 + 2] [i_3 - 3] [4U])), ((unsigned char)247)))))) ? (min((((/* implicit */int) arr_13 [i_0] [i_1 - 1])), ((-(((/* implicit */int) arr_11 [i_6] [i_3])))))) : (((int) ((4292870144U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [15] [15] [15] [15] [i_1] [i_1 - 2]))))))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        arr_21 [i_0] [i_1 - 1] [i_1 - 1] [7LL] [i_6] [i_7] = ((/* implicit */signed char) min((((/* implicit */long long int) min(((-2147483647 - 1)), (((/* implicit */int) (signed char)56))))), (min((((/* implicit */long long int) (signed char)101)), (arr_12 [i_1 + 2] [i_7])))));
                        var_20 = arr_9 [i_0];
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((arr_6 [i_6]) / (((/* implicit */unsigned long long int) -239704601))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1 - 1]))) : (1450004803743407849ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) : (0LL)))) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_3 + 1] [i_3 + 1] [i_7])) : ((+(((/* implicit */int) var_4))))))))))));
                    }
                }
                var_22 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned char)36)) ? (arr_9 [i_1 - 2]) : (((/* implicit */int) (unsigned char)19))))));
            }
            for (unsigned short i_8 = 3; i_8 < 14; i_8 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_8 + 3] [i_8 + 3] [i_8 + 2] [i_8 - 2] [i_8 + 3]))))) ? (((/* implicit */int) arr_0 [i_8 - 1] [i_1 + 1])) : (((((/* implicit */_Bool) (unsigned char)92)) ? ((+(var_6))) : (((/* implicit */int) ((unsigned short) var_6)))))));
                /* LoopSeq 2 */
                for (unsigned short i_9 = 1; i_9 < 16; i_9 += 2) 
                {
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) max((((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_9])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1 - 1] [i_8 + 2]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_0] [i_1] [i_8] [i_0] [i_8 + 1] [i_1]))))))))));
                    var_25 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_8 - 1] [i_1 - 1]))) : (var_0))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)199))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_13 [i_8 + 3] [i_9 - 1]))))), (arr_0 [i_1] [i_8]))))));
                }
                for (int i_10 = 2; i_10 < 16; i_10 += 4) 
                {
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30034))) : (var_9)))) || (((/* implicit */_Bool) ((0) | (((/* implicit */int) (signed char)-4)))))))), (min((((/* implicit */unsigned long long int) arr_18 [i_8 - 3] [i_10 - 2])), (11547448222147350879ULL))))))));
                    arr_30 [6LL] [i_8] [6LL] [i_8] [(unsigned short)2] [i_10] = ((/* implicit */unsigned char) ((arr_12 [i_1 + 1] [i_10 - 1]) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) <= (arr_12 [i_1 + 1] [i_10 - 1])))))));
                }
                arr_31 [i_8] [i_1 - 1] [i_8] [(unsigned char)11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 + 2])) ? (arr_10 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 2]) : (arr_10 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 - 1])))) ? (arr_10 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 2]) : (((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 + 2])) ? (arr_10 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 - 1]) : (arr_10 [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 + 2])))));
                var_27 = ((/* implicit */signed char) 1618922244);
            }
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_24 [i_0] [(unsigned char)6] [i_0] [i_1])) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)8)))))))))));
        }
        arr_32 [i_0] = ((/* implicit */unsigned int) min((((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_12 [i_0] [i_0]))), (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [(unsigned char)16] [i_0] [i_0]))))), (var_6))))));
        var_29 ^= ((/* implicit */unsigned char) max((min((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) (~(727999308))))));
        arr_33 [(unsigned char)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_3)))) ? (arr_23 [i_0] [i_0] [i_0]) : (min((arr_23 [i_0] [i_0] [i_0]), (arr_23 [i_0] [i_0] [i_0])))));
    }
    var_30 *= ((/* implicit */unsigned char) 0U);
    var_31 ^= ((/* implicit */signed char) (short)22560);
    var_32 = ((/* implicit */unsigned long long int) ((signed char) min((var_8), (var_8))));
}
