/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195458
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
    var_16 = ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) (unsigned short)65512)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2585581365U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54881))))) : (((/* implicit */int) var_5)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_15))));
                                var_18 += ((/* implicit */_Bool) arr_1 [i_1]);
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) var_2)) != (((/* implicit */int) (unsigned short)41460))))), (min((((/* implicit */unsigned short) var_15)), ((unsigned short)10654)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (short)8513)) : (((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_3] [i_3] [i_3]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16799134750786947088ULL)) ? (7469149485956943879ULL) : (5793363392966374224ULL)))) ? ((-(1709385930U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)24070)) + (((((/* implicit */int) var_3)) + (((/* implicit */int) var_10)))))))));
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_8 [i_1] [i_1] [i_1] [i_6]) << ((((((~(((/* implicit */int) (unsigned char)177)))) + (233))) - (55)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_10 [i_6] [i_6] [i_6])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24762)) ? (-1025129458) : (((/* implicit */int) var_0))))))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (arr_8 [i_1] [i_2] [i_5] [i_6]) : (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_5])))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_7 = 2; i_7 < 15; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_0] [i_2] [i_7 - 2])))))))), (((((/* implicit */int) ((2585581365U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0])))))) / (((/* implicit */int) arr_16 [i_0] [i_7 - 2] [i_1] [i_1] [i_7])))))))));
                        /* LoopSeq 2 */
                        for (long long int i_8 = 1; i_8 < 12; i_8 += 2) 
                        {
                            arr_23 [i_0] [i_1] [i_2] [i_8] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_2] [i_2] [i_0]))))) ? (((((/* implicit */_Bool) 12653380680743177392ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)511))) : (arr_0 [i_1] [i_7 - 2]))) : (min((((/* implicit */long long int) (unsigned short)24089)), (arr_20 [i_7] [i_7] [i_7] [i_7])))))));
                            var_22 *= ((/* implicit */short) ((_Bool) ((arr_7 [i_7 - 2]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41457))))));
                            arr_24 [i_8] [i_1] [i_2] = (-(((((/* implicit */int) ((12653380680743177380ULL) > (16216586951274277775ULL)))) ^ (((/* implicit */int) (unsigned char)170)))));
                        }
                        for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~((+((+(((/* implicit */int) var_5)))))))))));
                            var_24 &= ((/* implicit */long long int) ((int) (short)16763));
                        }
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) (unsigned short)41466)) ? (12653380680743177384ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
    var_26 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2104696208)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41449))) : (3640605367493171260ULL)));
}
