/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25388
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))) <= (((/* implicit */int) (unsigned char)157))))));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((17804304328145689229ULL), (642439745563862387ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) var_2))))));
    var_12 = ((/* implicit */_Bool) max((var_12), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 17804304328145689229ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) 17804304328145689242ULL)) || (((/* implicit */_Bool) var_0)))))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) (!(var_9)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) 6436483195755821170LL);
                arr_5 [i_0] [i_0] [i_1] = arr_1 [i_0];
                var_14 = ((/* implicit */_Bool) ((min((min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) (~(3101299704U)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))));
                var_15 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_0 [i_0])), (max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) * (16383)))) * (min((((/* implicit */unsigned long long int) var_3)), (arr_3 [i_1] [i_0])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                            {
                                var_16 += ((/* implicit */int) ((max((arr_8 [i_1] [i_1 + 1] [i_1 + 1] [i_4]), (((/* implicit */unsigned int) 1591608767)))) << (((arr_7 [i_1] [i_1 + 1] [i_1 + 1] [i_2]) + (332062234)))));
                                arr_15 [i_0] [i_1 + 1] [i_2] [i_0] [i_3] [i_4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (arr_8 [i_0] [i_1] [i_2] [i_0])))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)80))))) * (min((arr_11 [i_2] [i_0] [i_0] [i_0]), (arr_11 [i_4] [i_0] [i_0] [i_0]))))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) 14188291990481000719ULL))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((642439745563862384ULL), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_7 [i_3] [(short)9] [i_3] [i_0])), (-11LL))))))) ? (((/* implicit */unsigned long long int) var_1)) : (min(((-(arr_3 [i_1] [i_4]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111))) + (arr_11 [i_3] [i_0] [(_Bool)1] [i_3])))))));
                            }
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (((((~(((/* implicit */int) (unsigned char)3)))) + (2147483647))) >> ((((~(((/* implicit */int) var_2)))) + (30)))))) & (1339146924U)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)51)) || (var_9)))))))) : (((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned char) var_2))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))) : (((unsigned int) (unsigned short)65535))))));
}
