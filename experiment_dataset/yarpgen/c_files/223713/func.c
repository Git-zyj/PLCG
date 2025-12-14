/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223713
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
    var_20 = ((/* implicit */long long int) var_19);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) ((((/* implicit */int) (unsigned char)39)) > (arr_5 [i_0] [i_0] [(unsigned char)12] [i_0]))))))));
                                arr_13 [i_0] [i_1] [i_1] [12ULL] [7ULL] = ((/* implicit */short) max((max((min((arr_4 [i_0] [i_0] [i_0] [i_4]), (((/* implicit */unsigned long long int) (unsigned char)22)))), (((/* implicit */unsigned long long int) (short)10845)))), (var_14)));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) var_3)), (max((arr_9 [i_0] [i_1] [i_2] [i_2] [i_0]), (((/* implicit */unsigned long long int) arr_11 [i_2] [i_1] [i_1] [i_1] [(unsigned char)12] [i_0] [i_0])))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_23 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-468)) ? (((/* implicit */int) (short)-466)) : (((/* implicit */int) (unsigned char)121)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) * ((-(var_16))))));
    var_24 = ((/* implicit */unsigned char) ((var_0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) var_18)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)121))) >= (4719589230801737425LL))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32761))))) ? (((((/* implicit */_Bool) var_8)) ? (8388607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_10))))))));
}
