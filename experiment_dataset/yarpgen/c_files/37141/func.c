/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37141
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_1))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_8 [i_1] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(arr_2 [i_1 + 1] [i_1 - 1]))))));
                arr_9 [i_0] [i_1 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(602795805999776913ULL))))));
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0))))) : (arr_0 [i_0 + 2]))))))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_10))) ? ((((!(((/* implicit */_Bool) (unsigned char)151)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_0]))))) : ((+(-1959103359205575526LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2191124555947372299LL)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (short)(-32767 - 1)))))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_17 = ((/* implicit */unsigned char) ((signed char) ((long long int) arr_1 [i_0])));
                    var_18 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) 2874145794543705724LL)))));
                    var_19 = ((/* implicit */unsigned short) (-((+(arr_10 [i_1 - 1])))));
                    var_20 = ((/* implicit */_Bool) min((var_20), ((!((!(((/* implicit */_Bool) (unsigned short)54222))))))));
                }
            }
        } 
    } 
}
