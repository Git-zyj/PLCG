/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204938
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -678211216182938763LL)) ? (-678211216182938763LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_6 [i_2 - 1] [10ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((678211216182938762LL), (((/* implicit */long long int) var_9))))))) ? (((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_3 [i_0] [i_1] [11])) : (arr_2 [i_2 + 2] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -678211216182938762LL))))) : ((~(((/* implicit */int) var_6)))))) : (((((var_13) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57574))))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0]))) : (((/* implicit */int) ((var_15) == (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_0]))))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (0ULL))))));
        arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0]))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)57574)) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-74)) >= (((/* implicit */int) arr_1 [(unsigned char)2])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))))) : (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2096640))))) : ((+(((/* implicit */int) (unsigned short)6736))))))));
        var_19 = ((/* implicit */unsigned char) (-((-(max((var_16), (((/* implicit */int) var_8))))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)4))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_16), (((/* implicit */int) var_12))))) ? ((-(((/* implicit */int) (unsigned short)4095)))) : ((+(((/* implicit */int) arr_5 [i_3] [(_Bool)1] [(_Bool)1]))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_3])) >= (((/* implicit */int) var_7))))) != ((-(arr_2 [i_3] [i_3])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 2096640)) > (18446744073709551615ULL))))));
        var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_3)))), ((((~(((/* implicit */int) (signed char)4)))) ^ (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_8)))))))));
    }
    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) -6629568209198158545LL))));
}
