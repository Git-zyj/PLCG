/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54673
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) max(((short)23105), ((short)4)))) | (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)141)), (var_5))))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_4)))))) : (((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)141))))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */int) min(((unsigned char)115), ((unsigned char)140)))) == (((/* implicit */int) arr_2 [i_0 + 3] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_0 + 4] [(unsigned char)12])))) : (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 3]))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned char)2]))) : (var_10)))))));
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_0))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned short) arr_2 [i_4] [i_1]);
                                var_17 -= ((/* implicit */signed char) (unsigned char)135);
                                var_18 = ((/* implicit */unsigned short) var_3);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_7 [i_1] [i_1] [i_0 + 2]))))));
            }
        } 
    } 
    var_20 -= ((/* implicit */signed char) (short)12084);
}
