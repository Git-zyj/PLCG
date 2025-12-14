/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26575
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
    for (int i_0 = 3; i_0 < 14; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = max((((long long int) ((var_7) ? (((/* implicit */int) var_7)) : (937130088)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)126)), (13362456958363250813ULL)))) ? (max((var_6), (((/* implicit */long long int) (unsigned short)45801)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 229376LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-27))))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned int) min((((/* implicit */long long int) ((short) var_9))), (min((var_9), (9223372036854775807LL))))));
    }
    for (int i_1 = 3; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (unsigned char)255))))));
        var_15 = min((((/* implicit */unsigned long long int) (_Bool)1)), (4602678819172646912ULL));
    }
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 16; i_2 += 3) 
    {
        for (unsigned char i_3 = 2; i_3 < 16; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 16; i_4 += 3) 
                {
                    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 3) 
                    {
                        {
                            arr_15 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4])) ? (var_4) : (9223372036854775788LL)))) ? (((((/* implicit */_Bool) 1630932660U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45802))) : (3100960002215392270LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (arr_13 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned int) var_10))))))));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((_Bool) ((unsigned long long int) var_13))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_11 [i_5])), (arr_13 [i_2] [i_3] [i_2] [i_5])))) ? ((~(arr_9 [i_2]))) : (((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */unsigned long long int) arr_10 [i_3] [i_4] [i_5])) : (arr_9 [i_5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((arr_7 [(signed char)12]), (arr_8 [(unsigned short)0] [i_4] [(unsigned short)0])))))))))));
                        }
                    } 
                } 
                arr_16 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 2524864138402170335LL)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? (min((3100960002215392256LL), (((/* implicit */long long int) (signed char)124)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)15)), (3067355948U))))))))));
            }
        } 
    } 
}
