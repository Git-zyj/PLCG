/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226356
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
    var_16 += ((/* implicit */unsigned int) (_Bool)0);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) (((-(((/* implicit */int) (unsigned short)5495)))) >= (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_17 = ((/* implicit */unsigned short) ((long long int) arr_0 [i_0] [1ULL]));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_18 = arr_5 [i_0] [i_1] [i_1];
            var_19 = ((/* implicit */unsigned short) arr_5 [i_1] [i_1] [i_0]);
        }
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (_Bool)1))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)-6)) ? (((/* implicit */int) arr_10 [i_4] [i_3] [i_4 - 1])) : (((/* implicit */int) var_0)))), (((((/* implicit */int) var_5)) << (((((/* implicit */_Bool) 5115873711819522549LL)) ? (((/* implicit */int) arr_13 [(unsigned char)10] [i_6] [i_4] [i_6] [(_Bool)1])) : (((/* implicit */int) (_Bool)1))))))));
                                var_22 -= ((/* implicit */int) max((((/* implicit */long long int) arr_7 [i_6])), (((((/* implicit */_Bool) ((unsigned short) (signed char)6))) ? (((long long int) var_9)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((_Bool) (_Bool)1)))));
                }
            } 
        } 
    }
    var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_12))) ? (-5779657370835765460LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-6)))));
}
