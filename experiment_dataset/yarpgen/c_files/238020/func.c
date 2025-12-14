/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238020
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    var_18 += ((/* implicit */int) (!(((/* implicit */_Bool) (short)1759))));
                    var_19 = ((/* implicit */int) ((unsigned char) (((-(((/* implicit */int) (short)1759)))) & (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_2])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((unsigned long long int) arr_9 [i_0 + 1] [i_0])), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_4]))))))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_0 [i_0 - 1]))) ? (((/* implicit */unsigned long long int) (+(max((var_1), (((/* implicit */long long int) var_10))))))) : (18446744073709289472ULL)));
                                arr_18 [i_1] [5] = ((/* implicit */signed char) 1736823246124529115LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                {
                    var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1759)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-26507))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136))) | (12246287120064491809ULL))) : (((/* implicit */unsigned long long int) arr_24 [14ULL] [i_6] [14ULL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1752))) : (-1805229706908372363LL)))) ? (min((arr_21 [4ULL] [4ULL]), (2772821936917787826LL))) : (arr_24 [2] [(short)0] [2])))) : (((((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_7])) ? (arr_27 [i_5] [(short)14] [i_7]) : (((/* implicit */unsigned long long int) arr_21 [(unsigned short)16] [(unsigned short)16]))))));
                    var_23 = ((/* implicit */short) max((var_23), ((short)1759)));
                    var_24 -= ((((unsigned long long int) (+(((/* implicit */int) var_0))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1752)) ? (((/* implicit */int) (short)-24359)) : (((/* implicit */int) (_Bool)1))))));
                    var_25 = ((/* implicit */unsigned long long int) arr_22 [11ULL] [i_7]);
                }
            } 
        } 
    } 
    var_26 = min((((/* implicit */short) (unsigned char)237)), ((short)1751));
    var_27 = ((/* implicit */unsigned int) var_7);
}
