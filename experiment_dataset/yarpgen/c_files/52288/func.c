/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52288
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) 8985930587072100227LL);
                                var_15 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (short)-13536)))))));
                                var_16 = ((/* implicit */unsigned short) (((~((~(((/* implicit */int) arr_1 [i_0] [i_0])))))) << (((((((/* implicit */long long int) ((/* implicit */int) arr_7 [7U] [7U] [7U] [7U]))) & (-8985930587072100228LL))) - (2094LL)))));
                                arr_12 [i_4] = ((/* implicit */unsigned long long int) var_9);
                                arr_13 [i_0] [i_0] [i_0] [i_4] [3U] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-30029)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (signed char)-89)) ? (arr_2 [i_0] [(unsigned short)6]) : (((/* implicit */unsigned long long int) 27021597764222976LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-2926))))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_12)) : (654650985U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 832054180)) ? (((/* implicit */int) (short)2908)) : (((/* implicit */int) (_Bool)1))))))) ? (((unsigned int) (short)-4096)) : (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) (unsigned short)65535)))) >= (((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)100)))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-79))))) + ((+(var_6))))))));
    var_19 *= min((((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && ((_Bool)1)))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (short)-30014))))))), (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1)))) == (max((((/* implicit */long long int) -1264227898)), (var_9))))));
}
