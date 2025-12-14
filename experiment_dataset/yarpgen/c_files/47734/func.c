/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47734
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
    var_18 = 8291148005124155640ULL;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) (+(min((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL)))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */unsigned long long int) 16777184)) + (15302565668210614757ULL))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-18214)), ((-9223372036854775807LL - 1LL))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)255)), (2618339561922776629ULL))) : (((/* implicit */unsigned long long int) min((-1430159284), (((/* implicit */int) (unsigned char)0)))))))));
                    var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (short)27691))) ? (8012576098413000873LL) : (((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) (short)511)), ((unsigned short)14)))), (((((/* implicit */_Bool) 1018304632955371176ULL)) ? (((/* implicit */int) (unsigned short)1920)) : (((/* implicit */int) (unsigned short)24941)))))))));
                    var_22 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) -1637948631)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) (signed char)-106);
                        var_24 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) min(((unsigned short)45317), (((/* implicit */unsigned short) (_Bool)0))))) && (((/* implicit */_Bool) max((((/* implicit */short) (signed char)127)), ((short)32767)))))));
                        arr_9 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((unsigned char) ((18446744073709551608ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))))));
                        arr_10 [i_1] [i_2] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) (short)21445)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13577))) : (4331497966393626655ULL))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59527))) : (7ULL)))));
                    }
                    var_25 = ((/* implicit */short) ((long long int) max((((long long int) (_Bool)1)), (((/* implicit */long long int) (signed char)127)))));
                }
                var_26 += ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), (-1597107811)))) ? ((-(-8))) : (((((/* implicit */_Bool) (unsigned short)32057)) ? (((/* implicit */int) (_Bool)1)) : (-914034789)))));
            }
        } 
    } 
    var_27 = ((/* implicit */short) ((unsigned int) var_4));
}
