/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213547
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */unsigned int) var_12)) <= (var_4))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) min((max(((~(var_6))), (((/* implicit */unsigned int) min((var_0), (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10446)) ? (var_7) : (var_7))))))) : (((/* implicit */int) ((((/* implicit */long long int) 1477811149U)) < (var_15))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((min(((_Bool)1), ((_Bool)1))), (((((/* implicit */_Bool) (short)-12637)) && (((/* implicit */_Bool) (short)10446)))))))));
                            var_19 -= (!((((_Bool)1) && ((_Bool)1))));
                            arr_16 [i_0] [i_0] [i_1] [i_2] [i_3] [(short)9] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)236)) && ((_Bool)1))))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_5 = 2; i_5 < 8; i_5 += 2) 
                        {
                            var_20 *= ((/* implicit */unsigned int) (_Bool)1);
                            arr_19 [(_Bool)1] [3U] [i_2] [i_3] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((max((((/* implicit */int) var_1)), (var_12))) + (2147483647))) >> (((((/* implicit */int) (_Bool)1)) >> (((var_3) - (9167473643391399343LL)))))))) ^ ((~(((unsigned long long int) var_13))))));
                        }
                        var_21 |= ((((((/* implicit */int) (short)-10447)) <= (min((var_12), (((/* implicit */int) (_Bool)1)))))) ? (min((((/* implicit */long long int) (-(((/* implicit */int) var_10))))), ((((_Bool)1) ? (((/* implicit */long long int) var_5)) : (var_15))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) <= (var_12))))))));
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_22 += ((/* implicit */signed char) min((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) -302816279)))), ((!((_Bool)1)))));
                        var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) < (((min((var_7), (((/* implicit */long long int) (signed char)54)))) | (((/* implicit */long long int) ((/* implicit */int) (short)-10452)))))));
                        arr_22 [(_Bool)1] [i_1] [i_1] [i_1] [(unsigned short)4] [(unsigned short)4] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) 524256)) ? (302816299) : (((/* implicit */int) (_Bool)0)))) == ((-(((/* implicit */int) (_Bool)1))))))) <= (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) || ((_Bool)0))) && ((!(((/* implicit */_Bool) var_4)))))))));
                    }
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_7 = 4; i_7 < 12; i_7 += 4) 
    {
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            {
                var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -674140148347820986LL)) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) (signed char)124))))) != (911478944U)));
                arr_28 [i_8] = ((/* implicit */unsigned char) (((_Bool)1) && (((/* implicit */_Bool) (signed char)42))));
            }
        } 
    } 
}
