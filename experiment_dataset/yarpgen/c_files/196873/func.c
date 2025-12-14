/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196873
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
    var_12 = ((/* implicit */unsigned char) (short)32767);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) ^ (var_7)));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4201972866309642559ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (var_11)))) : (((/* implicit */int) arr_0 [(unsigned char)6] [i_0]))))) ? (((/* implicit */long long int) ((min((((/* implicit */int) (unsigned short)63586)), (-1))) * ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [10U] [i_0])) << (((4201972866309642559ULL) - (4201972866309642558ULL)))))) : (min((var_7), (((/* implicit */long long int) arr_0 [(unsigned char)3] [i_0]))))))));
    }
    var_13 += ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    for (int i_1 = 1; i_1 < 11; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) (~(7653007159605901579LL)));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_2] = ((/* implicit */short) (~((~(((/* implicit */int) var_10))))));
            /* LoopNest 3 */
            for (unsigned int i_3 = 1; i_3 < 10; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 4) 
                    {
                        {
                            arr_17 [i_1 + 1] [i_1 + 1] [i_3] [i_2] [i_5 + 1] = ((/* implicit */int) var_9);
                            arr_18 [i_2] [(_Bool)1] [i_3] [(_Bool)1] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (arr_13 [i_1] [i_2] [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))))))));
                            arr_19 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_11 [i_1] [i_2] [i_1] [i_4]);
                            arr_20 [i_1] [i_1] [i_2] [i_1 - 1] [i_1 + 1] [i_1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)86)) ? (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)37307)), (arr_6 [i_1 + 1] [i_1 + 1] [i_3 + 2])))) ? (((/* implicit */long long int) ((arr_13 [i_1 + 1] [i_1 + 1] [i_5 + 1]) << (((397830410) - (397830379)))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_9))))) : (((arr_9 [i_1] [i_1 + 1] [i_2]) ? (min((var_9), (((/* implicit */long long int) arr_15 [2])))) : (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1 - 1] [1ULL] [i_2])) / (((/* implicit */int) arr_0 [i_4] [i_2])))))))));
                            var_15 = ((/* implicit */_Bool) max((var_15), (((_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_5))))) & ((-(2147483647))))))));
                        }
                    } 
                } 
            } 
        }
        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1 + 1] [7ULL] [i_1])) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)37306))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_2), (((/* implicit */signed char) arr_12 [i_1] [i_1] [i_1] [i_1 - 1])))))) : (var_7)))) ? ((~(((16) & (((/* implicit */int) var_8)))))) : ((~(((/* implicit */int) ((_Bool) 1792ULL))))));
    }
}
