/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210705
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)50))))), (var_10)))) ? (var_10) : (((/* implicit */unsigned long long int) var_6))));
    var_14 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_9)))) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (var_2))))))) | (max((((18446744073709551615ULL) & (var_10))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (var_2))))))));
    var_15 -= ((/* implicit */int) (-(14828625432708059813ULL)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) min((14828625432708059804ULL), (arr_8 [i_0] [i_0] [(signed char)12] [i_0] [i_0] [i_0])));
                                var_16 = ((/* implicit */short) ((min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (9223372036854775807LL)))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (var_2))))) > (((/* implicit */long long int) ((var_6) & (391899563))))));
                            }
                        } 
                    } 
                    var_17 -= ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned char)8] [(unsigned char)8]))) / (var_5))), (((long long int) (signed char)-11))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) 914084302);
}
