/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210760
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
    var_11 = max(((-(var_2))), (((/* implicit */unsigned int) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
    var_12 = ((/* implicit */short) ((((var_7) + (2147483647))) << (((((((2147483639) > (((/* implicit */int) (signed char)74)))) ? (((2147483641) << (((((((/* implicit */int) var_9)) + (72))) - (4))))) : (((/* implicit */int) var_0)))) - (2147483641)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */long long int) -2147483641)) > (arr_2 [i_0])))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (641923971U) : (((/* implicit */unsigned int) ((((-1729033251) + (2147483647))) << (((((/* implicit */int) (signed char)-66)) + (67))))))))));
        var_14 *= ((/* implicit */signed char) (((!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76))) < (3653043328U))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)9997)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (short)15360)) : (min((var_3), (((/* implicit */int) (short)-4096)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */short) ((-4504011817143989935LL) / (((/* implicit */long long int) (+(-1729033251))))));
        var_15 = ((/* implicit */long long int) arr_0 [i_1]);
        arr_6 [i_1] = ((/* implicit */long long int) -602506856);
        /* LoopNest 3 */
        for (unsigned short i_2 = 2; i_2 < 9; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 1; i_4 < 9; i_4 += 4) 
                {
                    {
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max(((unsigned char)255), (var_8))))));
                        arr_17 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) 641923966U);
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_10 [i_1] [i_2 - 1] [i_1] [i_4 + 1])) : (((/* implicit */int) (short)-19398))))) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_3])) > (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_4 + 2]))))) : (((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) arr_10 [i_1] [i_2 - 2] [i_1] [i_4 + 1])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1]))))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */signed char) max(((-2147483647 - 1)), (var_3)));
}
