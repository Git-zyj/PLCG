/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21060
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
    var_16 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1212237128)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (signed char)81))))), (((((/* implicit */_Bool) (unsigned short)25453)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15428))) : (16299252246679910700ULL))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 16299252246679910684ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)28556))) : (3989428551U))), (((/* implicit */unsigned int) max(((short)20960), (((/* implicit */short) (signed char)-81))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) ((_Bool) ((short) (unsigned short)22273)));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-5030636874011511889LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25453)))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_8)) : (5030636874011511901LL))) : (((/* implicit */long long int) ((unsigned int) (unsigned char)31)))));
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_12 [i_2 + 2] [i_2 + 3] [i_2 + 1] [i_2] = ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_0] [i_2]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)19752)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)38374))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_2 + 3] [(_Bool)1] [i_2])) ? (var_12) : (((/* implicit */long long int) var_6)))));
                        var_19 = ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) var_5))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            var_20 = ((((/* implicit */_Bool) (unsigned short)45784)) ? (1212237128) : (((/* implicit */int) (unsigned short)4095)));
            var_21 |= ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) 2147483647)));
        }
    }
    for (long long int i_5 = 3; i_5 < 21; i_5 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((unsigned short) (unsigned char)254)))) ? (333811883112169585LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232)))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) min((((unsigned long long int) ((((/* implicit */_Bool) 1054168504)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)14603)))))), (((/* implicit */unsigned long long int) ((_Bool) min((var_3), (((/* implicit */long long int) var_13)))))))))));
        arr_18 [i_5] = ((/* implicit */int) ((unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13232))) : (2825079629764639192ULL)))));
    }
    var_24 -= ((/* implicit */int) ((unsigned short) min((((/* implicit */int) ((short) var_9))), (((((/* implicit */_Bool) (unsigned short)10423)) ? (((/* implicit */int) (unsigned short)61441)) : (((/* implicit */int) (short)3072)))))));
}
