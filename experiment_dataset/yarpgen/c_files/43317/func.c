/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43317
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
    var_11 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (3764178451805753568ULL) : (((/* implicit */unsigned long long int) 2055023086U)))), (16683185917687464425ULL))))));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((((/* implicit */_Bool) max((min((((/* implicit */long long int) var_4)), (var_3))), (((/* implicit */long long int) var_4))))) ? (((14682565621903798047ULL) >> (((max((2055023086U), (((/* implicit */unsigned int) var_4)))) - (4294967197U))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2055023086U)))) : (var_0))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_13 = ((/* implicit */long long int) (-(((16683185917687464425ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
            var_14 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [2])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_3))) % (((/* implicit */long long int) 1588262678U))));
            var_15 = ((/* implicit */unsigned int) max((var_15), ((((+(arr_1 [i_0]))) << (((((((/* implicit */unsigned long long int) -10422550)) - (14682565621903798056ULL))) - (3764178451795330998ULL)))))));
        }
        for (int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                var_16 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 10422552))));
                var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */int) ((arr_1 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (((/* implicit */int) (unsigned short)65535))));
                var_18 = ((/* implicit */int) max((var_18), (((((((/* implicit */int) arr_8 [14])) + (2147483647))) << (((((/* implicit */int) var_7)) - (48)))))));
                arr_9 [8] [i_2] [8] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? (var_0) : (((/* implicit */long long int) 1070211549)))))));
            }
            for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                var_19 -= ((/* implicit */signed char) var_2);
                var_20 &= 1839727029;
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        {
                            var_21 |= ((/* implicit */unsigned char) min(((-((+(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))))), (((/* implicit */int) ((short) ((short) 1839727036))))));
                            var_22 ^= ((/* implicit */int) ((((((/* implicit */long long int) ((int) 18446744073709551597ULL))) / (((var_3) - (var_0))))) + (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                            var_23 |= ((/* implicit */signed char) (-((-(((((/* implicit */int) var_4)) / (var_8)))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (short)-13630))));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_8 = 1; i_8 < 21; i_8 += 4) 
                {
                    arr_23 [18LL] [i_0] [18LL] [i_0] [i_0] |= (-(((/* implicit */int) var_7)));
                    arr_24 [20ULL] [(unsigned char)18] [i_7] [i_7] [i_7] |= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)16))));
                }
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (-939689654)))) + (arr_10 [i_0] [i_0] [i_0]))))));
                var_26 &= ((/* implicit */unsigned int) ((((/* implicit */int) (short)13650)) == (((/* implicit */int) var_7))));
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_0] [i_2] [18U] [i_7])) ? (((/* implicit */unsigned int) ((int) var_10))) : (1298967698U)));
            }
            var_28 *= ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (2706704614U));
            var_29 -= ((/* implicit */unsigned char) min((((long long int) -1839727019)), (((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned long long int) (signed char)25)), (4321193333741618921ULL)))))));
        }
        var_30 = ((/* implicit */long long int) (-(min((arr_1 [i_0]), (((/* implicit */unsigned int) var_8))))));
    }
}
