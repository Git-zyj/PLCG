/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219208
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_20 += ((/* implicit */unsigned int) (unsigned char)255);
                        arr_14 [i_1] [i_2] [i_2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) (unsigned short)7018)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)214)))) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)33)), (var_18)))))), (((/* implicit */int) var_12))));
                        var_21 += ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */short) (unsigned char)167)), ((short)-32358)))), (((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */long long int) 503256738U)) : (var_14)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 24; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            {
                                var_22 &= ((/* implicit */unsigned char) 0ULL);
                                var_23 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-27335)) : (((/* implicit */int) (short)-15072))))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)15078)))) : (((/* implicit */int) (signed char)-67)));
                            }
                        } 
                    } 
                    arr_20 [i_1] = ((/* implicit */long long int) max(((short)21321), (((/* implicit */short) (unsigned char)182))));
                }
                var_24 += ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (var_0))), (((/* implicit */unsigned long long int) (short)-15079))));
                arr_21 [16LL] [(signed char)14] [(signed char)24] = ((/* implicit */short) max((max((((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)22594)) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)32358)) : (((/* implicit */int) (short)15078)))) : (((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) var_11)))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) (unsigned short)36475)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_17))))) : (var_0)));
}
