/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38268
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
    var_15 = ((/* implicit */signed char) min((((unsigned long long int) var_9)), (((((/* implicit */_Bool) max(((short)(-32767 - 1)), ((short)32744)))) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (min((((/* implicit */unsigned int) (short)32766)), (((unsigned int) var_13)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) (signed char)-5))))) ? ((-(((/* implicit */int) (short)32763)))) : (((((/* implicit */int) var_11)) + (((/* implicit */int) (signed char)-76)))))))));
                    var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) ((short) ((((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_2])) <= (((/* implicit */int) (short)-1)))))) : (((/* implicit */int) max((arr_7 [i_2] [i_1] [i_1] [i_0]), (arr_4 [i_2 - 3]))))))));
                    var_18 *= ((/* implicit */signed char) (~(max(((-(((/* implicit */int) var_11)))), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                    var_19 *= var_9;
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((((((/* implicit */unsigned long long int) -4405840148480163065LL)) * (18446744073709551615ULL))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32744))) * (arr_5 [i_4] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])))));
                                arr_15 [i_3] = ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (18446744073709551595ULL)))) ? (((/* implicit */int) ((signed char) (unsigned char)237))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))), ((-(((/* implicit */int) var_8))))));
                                var_21 *= ((/* implicit */signed char) 466339352755718124LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
