/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47350
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
    for (int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1298264109)) ? (-2653395320842446058LL) : (((/* implicit */long long int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) 6718263020241762320ULL)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)210)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_0] [(unsigned char)6] [(unsigned char)6])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_1])))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)19354)) ? (min((((/* implicit */long long int) (unsigned short)46175)), (-4997540709135939646LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19354))))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_1] [i_0])) ? (arr_2 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                            var_18 = ((/* implicit */int) max((((((/* implicit */_Bool) max((arr_9 [i_0] [i_0] [i_0] [(short)0]), (((/* implicit */signed char) arr_3 [i_0 - 1] [i_2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)19354)) ? (arr_8 [i_0 - 1] [5U] [i_2] [i_3] [i_3]) : (arr_8 [i_3] [i_2] [i_1] [i_0 - 1] [i_0 - 1])))) : (min((((/* implicit */unsigned int) arr_8 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0])), (4294967275U))))), (((((/* implicit */_Bool) (+(21U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967275U)) ? (var_10) : (((/* implicit */int) var_13))))) : (max((4294967285U), (((/* implicit */unsigned int) 2147483647))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_17)), (var_8)))) ? (((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */int) (signed char)96))))))) ? (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (short)-5184)) : (((/* implicit */int) (unsigned char)24)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)46176)) : (((/* implicit */int) var_17))))) ? (((/* implicit */int) max(((unsigned char)30), (((/* implicit */unsigned char) var_17))))) : ((((_Bool)1) ? (((/* implicit */int) var_0)) : (var_7)))))));
}
