/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234964
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        var_12 += ((/* implicit */int) ((((/* implicit */_Bool) min((min(((short)27808), ((short)27808))), (var_4)))) ? (max((((((/* implicit */_Bool) -15)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))), (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */short) var_1))))))) : (((/* implicit */unsigned long long int) (~(-2961590567479725103LL))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                var_13 = ((((/* implicit */_Bool) ((short) 4556783893330799559LL))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3206473213U)) ? (1590382583) : (((/* implicit */int) (short)27810))))) : ((~(arr_7 [i_0 + 1] [i_1] [i_2] [i_2]))));
                var_14 = ((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767))));
                arr_8 [(_Bool)1] [i_1] [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) (short)-27808)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) -4859381328152026661LL)))))));
                arr_9 [i_0 + 2] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0 + 4]))));
            }
            arr_10 [i_0 + 4] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)97))))) : (var_2)));
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                var_15 = ((((((/* implicit */_Bool) (short)-4584)) ? (((/* implicit */long long int) ((/* implicit */int) (short)11715))) : (3379046663416931885LL))) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))) - (18008))));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_0 + 2] [i_0 - 1])))))));
            }
            for (short i_4 = 1; i_4 < 8; i_4 += 2) 
            {
                arr_17 [i_4] [i_4] [i_1] [i_4 + 1] = (~(var_5));
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_22 [i_0] [i_1] [i_4] [i_4 + 2] [i_5] [5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)27809)))))) : (var_0));
                            arr_23 [i_4] = ((/* implicit */_Bool) -3379046663416931891LL);
                        }
                    } 
                } 
                arr_24 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */int) (-(5761562386920618940LL)));
                var_17 ^= ((/* implicit */signed char) (-(arr_2 [i_0 + 1] [i_0])));
            }
        }
        for (short i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((unsigned char) min((((((/* implicit */_Bool) (short)-27808)) ? (((/* implicit */int) (short)21704)) : (((/* implicit */int) (short)27804)))), (((/* implicit */int) ((signed char) var_10)))))))));
            arr_27 [i_7] [i_7] = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_6)) > (((/* implicit */int) var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7]))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)21704)) >> (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((_Bool) arr_12 [i_0 - 1] [i_7] [(short)1]))) : (((/* implicit */int) var_6)))))));
        }
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */int) (short)-4458)) - (((/* implicit */int) (_Bool)1)))))));
    }
    var_20 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) min((var_7), (((/* implicit */signed char) var_6))))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2051408347)) ? (3379046663416931903LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
}
