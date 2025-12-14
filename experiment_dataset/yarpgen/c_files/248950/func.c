/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248950
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
    var_19 = min((min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) (unsigned short)65535)), (var_5))))), (((/* implicit */unsigned int) var_15)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = (signed char)0;
                            arr_10 [i_0] [(signed char)8] [i_2 - 1] [i_0] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */short) var_4)), (arr_6 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (max((((((/* implicit */_Bool) (short)4095)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15)))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((unsigned short) (~(((15706653344758824236ULL) >> (((15706653344758824236ULL) - (15706653344758824197ULL)))))))))));
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)17502)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)33901))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (short)-17505)))) : (((((var_0) + (9223372036854775807LL))) << (((arr_5 [i_0]) - (2104354511730022020ULL))))))))))));
                arr_11 [i_0] = ((/* implicit */short) (unsigned short)65535);
            }
        } 
    } 
}
