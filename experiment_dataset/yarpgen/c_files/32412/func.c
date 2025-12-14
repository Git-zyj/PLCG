/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32412
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_15 ^= ((/* implicit */short) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */long long int) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11)))))));
    }
    var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_1)))) ? (((((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (var_14)))) / (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_17 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_18 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (var_12)))), (((long long int) (unsigned short)25915))));
        var_19 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_3)))) ? ((-(max((((/* implicit */long long int) (unsigned short)39607)), (arr_5 [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_5 [i_1])))) ? (((((/* implicit */int) (short)1119)) << (((((/* implicit */int) (unsigned char)28)) - (8))))) : (((/* implicit */int) var_7)))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 10; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) arr_0 [8]);
                                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_9)))))))));
                                var_22 = ((/* implicit */unsigned long long int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39621)))));
                            }
                        } 
                    } 
                    arr_17 [2] [i_3] = ((/* implicit */int) (~(min((((/* implicit */long long int) ((var_12) + (var_10)))), (((arr_7 [i_1] [i_1] [11ULL]) / (((/* implicit */long long int) arr_15 [1] [1] [i_2] [1] [i_1] [i_2] [0U]))))))));
                    var_23 += ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_16 [(unsigned short)2] [i_2] [i_2] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) << (((((min((var_13), (((/* implicit */int) var_6)))) + (4746))) - (32))))) << ((((((~(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)57)), ((unsigned short)25915)))))) + (79))) - (21)))));
                    var_24 = ((/* implicit */unsigned long long int) max(((unsigned short)39621), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 511)) && (((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)245)))))))));
                }
            } 
        } 
    }
}
