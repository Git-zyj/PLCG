/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247235
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
    var_16 &= ((/* implicit */short) ((unsigned long long int) (+(var_1))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_1] = ((/* implicit */signed char) max(((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_3))))), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_2))) + ((+(var_10))))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_0] [i_2] [i_3 - 1] = ((/* implicit */short) var_10);
                        var_17 = max(((~(var_4))), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_2 + 1] [i_0 - 2] [i_0])) ^ (((/* implicit */int) (signed char)31))))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((long long int) max((max((9207128697878824224LL), (var_13))), (((/* implicit */long long int) 3292679289U))))))));
                        var_19 = ((/* implicit */long long int) min((min(((+(((/* implicit */int) (short)0)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) ((unsigned short) arr_8 [i_0 - 2] [i_0 - 3] [i_2 + 3] [i_2 - 1])))));
                    }
                    for (unsigned int i_4 = 4; i_4 < 13; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_4 [i_4 - 2] [i_1] [i_4 - 1]) : (((/* implicit */long long int) 4294967274U)))), (((/* implicit */long long int) ((short) var_15))))))));
                        arr_13 [i_1] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)96))))) ? (min((((/* implicit */long long int) var_9)), (-2102903224592484817LL))) : (((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) var_15))))))) == (max((min((((/* implicit */long long int) var_0)), (var_11))), (((/* implicit */long long int) max((var_8), (((/* implicit */unsigned char) (_Bool)1)))))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) % (((((/* implicit */long long int) var_7)) % (var_13)))))) ? (((/* implicit */int) ((_Bool) arr_9 [i_0] [i_0] [i_0 - 1] [i_0 + 1]))) : (((/* implicit */int) ((arr_9 [12LL] [i_1] [i_2 + 2] [i_0 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))));
                    }
                    var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_2 + 3]))))) * (((((/* implicit */_Bool) 6418759422753573279LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40521))) : (var_9)))))) % (max((var_4), (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_1])))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((max((((/* implicit */unsigned int) var_10)), (max((1623198118U), (var_14))))) ^ (((((17634037637865380096ULL) > (((/* implicit */unsigned long long int) var_3)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_14))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))))))))));
}
