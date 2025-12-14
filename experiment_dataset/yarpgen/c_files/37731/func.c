/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37731
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_1 + 2] [i_1 + 2] [i_0 + 1] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1459160596)) || (((/* implicit */_Bool) 1459160576)))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 + 3])) + (((/* implicit */int) arr_1 [i_1 - 1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 2; i_4 < 18; i_4 += 4) 
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0 - 1])), (var_3)))) ? (((/* implicit */int) min((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1])))) : (((-923881581) * (((/* implicit */int) (_Bool)1))))));
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((3087014094U), (((/* implicit */unsigned int) (signed char)-111)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1459160596)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */int) var_14))))) : ((-(((var_4) / (((/* implicit */unsigned int) var_5))))))));
                            }
                            for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                            {
                                var_18 -= ((/* implicit */int) ((((/* implicit */int) ((9045849501664270339ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58219)))))) == (1459160595)));
                                arr_14 [i_0 + 1] [i_1 + 2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_1 + 3])) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) max((var_11), (-1459160596)))) : (438020762U)));
                            }
                            var_19 = ((/* implicit */short) (+((((_Bool)1) ? (((/* implicit */unsigned int) 2147352576)) : (527010996U)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 15; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 3; i_7 < 16; i_7 += 2) 
        {
            {
                arr_19 [i_7] = arr_12 [i_6 - 2];
                var_20 |= ((/* implicit */unsigned long long int) arr_13 [i_6 - 2] [i_6 + 3] [i_6 + 2] [i_6 + 2] [i_6 - 2]);
                arr_20 [i_7] [i_7 - 1] [i_7 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_3)))) != (min((13097452U), (((/* implicit */unsigned int) var_1)))))) && (((/* implicit */_Bool) ((((((/* implicit */long long int) var_11)) <= (var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9296)) || (((/* implicit */_Bool) -1325600670)))))) : (((((/* implicit */_Bool) var_4)) ? (13318085001704531277ULL) : (((/* implicit */unsigned long long int) var_1)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_15);
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) var_8))))))))));
    var_23 = ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned long long int) var_3)), (10086434727447771692ULL))) : (((/* implicit */unsigned long long int) var_4)));
}
