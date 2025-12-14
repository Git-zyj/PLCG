/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22860
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */short) ((unsigned long long int) min(((unsigned short)8473), (((/* implicit */unsigned short) (short)1023)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned char) var_6);
                                arr_14 [i_0] [i_0] [i_4] [i_0] [(short)2] = ((/* implicit */unsigned int) var_2);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((68719476608ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(641270908U)))) : (((((/* implicit */_Bool) (unsigned short)8473)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111))))))) < (((/* implicit */unsigned long long int) arr_11 [i_2] [i_1] [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned int) ((var_7) + (((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8473))) : (var_3)))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (-2147483647 - 1)))))));
    var_21 -= ((/* implicit */short) (-((+(min((var_13), (((/* implicit */unsigned long long int) var_1))))))));
}
