/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217889
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23894)) ? ((+(((/* implicit */int) (unsigned short)8968)))) : (((((/* implicit */_Bool) 8599570390143625432LL)) ? (120) : (((/* implicit */int) (unsigned short)33065))))));
        arr_3 [i_0] |= ((/* implicit */unsigned char) ((long long int) var_14));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) (!(((_Bool) (signed char)-72))));
                                var_19 &= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)(-127 - 1)))))) / (var_6))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (signed char)10))) ? (-2147483639) : (((/* implicit */int) arr_6 [i_0])))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_7 [i_2 + 2]))));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_8)))) >= (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0)))) % (((/* implicit */int) max(((signed char)100), (var_15))))))));
    }
    for (int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        arr_18 [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
        arr_19 [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((var_11) | (var_13)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -4520745980425003317LL)) | (4398046511103ULL)))))))));
    }
    var_21 = ((/* implicit */unsigned short) (-(min((min((((/* implicit */long long int) (short)32762)), (-4520745980425003317LL))), (min((7974389726499245962LL), (((/* implicit */long long int) (signed char)(-127 - 1)))))))));
}
