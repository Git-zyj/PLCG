/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242532
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 6; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_11 = ((/* implicit */long long int) -12254902);
                        var_12 = ((/* implicit */_Bool) min((1528629219U), (1528629212U)));
                        var_13 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7)) ? (-12254894) : (12254909)));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (23U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1528629212U)) ? (1528629235U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) : (max((8244444177790261580ULL), (((/* implicit */unsigned long long int) 12254892))))));
        arr_14 [i_0] = ((/* implicit */signed char) ((unsigned int) min((((/* implicit */unsigned short) (signed char)-115)), ((unsigned short)38553))));
    }
    var_14 = (_Bool)1;
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -12254933)) ? (((/* implicit */long long int) 2766338067U)) : (20LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-124)))))))) ? (((((-7357769477390952556LL) + (9223372036854775807LL))) >> (((var_8) - (2125720661608393158ULL))))) : (((/* implicit */long long int) max((max((1528629219U), (((/* implicit */unsigned int) -1903433240)))), (min((994634174U), (((/* implicit */unsigned int) (signed char)-68)))))))));
}
