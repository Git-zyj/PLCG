/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20027
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_14 [i_3] [i_3] [i_2] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) var_11);
                            arr_15 [i_0] [i_0] [15LL] [15LL] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_7 [i_2] [i_2] [i_2]) - (((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_0 + 1] [i_1] [i_3]), ((short)-13990)))))))), (13524313376413753407ULL)));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) 2133746105539900015LL))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) -7629603018292621004LL)) ? (7268380163013125616ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21640))))))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_5] [4LL] [i_1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_13 [i_0 - 1])) ? ((+(var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)61868)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)20228))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) 14288806917751837594ULL);
    var_21 &= ((/* implicit */unsigned short) var_7);
    var_22 = ((/* implicit */unsigned long long int) var_0);
}
