/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22459
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
    var_17 *= ((/* implicit */unsigned char) var_12);
    var_18 ^= ((/* implicit */short) var_13);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (-((~(((/* implicit */int) (_Bool)1)))))))));
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) max((min((max((((/* implicit */unsigned int) arr_6 [i_2])), (1605950030U))), (4294967283U))), (((((/* implicit */_Bool) 3637548138U)) ? (((2362614232U) & (32752U))) : (max((((/* implicit */unsigned int) arr_1 [0ULL])), (arr_0 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_20 &= max((((/* implicit */unsigned short) (short)30)), ((unsigned short)65535));
                                var_21 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)11135))) : (var_5)))), ((+(6793899539267709944ULL))))))));
                                var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)3651))))), ((-(var_8)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1932353055U)) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_4 [9U] [i_1] [i_2 + 2])))) : ((-(((/* implicit */int) (_Bool)1)))))))));
                                var_23 *= ((((/* implicit */int) min((arr_12 [(unsigned short)2] [i_1] [i_2 + 1] [i_3]), (arr_12 [(unsigned short)18] [i_1] [i_2 - 3] [i_2 - 3])))) >= (((/* implicit */int) max((arr_12 [8ULL] [i_1] [i_2 - 3] [(unsigned char)4]), (arr_12 [(_Bool)1] [i_1] [i_2 - 3] [i_1])))));
                                arr_14 [10ULL] [i_1] [0U] [i_1] [10ULL] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)43435))))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))), ((-(((/* implicit */int) max((((/* implicit */unsigned short) (short)-6041)), (var_13))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 ^= ((/* implicit */short) var_5);
    var_25 = ((/* implicit */short) (~(max((((/* implicit */unsigned int) ((short) (short)16894))), (var_8)))));
}
