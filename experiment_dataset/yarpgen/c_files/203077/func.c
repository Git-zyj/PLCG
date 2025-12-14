/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203077
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
    var_18 = ((/* implicit */long long int) 1575987516U);
    var_19 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-16972))) % (min((min((959056453U), (((/* implicit */unsigned int) (short)2185)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)10088)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 268427264U)) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15242)) ? (((/* implicit */int) (unsigned short)21761)) : (((/* implicit */int) (unsigned short)55448))))) ? (((/* implicit */unsigned long long int) (~(1575987516U)))) : (((((/* implicit */unsigned long long int) 2718979787U)) | (16437546912263933164ULL)))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 270215977642229760ULL)) && (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)21761)) % (((/* implicit */int) (short)8168)))) << ((((+(18176528096067321855ULL))) - (18176528096067321848ULL))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (min((16361714962119317605ULL), (((/* implicit */unsigned long long int) (-(min((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)55469)))))))))));
    var_21 = ((/* implicit */signed char) (-(731544055499787786ULL)));
}
