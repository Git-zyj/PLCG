/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197041
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_10))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                var_19 = ((_Bool) max((var_14), (((/* implicit */unsigned int) (_Bool)0))));
                var_20 = ((/* implicit */int) 2675661581U);
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)0)))));
            }
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-49)) / (var_3)))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_14))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])) ? (((/* implicit */int) min((((/* implicit */short) (signed char)48)), ((short)-13801)))) : (((/* implicit */int) arr_3 [0ULL] [4ULL] [i_0])))))));
        }
        for (unsigned short i_3 = 1; i_3 < 10; i_3 += 4) 
        {
            var_23 = ((/* implicit */int) ((unsigned char) max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) ((short) (unsigned char)255))))));
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((unsigned long long int) (_Bool)1)))));
        }
        var_25 = ((/* implicit */long long int) min((((unsigned short) (signed char)55)), (((/* implicit */unsigned short) (signed char)-46))));
        var_26 = (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0])));
        arr_10 [(signed char)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))) / (var_14))) : ((+(((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */unsigned int) var_8)) : (2349929794U)))))));
        /* LoopNest 2 */
        for (short i_4 = 1; i_4 < 8; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                {
                    var_27 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_12 [i_4 + 2])) : (((/* implicit */int) arr_12 [i_4 + 1]))))), (max((max((5559190029296304251ULL), (((/* implicit */unsigned long long int) (signed char)45)))), (((/* implicit */unsigned long long int) var_9))))));
                    arr_15 [i_0] [i_4 + 1] = (unsigned char)255;
                }
            } 
        } 
    }
}
