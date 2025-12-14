/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249933
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [(unsigned short)10] [i_1] |= ((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) arr_1 [(short)6] [2U])) ? (((/* implicit */unsigned long long int) 1036187951U)) : (13786184310684849985ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)27150)) ? (994910221430114567LL) : (994910221430114586LL))))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((var_17) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [0] [i_1])))))));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-994910221430114590LL) - (arr_3 [(short)8])))) ? (((/* implicit */int) ((-994910221430114567LL) >= (994910221430114567LL)))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(994910221430114577LL)))) || (((/* implicit */_Bool) -994910221430114567LL)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((-994910221430114567LL) == (994910221430114567LL)));
}
