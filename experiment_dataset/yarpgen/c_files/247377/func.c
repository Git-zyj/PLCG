/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247377
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
    var_11 ^= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-1))))) * (1104433716U))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_12 -= ((/* implicit */_Bool) (~(max((((((/* implicit */int) arr_2 [i_0] [i_0])) & (((/* implicit */int) (signed char)-6)))), (((/* implicit */int) min((var_4), (var_9))))))));
        arr_4 [(_Bool)1] |= ((/* implicit */int) ((((unsigned int) arr_2 [i_0] [i_0])) >> ((((~(((/* implicit */int) arr_2 [i_0] [i_0])))) - (80)))));
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) max((((_Bool) (unsigned short)40592)), (((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)101))))))))))));
    }
    for (signed char i_1 = 2; i_1 < 7; i_1 += 2) 
    {
        var_14 = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) arr_1 [i_1 - 1] [i_1])), (arr_3 [i_1 - 2]))) | (((((/* implicit */_Bool) 4952586207926529996LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (arr_3 [i_1 + 2])))));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            for (int i_3 = 1; i_3 < 8; i_3 += 3) 
            {
                {
                    var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-12103))) ^ (arr_0 [i_1 + 2])))) ? (min(((~(((/* implicit */int) (unsigned short)30764)))), (((/* implicit */int) var_7)))) : ((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_16 -= ((/* implicit */_Bool) ((arr_3 [i_1 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        var_17 -= ((/* implicit */unsigned short) (signed char)8);
                        var_18 += ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) arr_10 [i_1 + 1])))) : (((/* implicit */int) (unsigned short)5690))));
                    }
                    for (unsigned char i_5 = 1; i_5 < 7; i_5 += 4) 
                    {
                        var_20 -= ((/* implicit */unsigned short) var_0);
                        var_21 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) ((-1303158631) ^ (((/* implicit */int) (short)32752)))))) ^ (((/* implicit */int) var_2))));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)59870)) % (((/* implicit */int) (unsigned short)1803)))))));
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_23 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)-49)), ((unsigned short)60033)))), (arr_3 [4])));
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) max(((short)-12094), (((/* implicit */short) arr_10 [i_6])))))));
                    }
                    var_25 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((signed char) (signed char)118))) : (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1 + 3]))))));
                }
            } 
        } 
    }
}
