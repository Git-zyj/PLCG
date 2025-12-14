/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196533
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_12))));
    var_16 = ((/* implicit */unsigned int) min((var_16), (max((((/* implicit */unsigned int) ((short) (+(10214877369557460049ULL))))), (0U)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1037919458)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (2322766753369619653ULL)))) ? (arr_4 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2] [i_0])))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_17 -= ((((/* implicit */int) ((unsigned char) arr_8 [i_0] [(unsigned char)9] [i_2] [i_3] [i_4]))) < (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != ((+(var_10)))))));
                                arr_14 [18] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2147483646)) ? (((((/* implicit */_Bool) 234881024)) ? (((/* implicit */unsigned long long int) 549755813887LL)) : (1055531162664960ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
                                var_18 = ((/* implicit */short) 134213632);
                                arr_15 [i_0] [(unsigned char)5] [i_2] [i_3] = ((/* implicit */unsigned char) ((unsigned int) arr_5 [i_3] [i_3] [1] [i_3]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_14)) ? (var_9) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9))))));
}
