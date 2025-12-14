/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227067
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
    var_20 = ((/* implicit */long long int) ((((((((/* implicit */int) (signed char)-58)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)255)) - (228))))) ^ (((/* implicit */int) ((((/* implicit */int) ((2593714475U) == (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) >= (((((/* implicit */int) (_Bool)1)) >> (((41281503U) - (41281473U))))))))));
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (-119865950))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [9LL] [9LL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_0] [i_1])) / (119865963))) / (((((/* implicit */int) (signed char)-17)) * (((/* implicit */int) var_5))))))) * (((((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])) / (14161106621976029649ULL))) * (((17334212580361763570ULL) / (((/* implicit */unsigned long long int) -119865971))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_18)) < (var_17))))) >= (((2565103239U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)84))))))))) / (((5263665283797243062LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20550)))))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((532046191115010479LL) - (((/* implicit */long long int) 4165295441U)))) * (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)-18101)))))))) & (((((/* implicit */unsigned long long int) ((-8388901495658535557LL) / (((/* implicit */long long int) 119865970))))) * (((((/* implicit */unsigned long long int) 119865971)) / (9137884914814853181ULL))))))))));
                }
            }
        } 
    } 
}
