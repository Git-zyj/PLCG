/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196481
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((-3145970376823297144LL) / (((/* implicit */long long int) ((/* implicit */int) var_2))))) + (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))))) ? (17473439411739183258ULL) : ((+(var_9)))));
    var_14 &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((((/* implicit */int) var_8)) <= (((/* implicit */int) var_8)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-9670)) : (((/* implicit */int) (short)9696))))))))));
    var_15 = ((/* implicit */unsigned char) (short)9669);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_16 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_1 + 3] [i_1])) : (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2]))))) || (((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])))))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) (signed char)(-127 - 1)))));
                arr_7 [i_0] &= ((/* implicit */unsigned int) max((min((((/* implicit */unsigned short) (signed char)(-127 - 1))), (var_7))), (((/* implicit */unsigned short) var_5))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_17 += ((/* implicit */short) ((unsigned char) arr_10 [0LL] [0LL]));
                            arr_12 [i_2] [i_1] [i_2 + 1] [i_3] [i_2] [i_2 + 1] = ((/* implicit */unsigned short) var_8);
                            var_18 ^= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) 0))));
                            arr_13 [(unsigned char)10] [(short)2] |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)30648)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_2 [i_3])))))))));
                            arr_14 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]))))) ? (((/* implicit */int) arr_5 [i_2 + 1] [i_1 - 2] [i_0 + 3])) : (((((/* implicit */_Bool) (short)15)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) (signed char)(-127 - 1))))))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)-9648)), (arr_3 [i_0 - 2]))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (signed char)(-127 - 1))))) * (((/* implicit */int) (short)7))));
            }
        } 
    } 
}
