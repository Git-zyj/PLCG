/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209241
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
    var_16 = ((((max((0U), (((/* implicit */unsigned int) (unsigned char)215)))) / (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) & (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)40), (((/* implicit */unsigned char) ((((/* implicit */int) var_1)) == (((/* implicit */int) (unsigned char)215))))))))));
    var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (min((((92036679U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)41)) / (((/* implicit */int) (_Bool)1)))))))));
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 2276750034U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))))), (max((var_11), (((/* implicit */unsigned int) var_2))))));
    var_19 = ((/* implicit */int) (unsigned char)31);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned char)207), ((unsigned char)40)))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)215))) == (1100983824686046749LL))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18))) == (((4819030201017704426LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))) : (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        arr_9 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */int) arr_0 [i_0 + 2] [i_1])) & (((/* implicit */int) (_Bool)1)))), (max((((/* implicit */int) (unsigned char)216)), (((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (signed char)-41))))))));
                        var_21 = ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (min(((unsigned char)215), (((/* implicit */unsigned char) (signed char)-112))))));
                        arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_6 [i_0 + 2] [i_0 + 3])), (((7138693723947343546ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-10666), (((/* implicit */short) arr_4 [i_0] [i_0] [i_3]))))))))));
                    }
                }
            } 
        } 
    } 
}
