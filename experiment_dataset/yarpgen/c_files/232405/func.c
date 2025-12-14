/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232405
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) (-(var_7))));
                var_10 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_7)) : (var_2)))) ? (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_1)))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_11 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)25276)) ? (731189627U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)137))))))));
                    var_12 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_4)) ? (var_5) : (var_5))), (((((/* implicit */_Bool) (+(var_4)))) ? (var_5) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_7)) : (var_9)))))));
                    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29185)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (8764532303737038136ULL))))));
                    var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) var_7))))) ? (((/* implicit */unsigned long long int) (~(var_1)))) : (((((/* implicit */_Bool) ((long long int) var_3))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                }
                for (unsigned short i_3 = 4; i_3 < 15; i_3 += 2) 
                {
                    var_15 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) 9682211769972513480ULL)))));
                    arr_13 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((long long int) var_0)) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_4)) && (var_0))))))) : ((-(var_7)))));
                    arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) var_6)))));
                }
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) ? (var_2) : (((/* implicit */long long int) var_7))))) || (var_0)));
                var_16 = ((/* implicit */unsigned int) min((var_16), (max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))), ((-(var_1)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */long long int) var_1)))) & (var_2)))));
}
