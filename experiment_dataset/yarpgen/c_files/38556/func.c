/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38556
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */int) min((min(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)0)))), (((/* implicit */signed char) (_Bool)1))))), (-2147483632))))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_16 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) ((var_4) ^ (((/* implicit */int) var_1))))), ((-(var_0))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) 1416462316U)) : (591074420595371158LL)))))))));
                                var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(4261412864LL)))) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) max(((((_Bool)1) ? (766361558004803086LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2878505001U)) ? (((/* implicit */int) (unsigned short)1792)) : (((/* implicit */int) var_11))))))))));
                            }
                            var_18 ^= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (-1) : (((/* implicit */int) (signed char)-25))))), (5698260424178352179ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned long long int) var_12)) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) var_1)) ? (2878504979U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) / ((-2147483647 - 1)))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7967794788329937577LL)) ? (((/* implicit */long long int) var_8)) : (0LL)));
                    arr_18 [i_5] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_12)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_13)) : (6906435206301818468LL)))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_22 [i_6] [i_6] = ((/* implicit */long long int) (-(((31ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
        var_20 = ((/* implicit */long long int) 18446744073709551584ULL);
        var_21 *= ((/* implicit */signed char) (-(((/* implicit */int) (short)4032))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_7 = 2; i_7 < 8; i_7 += 4) 
    {
        var_22 = -2147483624;
        arr_25 [i_7] &= ((/* implicit */int) (+(min((var_10), (((/* implicit */long long int) var_11))))));
        arr_26 [i_7] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 586822094)) ? (((/* implicit */long long int) var_4)) : (var_10)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2147483632))))) : (((((/* implicit */int) (signed char)64)) ^ (((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        var_23 = ((/* implicit */int) var_5);
        var_24 ^= ((/* implicit */int) var_11);
    }
    /* vectorizable */
    for (unsigned char i_9 = 1; i_9 < 19; i_9 += 2) 
    {
        arr_33 [i_9] = var_13;
        /* LoopSeq 1 */
        for (unsigned char i_10 = 1; i_10 < 21; i_10 += 3) 
        {
            arr_36 [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (_Bool)0)))))));
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8156)) - (((/* implicit */int) (short)-8941))))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49)))));
        }
        arr_37 [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_14) >> (((4383505770169568549ULL) - (4383505770169568531ULL))))))));
        var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 12561134817108066906ULL)) ? (1008U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34829)))));
    }
}
