/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38910
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
    var_12 = ((max((var_9), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))) >> (((((/* implicit */int) var_6)) + (30963))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (+(max((((unsigned long long int) (short)29237)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))))))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)144))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((arr_2 [i_1] [i_1]) << (((arr_2 [i_1] [i_1]) - (812572002934008334LL))))))));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
        {
            var_16 = ((unsigned char) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) : (127U)));
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (unsigned short)32780)))))));
        }
        for (unsigned char i_3 = 3; i_3 < 11; i_3 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))) : (1777215010U)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50868))) : (arr_4 [i_3]))))));
            arr_9 [i_1] [3LL] = ((/* implicit */short) ((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
        }
        for (unsigned char i_4 = 3; i_4 < 11; i_4 += 3) /* same iter space */
        {
            var_19 *= ((/* implicit */short) ((arr_0 [(unsigned char)10]) <= (arr_2 [(unsigned char)11] [i_4])));
            arr_12 [i_1] = ((/* implicit */long long int) arr_11 [i_1] [i_1]);
            arr_13 [i_1] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1] [i_4]))));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1] [i_4 - 1])) ? (((/* implicit */int) arr_1 [i_4] [i_4 - 1])) : (((/* implicit */int) var_5))));
        }
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) max((var_21), ((unsigned char)165)));
            arr_16 [i_1] = ((/* implicit */unsigned char) arr_14 [i_1] [i_1] [i_5]);
        }
    }
    var_22 = ((/* implicit */unsigned long long int) max((var_6), (((/* implicit */short) var_5))));
}
