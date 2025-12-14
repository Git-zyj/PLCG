/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199808
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned short)59820)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)59816)) != (((/* implicit */int) (unsigned char)18))))) : ((-(((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_2])))))));
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [12ULL] [i_3 - 3] [i_3 - 2] [i_3] [i_3 - 2]))) | (3633511708878501016ULL)))))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [21ULL] [21ULL] [i_1]))) > (max((3633511708878501016ULL), (((/* implicit */unsigned long long int) (unsigned short)59820)))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (-(((/* implicit */int) ((short) 14813232364831050606ULL))))))));
                arr_15 [i_1] [i_0] [(_Bool)1] = ((((/* implicit */_Bool) min((arr_5 [i_0] [i_1]), (((/* implicit */int) (signed char)104))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-28992))))) : ((-(var_15))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((var_14) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) >= (-424893941)))))))) * ((-(min((((/* implicit */unsigned long long int) var_5)), (11761913931687401530ULL)))))));
}
