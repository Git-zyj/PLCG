/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201285
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
    var_17 = ((/* implicit */unsigned short) (-(var_4)));
    var_18 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_2 - 1] [i_2]))))) ? (max((((((/* implicit */_Bool) (unsigned char)0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_14))))))) : (15928793457796029201ULL)));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) arr_7 [i_0] [i_1] [10U] [1U])) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_2 - 2] [i_0] [i_2 - 3] [i_2] [i_2 + 1] [i_2 - 2])) >= (((/* implicit */int) arr_7 [i_0] [(unsigned char)5] [(_Bool)1] [i_0]))))) : (((((/* implicit */int) arr_9 [i_2 - 3] [i_0] [i_2 - 3] [(unsigned short)1] [(unsigned short)1] [i_2 - 2])) + (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_2]))))));
                            arr_11 [i_0] [(unsigned char)10] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_2 - 1])) ? (((/* implicit */int) arr_7 [i_0] [i_2 - 2] [i_2 - 2] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_2 - 3] [i_2 - 3] [i_2 - 3]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) * (var_15)))) >= (var_9)))) : ((+((-(((/* implicit */int) arr_9 [(unsigned char)5] [i_0] [i_2] [i_0] [i_3] [(unsigned char)5]))))))));
                        }
                    } 
                } 
                arr_12 [(unsigned char)9] [i_0] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) + (var_7)))), (max((var_4), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])))))) - (max((arr_3 [i_0]), (((/* implicit */unsigned long long int) var_15))))));
                var_21 = ((/* implicit */unsigned short) min((arr_4 [i_0] [i_1]), (((unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))));
                arr_13 [(short)14] [i_1] |= ((/* implicit */_Bool) min((max((((/* implicit */unsigned char) arr_9 [(signed char)10] [4] [i_0] [(signed char)10] [i_1] [i_0])), (var_16))), (((/* implicit */unsigned char) ((arr_3 [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                var_22 -= ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0] [i_1])) < ((+(((/* implicit */int) var_16)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((max((arr_0 [i_0] [i_0]), ((_Bool)0))) ? (((arr_2 [i_1]) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_1])) << (((((/* implicit */int) (unsigned char)133)) - (124))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_15)))) ? (((/* implicit */unsigned long long int) var_12)) : (((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))));
}
