/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47507
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
    var_12 = ((/* implicit */int) ((unsigned int) var_2));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_4 [i_0] |= ((/* implicit */short) ((min(((_Bool)1), ((_Bool)1))) ? (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_8))) >> (((var_8) - (18022577706970595217ULL))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_10)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) var_9))))) && (((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) ((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_7)))))))))));
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((int) var_8)), (((((/* implicit */int) var_5)) % (((/* implicit */int) var_5))))))) ? (((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (var_8) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), ((~(((/* implicit */int) var_4)))))))));
                            var_16 = ((max((((/* implicit */unsigned long long int) var_3)), (var_8))) - (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (var_0)))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(var_6)))) + (((((/* implicit */_Bool) ((var_10) - (((/* implicit */unsigned long long int) var_6))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)29399)), (18446744073709551600ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) var_0))), (((((/* implicit */int) (unsigned short)61482)) | (((/* implicit */int) (_Bool)1))))))) > (var_8))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_11), (max((var_9), (((/* implicit */signed char) var_5))))))) / (((int) var_10))));
    var_20 -= ((/* implicit */unsigned int) var_6);
}
