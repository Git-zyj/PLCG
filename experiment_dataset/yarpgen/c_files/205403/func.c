/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205403
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)55967)) << (((((/* implicit */int) (unsigned short)9569)) - (9556)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_11))) : (((/* implicit */unsigned long long int) ((int) var_1))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [2U] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */int) var_5);
                            var_20 = ((/* implicit */int) min((var_20), ((~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) ((-1171201897703359200LL) < (((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned char) arr_8 [(short)0]))), (((unsigned int) var_15)))))));
                var_22 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1171201897703359216LL)) ? (15578957701803215579ULL) : (((/* implicit */unsigned long long int) 4294967295U)))))))) != (((/* implicit */int) ((_Bool) arr_0 [i_1] [i_0])))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_16))));
}
