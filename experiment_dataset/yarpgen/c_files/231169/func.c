/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231169
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((var_7), ((short)-1)))))))));
                        arr_12 [i_2] [i_1] [i_2] [i_2] = var_7;
                        arr_13 [i_0] = (!((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1]))))))));
                        var_12 = ((/* implicit */int) var_5);
                    }
                    var_13 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_0 + 1]) ? (((/* implicit */int) (short)8)) : (((/* implicit */int) (short)9))))) ? (((((/* implicit */_Bool) -614847685)) ? (((/* implicit */long long int) ((/* implicit */int) (short)20032))) : (var_6))) : (((/* implicit */long long int) (-(21U))))));
                    var_14 ^= ((((/* implicit */_Bool) -1644786433)) ? (((((min((var_6), (((/* implicit */long long int) (_Bool)1)))) + (9223372036854775807LL))) << (((max((2957168921638285241ULL), (var_3))) - (3228057650228822441ULL))))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-32766))))));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */short) var_0);
                                var_16 = ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)1)), (4294967293U)));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((1539085808U), (((/* implicit */unsigned int) (unsigned char)235))))) ? (((unsigned long long int) ((((/* implicit */int) (unsigned char)68)) > (((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_1), (((/* implicit */short) var_0))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) var_5);
    var_19 *= ((/* implicit */unsigned long long int) (unsigned char)201);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(var_3))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (var_5)))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)72))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) 2123667044928548611LL)) : (9862980206911115627ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_1), (var_1))))) : (((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_5)))))));
}
