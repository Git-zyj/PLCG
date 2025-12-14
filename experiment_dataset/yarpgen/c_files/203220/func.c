/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203220
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
    var_15 = ((/* implicit */_Bool) var_9);
    var_16 *= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) (unsigned char)123))))) ? (((/* implicit */int) ((signed char) var_13))) : (((/* implicit */int) max(((unsigned char)123), (((/* implicit */unsigned char) var_9)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((arr_3 [i_0]), (arr_3 [(unsigned short)10]))), (min((((/* implicit */short) (_Bool)0)), (arr_3 [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_1 [(_Bool)1]))) ? (((unsigned int) arr_3 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) : ((+(arr_0 [i_0] [i_0])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_1 - 1] [i_2] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((max((((/* implicit */unsigned int) var_9)), (arr_6 [i_3] [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_5 [i_1] [i_0] [i_1] [i_1]))))))), ((+(arr_0 [i_1 - 3] [i_2 - 1])))));
                            var_18 *= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
}
