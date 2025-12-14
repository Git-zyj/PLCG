/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43778
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
    for (long long int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)32)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1757)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))))));
                var_13 -= ((/* implicit */int) arr_1 [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) arr_3 [i_1] [i_3 - 1]))))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) ((unsigned char) var_4))) + (((/* implicit */int) min((var_0), (((/* implicit */short) arr_4 [i_3 - 1] [i_0] [i_1])))))))));
                            var_14 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_11)))) ? (((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)10]))) : (1152921504606584832ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) < ((-(arr_8 [(unsigned short)17] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-7534))) - (arr_9 [i_0] [18U] [i_0 + 1]))))) ? (max(((~(((/* implicit */int) arr_2 [i_3] [i_1])))), (((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (17293822569102966784ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 - 1] [17LL]))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (min((((((/* implicit */_Bool) (unsigned short)1762)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-75))) : (17293822569102966783ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (signed char)-64)))))))));
    var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-72)), (7745753727426362221ULL)));
    var_18 |= ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) min(((unsigned short)1762), (((/* implicit */unsigned short) var_1))))))));
    var_19 = (~((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)30)))))));
}
