/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206259
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
    var_19 *= ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        var_20 -= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) (unsigned short)20857))))) ? (((((/* implicit */_Bool) 16982046986853693117ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || ((_Bool)1)))))))));
        var_21 = ((/* implicit */signed char) max((max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1]))), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1 - 1] [i_0 - 1])) ? (((/* implicit */int) ((_Bool) arr_2 [i_2]))) : (2147483641)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483638)) ? (((/* implicit */unsigned long long int) 870624294804780710LL)) : (arr_2 [i_0])))) ? (max((((/* implicit */int) arr_7 [i_0 - 3] [i_0] [i_1 + 1] [i_0 - 3])), (2147483641))) : (((/* implicit */int) var_16))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)27369)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (signed char)-36))))), (18446744073709551592ULL)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) ((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */unsigned short) var_6)), (var_16))), (((/* implicit */unsigned short) (_Bool)1))))))));
                                var_23 -= ((/* implicit */unsigned char) max(((((_Bool)1) ? (((/* implicit */long long int) -587921843)) : (min((((/* implicit */long long int) (_Bool)1)), (-344012487432429579LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        var_24 = ((/* implicit */unsigned short) (~((~(var_1)))));
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((signed char) var_10)))));
    }
    for (unsigned int i_6 = 1; i_6 < 24; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 2; i_8 < 24; i_8 += 3) 
            {
                {
                    var_26 ^= ((/* implicit */_Bool) ((max(((!(((/* implicit */_Bool) (unsigned short)22030)))), (arr_21 [i_7]))) ? (((/* implicit */int) max(((!((_Bool)1))), ((_Bool)1)))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_23 [i_6] [i_6 - 1] [i_7 + 1] [i_8]))))));
                    var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)35)))))) == (8974021400243885952ULL)));
                }
            } 
        } 
        var_28 -= max((((unsigned int) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))) : (8974021400243885949ULL)))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)-17374)) ? (((/* implicit */int) (unsigned short)43477)) : (var_2)))))));
        var_29 = ((/* implicit */int) (((_Bool)1) ? (max((min((9472722673465665664ULL), (((/* implicit */unsigned long long int) var_0)))), (3134457407737143679ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) -344012487432429557LL))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)17369)) : (((/* implicit */int) arr_23 [i_6 - 1] [i_6] [i_6 - 1] [i_6])))))))));
    }
}
