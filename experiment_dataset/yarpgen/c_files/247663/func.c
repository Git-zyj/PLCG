/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247663
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
    var_15 -= ((/* implicit */short) -7466514056424347329LL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */long long int) (-(var_0)));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((unsigned long long int) -344376086364471965LL)) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)57344))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)8192))));
    var_18 = ((/* implicit */signed char) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_6)))) ? ((-(((/* implicit */int) (unsigned short)27152)))) : (((((/* implicit */int) var_14)) >> (((9223372036854775807LL) - (9223372036854775777LL))))))))));
    /* LoopSeq 2 */
    for (short i_2 = 2; i_2 < 19; i_2 += 3) /* same iter space */
    {
        arr_7 [i_2 - 2] = ((/* implicit */unsigned long long int) (signed char)8);
        arr_8 [i_2] = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) == (var_0)))), ((unsigned short)38386)))) && ((!(((/* implicit */_Bool) ((unsigned char) arr_6 [i_2 + 1] [i_2 + 1]))))));
    }
    for (short i_3 = 2; i_3 < 19; i_3 += 3) /* same iter space */
    {
        arr_11 [8ULL] &= ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) var_3)))));
        arr_12 [i_3] = ((/* implicit */unsigned long long int) var_1);
        arr_13 [i_3] = ((/* implicit */unsigned long long int) (unsigned short)27152);
    }
}
