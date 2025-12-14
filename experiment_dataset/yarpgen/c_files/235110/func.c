/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235110
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
    for (int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        arr_2 [i_0] [i_0 + 3] = ((/* implicit */signed char) (_Bool)1);
        arr_3 [2] [2] = ((/* implicit */int) min(((unsigned char)240), (min(((unsigned char)206), ((unsigned char)240)))));
        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)15)), (((unsigned int) max((4308983355514339521ULL), (((/* implicit */unsigned long long int) (unsigned short)47326))))))))));
        var_12 = ((/* implicit */signed char) max((((/* implicit */short) ((signed char) min((1622830200), (((/* implicit */int) (unsigned char)15)))))), (((short) (+(((/* implicit */int) (_Bool)1)))))));
        arr_4 [i_0] = ((/* implicit */int) ((unsigned short) (_Bool)1));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            {
                arr_9 [i_2 + 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (-7180740265366205193LL)))) ? (((((/* implicit */_Bool) 312247694U)) ? (288230341791973376ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))))) : (((/* implicit */unsigned long long int) max((7180740265366205221LL), (((/* implicit */long long int) (signed char)117)))))))) ? (7180740265366205195LL) : (((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned char)240)))), (((((/* implicit */_Bool) 2052854878)) ? (((/* implicit */int) (unsigned short)22278)) : (((/* implicit */int) (unsigned short)51753)))))))));
                var_13 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)216))));
            }
        } 
    } 
    var_14 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((int) (signed char)-118))), (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)240)), (-776142813297769656LL)))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    var_15 += ((/* implicit */unsigned long long int) var_9);
    var_16 = ((((/* implicit */_Bool) (unsigned char)44)) ? (8889726898113960935ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26933))));
}
