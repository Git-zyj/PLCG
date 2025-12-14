/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45243
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((4611686018427387903LL), (((/* implicit */long long int) arr_2 [i_4]))))) ? (((/* implicit */int) ((4611686018427387899LL) > (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_3])))))) : (((/* implicit */int) arr_4 [(signed char)6] [i_1]))))) ? (((/* implicit */unsigned long long int) var_6)) : (((((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-298))) : (18446744073709551612ULL))) << (((arr_7 [i_0]) - (3358706171U)))))));
                                arr_15 [i_4] [i_4] [i_1] [i_2] [i_4] [i_0] = arr_14 [i_0] [i_3] [i_4] [6ULL] [i_3];
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_17 = ((/* implicit */long long int) var_14);
                        var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_17 [i_1] [i_2])) ? (((((/* implicit */_Bool) -429670365299683847LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-4611686018427387904LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) (unsigned short)20)))))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 8; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned long long int) var_5)))));
                                var_20 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_0)) > ((+(arr_0 [i_6])))))), ((unsigned char)60)));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (((((+(((/* implicit */int) (unsigned char)62)))) - ((-(((/* implicit */int) var_10)))))) + (((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */int) arr_10 [i_0] [i_2])) : (((/* implicit */int) var_3)))))))));
                                var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_18 [i_6 + 4] [i_6 - 2] [i_6 - 1] [i_6 - 2]))) - (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) arr_8 [i_7] [i_6] [i_2] [i_0])), (4294967295U))), (((((/* implicit */_Bool) 4611686018427387903LL)) ? (67462578U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6] [(unsigned short)4]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 10; i_9 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */short) var_10);
                                arr_30 [1] [i_1] [1] [i_2] [i_1] [0] [i_9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_24 ^= (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) > (2693062416U)))));
                }
                arr_31 [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)211)) && (((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_6 [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))))))))) : (((/* implicit */int) ((82006027) > (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [(signed char)8] [2ULL] [i_0] [i_1]))))))));
                arr_32 [i_1] [i_0] = ((/* implicit */int) ((3177285342U) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) max((((/* implicit */unsigned char) var_12)), (var_8))))))))));
                var_25 = ((/* implicit */unsigned short) min((max((((unsigned int) arr_17 [i_0] [i_1])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [8ULL] [i_1] [i_1] [2LL])) ? (((/* implicit */int) arr_10 [i_0] [i_1])) : (((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) (((-(var_15))) > (((var_4) ? (5ULL) : (((/* implicit */unsigned long long int) arr_6 [i_1] [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) 3456080111U);
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1117681943U)) ? (((/* implicit */int) (short)11524)) : (((/* implicit */int) (unsigned short)10698))));
}
