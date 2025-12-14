/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28146
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
    var_19 = ((/* implicit */short) (((_Bool)1) && (((/* implicit */_Bool) 3100946617U))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(10455698172962521022ULL)))))) && (((/* implicit */_Bool) 10455698172962521005ULL))));
                arr_8 [(unsigned short)12] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 10455698172962521014ULL)) ? (((/* implicit */unsigned long long int) 16777215U)) : (10455698172962520986ULL))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (346321309) : (((/* implicit */int) (unsigned char)62))))) && (((/* implicit */_Bool) 7991045900747030580ULL))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((unsigned int) min(((unsigned char)255), ((unsigned char)41)))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((7991045900747030604ULL), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) ((4166396185U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)14803)))))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)235)), ((short)-18730)))))))));
}
