/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31576
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((var_10) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (signed char)-47))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))))))))));
    var_12 *= ((/* implicit */short) var_7);
    var_13 = ((/* implicit */long long int) (unsigned short)768);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_3 + 1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_4] [i_3]))))) ? (-3548147470002375670LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13120893868655987066ULL)) ? (((/* implicit */int) (unsigned short)64768)) : (-202044731)))) ? (((((/* implicit */_Bool) (unsigned short)54662)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_2] [i_4])))))));
                                arr_13 [i_2] = ((/* implicit */_Bool) (-((((_Bool)1) ? (arr_11 [i_0] [i_1] [i_0] [i_3 - 1] [i_4] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_1] [(short)18] [i_3 - 1])))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((arr_9 [(short)21] [i_0] [i_1] [i_2] [i_0] [i_0]), (arr_1 [i_0])))), (arr_11 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2] [i_2])))) ? (((((/* implicit */_Bool) ((signed char) arr_8 [i_2] [i_2] [i_1] [i_2] [i_0]))) ? (((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_1] [i_1] [i_0]))) : (((/* implicit */int) ((unsigned char) arr_5 [19U] [(_Bool)1] [(_Bool)1] [(_Bool)1]))))) : (((/* implicit */int) (_Bool)0))));
                    arr_15 [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) arr_10 [4U] [i_1] [i_1] [i_1] [i_1]))))));
                    var_14 -= ((/* implicit */unsigned long long int) min((((long long int) arr_7 [i_0] [i_1] [i_0] [i_0])), (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0] [i_2] [i_2] [i_2])))))));
                    arr_16 [i_2] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))));
                }
            } 
        } 
    } 
    var_15 = min((((/* implicit */unsigned long long int) (short)-27228)), (11695526466408454726ULL));
}
