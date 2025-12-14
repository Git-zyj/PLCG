/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48242
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) ((((arr_1 [i_3 + 3]) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_3 + 2]))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || ((!(((/* implicit */_Bool) arr_5 [i_0] [i_2]))))))))));
                                var_12 -= ((((/* implicit */_Bool) 2154824541411171632ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)127))) : (6414814350969791404ULL));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) min(((((!(((/* implicit */_Bool) 6414814350969791422ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_12 [i_1]))), (((/* implicit */long long int) ((unsigned char) arr_2 [i_0]))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) 2147483636);
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((-5366627957805591342LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-4902)))))))) != (max((((/* implicit */unsigned long long int) (short)24669)), (((((/* implicit */_Bool) (unsigned char)8)) ? (6414814350969791404ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
    var_16 = ((/* implicit */unsigned char) ((short) (-(var_6))));
    var_17 *= ((/* implicit */unsigned long long int) ((unsigned short) (+(var_6))));
}
