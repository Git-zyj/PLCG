/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232853
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14902)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1355299884857073199LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_6)))) : (((((/* implicit */_Bool) arr_3 [i_3] [(unsigned short)8] [i_3])) ? (((/* implicit */unsigned long long int) arr_12 [i_0])) : (28ULL)))))) ? (((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-112))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) : (1355299884857073224LL))))) : (((((/* implicit */_Bool) arr_0 [i_2 - 2] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_4] [4ULL] [4ULL] [i_0]))) : (-1355299884857073196LL))))))));
                                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(34ULL)))) ? (((((/* implicit */_Bool) 124272619)) ? (1355299884857073203LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535)))))));
                                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2 + 1] [i_4 - 1])) ? (((/* implicit */long long int) ((var_5) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)64996))))) : (1355299884857073210LL)))) ? (((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) (signed char)14)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 124272619)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_3] [i_4 - 1] [i_1]))) : (1355299884857073210LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4973780861269059054LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-1355299884857073210LL)))) : (((unsigned long long int) arr_6 [i_4] [i_4])))))))));
                                arr_17 [i_2] [i_1] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((unsigned int) 18446744073709551591ULL))) ? (3176919924370453548LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */short) (~(((arr_4 [i_0] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_6)))));
                var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49641)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((long long int) 9392501368233626532ULL))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_8)))));
                arr_18 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29425)) ? (((/* implicit */unsigned long long int) -1363664572)) : (28ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [(_Bool)1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-1355299884857073199LL)))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (unsigned short)61136))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4)))))))));
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) 2147483647)) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2679))));
}
