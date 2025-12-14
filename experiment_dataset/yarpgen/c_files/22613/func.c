/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22613
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_11 *= ((/* implicit */unsigned short) (unsigned char)69);
        var_12 = ((/* implicit */unsigned long long int) ((_Bool) (short)0));
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)166)))) ? (((((/* implicit */_Bool) var_5)) ? (216431325) : (((/* implicit */int) (unsigned short)8196)))) : ((-(((/* implicit */int) (signed char)84)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) var_3)))));
    }
    var_14 &= var_1;
    var_15 &= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)137)) | (((((/* implicit */_Bool) 1310973016)) ? (216431322) : ((+(((/* implicit */int) (_Bool)1))))))));
    var_16 = ((/* implicit */short) (_Bool)1);
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            {
                arr_9 [i_2] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((((/* implicit */int) (unsigned char)66)) == (((/* implicit */int) (unsigned char)190))))))) - (((/* implicit */int) (signed char)-84))));
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((var_4) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))))));
                /* LoopSeq 2 */
                for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */_Bool) var_7);
                        arr_17 [i_1] [i_3] = ((/* implicit */signed char) (((-(262143U))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */long long int) var_2)) : (var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */unsigned int) ((992950019) & (((/* implicit */int) (unsigned char)189))))) : (2027817908U)))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_22 [i_1] [i_3] [i_2] [i_2] [i_3] [i_5] = ((/* implicit */short) (signed char)-102);
                        arr_23 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 1610612736)) || (((/* implicit */_Bool) 4261412864U))))) > (((/* implicit */int) (unsigned char)95))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) 32505856U))));
                    }
                    var_21 = ((/* implicit */int) (((+(6109215423224016470LL))) >= (((/* implicit */long long int) min((((/* implicit */unsigned int) (+(527428676)))), (2287780801U))))));
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) & (var_8))))));
                    var_23 = ((/* implicit */unsigned long long int) (unsigned char)95);
                }
                var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(2267149388U))))));
            }
        } 
    } 
}
