/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190715
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
    var_19 = ((/* implicit */unsigned char) var_14);
    var_20 -= ((/* implicit */unsigned long long int) var_5);
    var_21 = (+(((((/* implicit */_Bool) var_13)) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) (~(-2126595281)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */short) max((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_15))))))), ((+((~(3148132104U)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    var_23 = ((/* implicit */unsigned char) (-(arr_6 [i_2 + 3] [i_2 - 1] [i_2 + 3])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))));
                                arr_12 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2126595292)) ? (arr_0 [i_0] [i_2 - 1]) : (var_6)))) ? (arr_9 [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
                                arr_13 [i_0] = ((/* implicit */unsigned char) ((int) var_0));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) ((((_Bool) arr_0 [(unsigned char)13] [(unsigned char)13])) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) 1917056847)) : (31ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)158))))));
                }
                var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((((/* implicit */_Bool) 10ULL)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(_Bool)1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_0] [0ULL])))))) >= (min((arr_7 [i_0]), (((/* implicit */unsigned int) (short)-32751))))));
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) % (((/* implicit */int) var_5))))) / (max((((/* implicit */unsigned int) max((-2126595280), (-812643751)))), (min((20U), (((/* implicit */unsigned int) var_9))))))));
}
