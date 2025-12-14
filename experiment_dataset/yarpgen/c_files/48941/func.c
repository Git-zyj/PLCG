/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48941
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
    var_16 = ((/* implicit */_Bool) (+((+((+(((/* implicit */int) (unsigned char)0))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max(((+(6937523674088848525LL))), (((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), (min((var_0), (((/* implicit */int) (unsigned char)255))))))))))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_18 ^= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (0LL)))))))));
                    var_19 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) min((var_6), ((unsigned char)52)))), (min((((/* implicit */unsigned short) var_2)), (var_4)))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((max((var_11), ((unsigned short)2762))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))))))))));
                    var_21 += ((/* implicit */int) ((min((-9LL), (((/* implicit */long long int) (_Bool)1)))) / (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))));
                }
                /* vectorizable */
                for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((unsigned long long int) var_3)))));
                    arr_15 [i_0] [i_1] [i_4] &= ((/* implicit */int) 18446744073709551612ULL);
                    var_23 = ((long long int) var_6);
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_4] [i_0] = ((/* implicit */signed char) ((long long int) (-(((/* implicit */int) var_4)))));
                                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (-(((/* implicit */int) var_5)))))));
                                var_25 -= ((/* implicit */long long int) var_1);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            {
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2932113121U)));
                var_27 = ((/* implicit */unsigned long long int) min((((max((((/* implicit */long long int) (signed char)55)), (-3937542185062138108LL))) == (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((var_9) <= (((/* implicit */long long int) min((var_1), (((/* implicit */int) var_7)))))))));
            }
        } 
    } 
}
