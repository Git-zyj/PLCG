/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223423
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
    var_19 = ((/* implicit */unsigned char) (short)3);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))) ^ (233782847U))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) * (((unsigned int) (short)-32750))))));
            arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)255)), ((short)908)))) ? (((/* implicit */int) ((short) (short)28160))) : ((+(var_5)))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 1) /* same iter space */
        {
            var_21 = (~(min((((/* implicit */long long int) -1)), (((((/* implicit */_Bool) (short)6)) ? (-6491556851503475877LL) : (((/* implicit */long long int) var_12)))))));
            arr_9 [i_0] [i_2 - 2] [i_0] = ((/* implicit */int) max((((signed char) ((unsigned char) (signed char)-82))), ((signed char)81)));
            arr_10 [i_0] [i_2 - 1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) < (2036720000U)))), ((signed char)5))))));
            /* LoopNest 3 */
            for (short i_3 = 1; i_3 < 12; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 2; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_22 = ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_3] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5)))) : (var_15))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-82))));
                            arr_19 [i_0] [i_0] [i_3] [i_5 + 3] [i_5 + 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) < (min((((/* implicit */unsigned int) var_14)), (1953721769U)))));
                        }
                    } 
                } 
            } 
        }
        arr_20 [i_0] = ((/* implicit */short) var_4);
        arr_21 [i_0] = ((/* implicit */int) 702670244U);
    }
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (!((!(var_16))))))));
}
