/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35788
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 1639962576U)) <= (15309376258770964973ULL)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) ((unsigned short) arr_2 [i_0] [i_1])))) == ((+(((/* implicit */int) arr_2 [i_0] [i_1]))))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_2 [i_0] [i_0]))));
                arr_6 [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((arr_3 [i_0] [1]) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)26)) & (((/* implicit */int) var_13))))))));
                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_2 [i_0] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))) : (arr_3 [i_0] [i_1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((max((((/* implicit */int) (unsigned char)199)), (-361133939))), (((/* implicit */int) var_1))))), ((((!(((/* implicit */_Bool) (signed char)-98)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) var_11))))) : ((+(var_8)))))));
}
