/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48656
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (((+(-259260967))) & ((-(((/* implicit */int) (short)0))))))) < (((((((/* implicit */_Bool) (short)31744)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2714))))) + (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)190)))))))));
    var_21 = ((/* implicit */unsigned int) (short)-31722);
    var_22 = ((/* implicit */unsigned short) (unsigned char)108);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned long long int) (-(((long long int) ((((/* implicit */_Bool) -3153660598763554206LL)) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2])) : (((/* implicit */int) (short)31738)))))));
                    var_23 = ((/* implicit */unsigned short) max(((~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9))) - (1563527756U))))), (((/* implicit */unsigned int) arr_3 [i_0]))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) min(((+((-(4030105249U))))), (((/* implicit */unsigned int) arr_3 [i_0]))));
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */int) var_17)) + (((/* implicit */int) (unsigned short)36070)))))))));
                }
            } 
        } 
    } 
}
