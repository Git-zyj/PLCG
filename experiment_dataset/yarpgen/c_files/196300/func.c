/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196300
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
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (min((((/* implicit */unsigned int) (unsigned char)186)), (var_0)))))) && (((/* implicit */_Bool) var_5)));
    var_14 = ((/* implicit */short) ((((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) / (var_11))) >> (((((min((-5397672997783660951LL), (((/* implicit */long long int) var_3)))) & (((/* implicit */long long int) ((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-67)))))))) - (2151809070LL)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    var_15 = ((max((((/* implicit */long long int) var_7)), (arr_5 [i_1] [i_1 + 2] [i_2 - 2] [(_Bool)1]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3028911720203431655LL)))))));
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_4))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((max((((unsigned int) var_6)), (((/* implicit */unsigned int) ((arr_9 [12U] [i_1] [i_3 - 1] [i_3 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) >> (((((/* implicit */int) var_2)) + (57)))));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_11 [11] [11] [(_Bool)1] [i_0] [i_0 - 1]) + (((/* implicit */int) (unsigned char)186))))) || (((/* implicit */_Bool) ((unsigned short) arr_2 [i_0 - 1] [i_3 + 1] [i_1 - 3])))));
                                var_19 *= max(((+(((/* implicit */int) ((signed char) var_8))))), (((/* implicit */int) var_7)));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((var_11) & (var_0))))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((((/* implicit */int) var_6)) + (((/* implicit */int) arr_3 [i_3] [i_3 - 1])))) < (((int) (+(((/* implicit */int) (unsigned char)186))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
