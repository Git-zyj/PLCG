/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25918
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_6))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))));
    var_15 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((unsigned char) (unsigned short)4938))))) ? (((((/* implicit */_Bool) ((short) (unsigned short)60597))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) (-(3904529745U)))))));
            var_16 ^= ((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_2 [i_0])))));
            var_17 = ((/* implicit */_Bool) max((var_17), ((!((!((!(((/* implicit */_Bool) var_13))))))))));
        }
        for (long long int i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            var_18 = ((/* implicit */short) ((unsigned int) 16828464614181675791ULL));
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) ((long long int) arr_3 [i_0] [i_2 + 3])))))))));
        }
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(3904529745U)))) ? (((((/* implicit */_Bool) (-(1530147643U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4916)))))) : (787467699980788684ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-23))))))))));
        var_21 = ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) var_1))))))));
    }
    for (short i_3 = 3; i_3 < 19; i_3 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_13 [i_3])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)49519))))) : ((~(var_9)))))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)1))))))) : ((~(-4139087384102592551LL))))))));
        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64975)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (2390734186U))))));
    }
    var_24 = ((/* implicit */unsigned short) (-((-((~(8808502818605903965ULL)))))));
}
