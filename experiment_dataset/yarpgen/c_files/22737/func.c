/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22737
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 11; i_1 += 3) /* same iter space */
        {
            var_16 = ((((/* implicit */long long int) ((/* implicit */int) (signed char)107))) == (4905868706812191227LL));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) min((((var_14) | (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (~(4014963158U))))));
            arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)243);
        }
        for (long long int i_2 = 1; i_2 < 11; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_3 = 3; i_3 < 13; i_3 += 2) 
            {
                arr_12 [(_Bool)1] = ((/* implicit */unsigned short) (unsigned char)229);
                var_17 = ((/* implicit */unsigned int) (((~(arr_2 [(unsigned char)7]))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
            }
            var_18 = ((/* implicit */_Bool) min((min((arr_5 [i_2] [i_0]), (((/* implicit */int) (short)10728)))), ((+(arr_5 [i_0] [i_2])))));
        }
        arr_13 [i_0] |= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))))) + (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) arr_10 [i_0])) : (-445115224650738031LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0]))))))))));
        arr_14 [(short)8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)70)), ((unsigned short)65535))))));
    }
    var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 950936955U)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)25083))))) : (((unsigned int) var_13))))));
    var_20 = ((/* implicit */unsigned long long int) var_3);
}
