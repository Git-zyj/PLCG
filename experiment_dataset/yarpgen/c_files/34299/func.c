/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34299
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
    var_11 *= ((/* implicit */short) ((((/* implicit */int) var_8)) / (((((/* implicit */int) ((signed char) var_6))) * (((int) var_8))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                            {
                                var_12 = ((/* implicit */signed char) ((((/* implicit */long long int) var_2)) - (((long long int) var_3))));
                                arr_13 [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))));
                                var_13 -= ((/* implicit */long long int) var_2);
                                var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */int) var_8)))) % (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (var_0)))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((var_4) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) == (((/* implicit */int) ((unsigned short) var_3)))));
                            }
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_7)) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (var_10)))))) + (((((long long int) var_2)) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))))));
                            var_17 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_7))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_6))) | (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15973700185437571790ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-13925))))) && (((/* implicit */_Bool) var_0)))))));
                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (var_10)))) && (((/* implicit */_Bool) ((long long int) var_0))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_10)) : (var_5))) : ((~((+(var_5)))))));
            }
        } 
    } 
}
