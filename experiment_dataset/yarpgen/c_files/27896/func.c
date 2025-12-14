/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27896
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_11 &= var_10;
        arr_3 [i_0] &= ((((/* implicit */long long int) ((((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) | (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) arr_1 [i_0])))))))) != (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) var_0))))) : (max((((/* implicit */long long int) arr_2 [i_0])), (var_6))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_12 = ((/* implicit */_Bool) max((var_12), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_0]))) < (((15848633835758585814ULL) * (((/* implicit */unsigned long long int) 9223372036854775807LL))))))));
            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) <= (2598110237950965802ULL))))));
            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (~(((((/* implicit */int) (signed char)35)) % (arr_0 [i_1]))))))));
        }
        for (short i_2 = 2; i_2 < 15; i_2 += 3) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((arr_0 [i_2 - 2]) + (arr_0 [i_0]))))));
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((_Bool) arr_5 [i_2 + 1] [i_2 + 1])))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((long long int) var_3)))));
                arr_13 [i_0] [i_2] [i_0] |= (~(min((((/* implicit */unsigned int) max((2147483647), (((/* implicit */int) arr_10 [i_4] [i_4] [i_4]))))), (var_1))));
                arr_14 [i_0] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) arr_0 [i_2])) ? (((arr_11 [i_0] [i_2 - 1] [i_4]) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))))) : (((((/* implicit */unsigned long long int) var_1)) ^ (var_2)))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 2598110237950965788ULL))) ? (min((arr_16 [i_4] [i_4] [(unsigned char)12] [i_2 - 1] [i_2 + 1] [i_2]), (arr_16 [i_6] [i_0] [i_4] [i_2 - 1] [i_0] [i_0]))) : ((~(arr_16 [i_4] [i_4] [i_4] [i_2 - 1] [i_2] [i_2]))))))));
                            arr_19 [i_6] [i_5] [i_4] [i_2] [i_0] &= ((/* implicit */signed char) max(((+(((/* implicit */int) ((var_4) && (((/* implicit */_Bool) var_6))))))), ((~((+(((/* implicit */int) arr_6 [i_0] [i_6]))))))));
                            var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)70))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_7 = 3; i_7 < 14; i_7 += 3) 
            {
                arr_23 [i_2] &= (+(((/* implicit */int) arr_4 [i_2 - 2] [i_7 + 2])));
                arr_24 [i_0] [i_0] [i_0] [i_2] |= ((/* implicit */unsigned int) ((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                var_20 |= ((/* implicit */_Bool) ((((/* implicit */int) ((2598110237950965792ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) / (((/* implicit */int) arr_12 [i_7 - 1] [i_2 - 1] [i_2 - 1]))));
                var_21 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))) > (((unsigned int) arr_11 [i_0] [(unsigned char)11] [i_7]))));
            }
            var_22 -= ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) ((var_6) & (((/* implicit */long long int) ((/* implicit */int) var_3))))))), ((+((~(((/* implicit */int) arr_4 [i_2 - 2] [i_0]))))))));
        }
        for (long long int i_8 = 2; i_8 < 12; i_8 += 3) 
        {
            var_23 -= ((/* implicit */signed char) max(((+(max((((/* implicit */unsigned long long int) (_Bool)0)), (18446744073709551606ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (short)-21941)) > (2147483647)))))))));
            var_24 |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)123)) | ((~(((/* implicit */int) (_Bool)1))))));
        }
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)41)) ? (((((/* implicit */_Bool) arr_2 [i_9])) ? (((/* implicit */int) var_10)) : (arr_0 [i_9]))) : ((-(((/* implicit */int) var_8)))))), (((2047) + (((/* implicit */int) arr_10 [i_9] [i_9] [i_9])))))))));
        var_26 -= ((/* implicit */short) (~(((((((/* implicit */int) var_7)) >= (arr_7 [i_9] [i_9] [i_9]))) ? (((/* implicit */int) min(((short)-31701), (((/* implicit */short) arr_6 [i_9] [i_9]))))) : (((/* implicit */int) ((((/* implicit */int) arr_20 [i_9])) > (arr_22 [i_9]))))))));
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((max((((((/* implicit */int) (short)-10545)) + (-28))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_8 [i_9]))))))) == ((+(((/* implicit */int) arr_20 [i_9])))))))));
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (+(1754993776))))));
    }
    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) var_5))));
    /* LoopNest 3 */
    for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
    {
        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 1) 
            {
                {
                    var_30 ^= ((/* implicit */short) ((((((/* implicit */int) arr_12 [i_11] [i_12 + 2] [i_12 + 2])) - (((/* implicit */int) arr_25 [i_10] [i_12 + 2] [i_12])))) + (min((((/* implicit */int) arr_25 [i_11] [i_12 + 2] [i_12])), (28)))));
                    var_31 -= ((/* implicit */long long int) max((((/* implicit */int) arr_27 [i_10])), (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_26 [i_12]))))) ? (((/* implicit */int) ((unsigned short) var_5))) : ((+(arr_16 [i_10] [i_10] [i_11] [i_10] [i_12] [i_12 + 2])))))));
                }
            } 
        } 
    } 
    var_32 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (_Bool)0)))));
    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (~(min((((/* implicit */long long int) (~(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_6)) ? (1957445501165438709LL) : (((/* implicit */long long int) -2147483634)))))))))));
}
