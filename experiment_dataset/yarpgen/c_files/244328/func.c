/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244328
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
    var_13 -= ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12427))) > (var_11)));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)3)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        {
                            var_15 |= ((/* implicit */long long int) var_2);
                            arr_15 [i_0] [i_0] [i_4] [i_1] = ((/* implicit */signed char) 505314368);
                            arr_16 [i_2] [i_2] [i_2] [i_2] [i_0] [i_2] |= ((/* implicit */unsigned char) min((max((((2032543499982868226ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((-2101571858) - (((/* implicit */int) (unsigned short)6232))))))), (((((/* implicit */_Bool) 505314374)) ? (((/* implicit */unsigned long long int) (~(var_5)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0]))) : (var_6)))))));
                            var_16 = ((/* implicit */unsigned long long int) (short)32739);
                        }
                    } 
                } 
            } 
            var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) (short)7124)))) : (((((/* implicit */int) var_8)) >> (((29626802773514879LL) - (29626802773514857LL)))))));
            var_18 = ((/* implicit */int) max((((/* implicit */unsigned int) (-(-1)))), (var_11)));
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1430823271U)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-19))))) ? (((((/* implicit */_Bool) ((unsigned long long int) 6116378477266480702ULL))) ? (arr_10 [i_1] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_6 [i_1] [17U] [i_1])) : (var_6)))) ? (var_3) : (((/* implicit */int) var_2)))))));
        }
    }
    for (short i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)27103)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-12)))))))), (29626802773514883LL)));
        var_21 = min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_5])) : (-363691653))), (((/* implicit */int) max((((/* implicit */short) var_0)), (var_2)))));
    }
    var_22 = min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))) : (var_1))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), ((~(((((/* implicit */_Bool) -2101571846)) ? (((/* implicit */long long int) 762831047U)) : (-29626802773514874LL))))));
}
