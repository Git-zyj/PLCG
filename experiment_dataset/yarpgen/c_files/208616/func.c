/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208616
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
    var_18 ^= ((/* implicit */signed char) (~(var_13)));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_6) : ((-(((/* implicit */int) var_7))))))) * ((((-(var_8))) - (((/* implicit */unsigned int) (-(var_14))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned int) min(((~(arr_6 [(signed char)9] [i_0] [i_0]))), ((-(var_17)))))), ((+(arr_0 [i_1])))));
                arr_7 [i_1] = ((/* implicit */signed char) var_12);
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_21 = ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) - (max((((/* implicit */unsigned int) var_14)), (arr_5 [i_2] [i_1]))))) < ((~(4294967267U))));
                    var_22 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_2])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2]))))), (((/* implicit */unsigned int) (+(arr_2 [i_1]))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    arr_13 [i_0] = max((((((/* implicit */_Bool) ((unsigned short) var_17))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_10)) / (arr_5 [i_0] [i_3])))) : (max((((/* implicit */unsigned long long int) var_2)), (arr_11 [i_1] [i_1] [i_1] [(_Bool)1]))))), (((/* implicit */unsigned long long int) ((1903702872) << (((arr_1 [i_0] [i_1]) - (250786352)))))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned int) var_16);
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) (~(max((1903702872), (((-1903702861) / (((/* implicit */int) (unsigned char)15))))))));
                            var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */int) var_0)) + (((/* implicit */int) var_16)))) : (((/* implicit */int) arr_12 [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) max((var_11), (var_10)))) == (arr_9 [i_0] [i_3]))))) : (((unsigned int) var_1))));
                            arr_21 [i_0] [i_0] = ((/* implicit */long long int) (~((~((~(var_8)))))));
                        }
                    }
                    arr_22 [(_Bool)1] [(_Bool)1] [i_3] [i_1] = ((/* implicit */_Bool) ((((arr_16 [i_0]) == (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1])))) ? (((((/* implicit */_Bool) ((arr_3 [i_0]) / (var_9)))) ? (var_9) : (((unsigned int) var_10)))) : (min(((~(arr_0 [i_3]))), (((/* implicit */unsigned int) arr_10 [i_3] [i_1] [i_0]))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) max(((+(((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49148))))))), (((/* implicit */unsigned int) var_10)))))));
}
