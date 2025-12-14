/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2233
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
    var_16 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) var_5)), (var_6)))))) ? (-1247657053) : ((-(((/* implicit */int) (unsigned short)65535))))));
                                var_18 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)55296)))) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) 255)) : (((-7418445342190316379LL) / (-7418445342190316379LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1023)))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (short)-8841);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (signed char i_6 = 4; i_6 < 13; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_23 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_11 [i_1] [i_5] [i_6 + 1] [i_7])))), (((/* implicit */int) ((arr_16 [i_6 - 2] [i_5] [i_1] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31))))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) min(((unsigned short)33225), (((/* implicit */unsigned short) (unsigned char)199))))))))) : (((7418445342190316386LL) - (((/* implicit */long long int) ((/* implicit */int) (short)31)))))));
                                var_19 *= ((/* implicit */signed char) ((6036023525456831259ULL) + (18446744073709551603ULL)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    var_20 = ((/* implicit */long long int) var_12);
                    var_21 = ((/* implicit */short) (((~(((11ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_8] [i_1] [i_1] [i_0]))))))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_0] [i_0])), (var_9)))) == ((+(4136606892745689630ULL))))))));
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 2; i_10 < 15; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_35 [i_10] [i_10] = ((/* implicit */unsigned long long int) (((_Bool)1) ? ((~(7418445342190316379LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))));
                                var_22 ^= ((/* implicit */int) (signed char)76);
                                arr_36 [i_0] [i_10] = ((/* implicit */unsigned short) (unsigned char)254);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_31 [i_0] [i_0])) << (((var_12) - (18078587119307043625ULL)))))));
                }
            }
        } 
    } 
}
