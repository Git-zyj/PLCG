/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234127
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
    var_19 = ((/* implicit */long long int) var_1);
    var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((int) max((((/* implicit */int) (signed char)127)), (var_15))))) + (var_12)));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((182174444) > (((/* implicit */int) (signed char)-113))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (unsigned short)40856))));
                var_22 ^= ((/* implicit */short) ((((/* implicit */int) arr_7 [i_2 + 1])) == (((((/* implicit */_Bool) (signed char)-127)) ? (((((var_0) + (2147483647))) << (((((((/* implicit */int) var_18)) + (69))) - (21))))) : (((/* implicit */int) ((unsigned short) 297348454)))))));
                var_23 += ((/* implicit */short) (~((+(var_17)))));
            }
            arr_10 [i_0] [i_0] = ((/* implicit */long long int) max((((unsigned short) arr_5 [i_1] [i_0] [i_0])), (((/* implicit */unsigned short) ((arr_5 [i_0] [i_0] [i_0]) && (((/* implicit */_Bool) var_1)))))));
            var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (((~(14403962451283136643ULL))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-127)))))))) << (((arr_6 [i_0]) - (6253379214327950886ULL)))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
        {
            var_25 = ((((/* implicit */_Bool) (+(arr_12 [i_0] [i_0] [i_3])))) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (((/* implicit */int) ((unsigned short) (unsigned short)18153))));
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                var_26 = ((/* implicit */int) var_11);
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_3])) ? (arr_6 [i_0]) : (var_3)));
                var_28 *= ((/* implicit */unsigned int) ((long long int) (signed char)-127));
            }
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-22)) + (2147483647))) << ((((+(((/* implicit */int) (signed char)127)))) - (127)))));
            var_30 = ((/* implicit */int) ((long long int) -182174444));
        }
        var_31 += ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
    {
        arr_21 [(unsigned char)10] = var_10;
        arr_22 [i_6] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((-1814093349) / (((/* implicit */int) (signed char)-127))))) / ((-(13284375715217129329ULL)))));
        var_32 = ((/* implicit */unsigned int) var_1);
        var_33 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-127))));
    }
    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
    {
        var_34 = ((/* implicit */int) max((((long long int) arr_18 [i_7])), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-127)) - (((/* implicit */int) (_Bool)0)))))));
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_23 [i_7])) & (((/* implicit */int) arr_3 [i_7] [i_7]))))))) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (signed char)127))));
    }
}
