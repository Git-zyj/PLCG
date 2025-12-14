/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199613
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
    var_19 = -3946303691489380211LL;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((((12253864U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_0]))))) * (((/* implicit */unsigned int) arr_2 [(_Bool)1] [(_Bool)1] [12LL]))))) | (((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (arr_2 [i_1] [i_0] [(unsigned short)9])))) + (var_8))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) 14856514767681265345ULL))));
                            var_21 = ((/* implicit */unsigned short) (+(max((((((-645397374999058439LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_3 [i_0 + 1])) + (3745))))), (((/* implicit */long long int) ((((/* implicit */long long int) 2080374784)) <= (var_4))))))));
                            arr_13 [i_0] [i_0] [i_2] [i_3 + 2] [i_3 - 1] [i_3 - 1] = ((min((645397374999058451LL), (((/* implicit */long long int) (_Bool)1)))) * (((/* implicit */long long int) arr_5 [(_Bool)1])));
                            arr_14 [i_0] [i_1] [i_1] [i_2] [(signed char)7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 11508899234027000158ULL))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)));
                        }
                    } 
                } 
                arr_16 [(short)15] [i_0] = ((/* implicit */short) -645397374999058439LL);
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
}
