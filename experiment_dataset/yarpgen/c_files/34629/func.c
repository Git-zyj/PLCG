/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34629
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
    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) (-(((/* implicit */int) var_0)))))), ((((!(((/* implicit */_Bool) var_8)))) ? (((var_6) / (((/* implicit */int) var_0)))) : (var_15)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned short)65524))))));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) min(((~(arr_3 [i_0] [6] [i_0]))), ((-(((/* implicit */int) (unsigned short)16977))))))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) -4157862514780881988LL)))) ? (max((arr_2 [i_1]), (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_9) : (arr_1 [i_0])))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_1 [i_0]))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((4157862514780881985LL) * (((/* implicit */long long int) ((/* implicit */int) (short)1)))))))) ? ((+(max((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_13)))))) : (((/* implicit */unsigned long long int) (-(-2147483643))))));
                            var_20 ^= ((/* implicit */int) max((((((/* implicit */_Bool) max((var_11), (var_11)))) && ((!(((/* implicit */_Bool) arr_0 [i_2])))))), (max(((!((_Bool)1))), ((_Bool)1)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min(((+(max((((/* implicit */unsigned long long int) (_Bool)1)), (var_5))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(16744448)))) ? (max((((/* implicit */long long int) var_4)), (4157862514780882003LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_11))))))))));
}
