/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202209
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
    var_10 = ((/* implicit */unsigned char) (short)22413);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-22403)) / (31457280))))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) / (((/* implicit */long long int) ((/* implicit */int) (short)22438)))))) ? (max((-2877027782038021278LL), (((/* implicit */long long int) (short)22438)))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned long long int) ((long long int) var_3))) : (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        var_13 = ((/* implicit */unsigned short) var_9);
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22414)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)22454))))) : ((+(var_5))))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) (_Bool)1)))))));
            var_14 = ((/* implicit */short) max((((/* implicit */long long int) (short)22425)), (5939665569568376706LL)));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            var_15 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)8))));
            var_16 = 262144U;
            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((16572542538991395406ULL) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (174))))) == (((/* implicit */unsigned long long int) var_1)))))));
            arr_9 [i_1] [i_1] [i_3] = ((/* implicit */int) (short)9606);
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        {
                            var_18 += ((/* implicit */int) ((var_7) == (arr_5 [i_4])));
                            arr_17 [i_3] [i_3] [i_4] [i_5] [i_6] = ((((/* implicit */_Bool) ((long long int) (short)-22415))) ? (((((/* implicit */unsigned long long int) arr_10 [i_1] [i_3] [i_4])) & (arr_2 [i_1] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
                        }
                    } 
                } 
            } 
        }
        for (short i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            var_19 = var_5;
            var_20 = ((/* implicit */int) min((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_7]))))), (((unsigned int) arr_10 [i_1] [i_7] [i_7])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_0)), ((-2147483647 - 1))))))))));
            arr_22 [i_7] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_21 [i_7] [(signed char)14])) && (((((/* implicit */unsigned long long int) 4380908099900582353LL)) < (1874201534718156216ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_7]))) > (((785485013875334957ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))) : (((((/* implicit */_Bool) 1930320717U)) ? (((arr_1 [i_7] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) 1930320736U))))));
        }
        arr_23 [i_1] [(signed char)0] = ((/* implicit */_Bool) -697356836);
    }
    var_21 = ((/* implicit */unsigned short) var_3);
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))));
    var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (var_1))))) >= (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
}
