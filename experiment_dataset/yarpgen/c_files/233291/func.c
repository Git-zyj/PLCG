/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233291
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_2 [i_0])))) == (((/* implicit */int) var_0))));
                            arr_10 [i_1] = ((/* implicit */signed char) max(((-(min((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_3])), (var_11))))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (signed char)-46))))))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min(((-(var_9))), (((/* implicit */unsigned long long int) min((-8039938751905559812LL), (((/* implicit */long long int) (unsigned char)248))))))))));
                                var_21 = (~((((!(((/* implicit */_Bool) 8039938751905559812LL)))) ? (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) : (-8039938751905559813LL))));
                            }
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] = ((/* implicit */short) (+((+(arr_8 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((min((((/* implicit */unsigned long long int) 2796805759U)), (var_16))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((11477927794867056261ULL) < (((/* implicit */unsigned long long int) 8039938751905559824LL))))))))));
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483645)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8039938751905559806LL))))));
}
