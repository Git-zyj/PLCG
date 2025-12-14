/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42454
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
    var_20 = ((/* implicit */long long int) ((156564947) < (((/* implicit */int) (unsigned char)68))));
    var_21 = ((/* implicit */long long int) var_16);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) arr_1 [i_0 + 3] [i_0 + 4])) % (var_10))) - (((/* implicit */long long int) ((arr_1 [i_0 + 4] [i_0 + 1]) / (max((var_1), (var_5))))))));
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) (((+(arr_2 [6LL]))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)52)))))))))));
                arr_5 [i_0] [i_0] [i_1] = min((1073610752), (1194836352));
                arr_6 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) -1194836353)) ? (((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) ((-1194836355) | (((/* implicit */int) (unsigned char)49))))) : (((((/* implicit */_Bool) 7886654712472490507LL)) ? (-3990271787773687753LL) : (((/* implicit */long long int) 1194836335)))))) : (-7886654712472490526LL));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_24 = ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)14)) ? (3990271787773687739LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-7745))))) > (var_14)))) + (((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))));
        var_25 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)203)) / ((-2147483647 - 1)))) > (((((/* implicit */int) arr_8 [i_2] [i_2])) << (((((/* implicit */int) arr_8 [i_2] [i_2])) - (201)))))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_10 [i_2]) | (arr_10 [i_2])))) ? (((-1) | (-2125528457))) : (min((arr_9 [i_2] [i_2]), (arr_9 [i_2] [i_2])))));
    }
}
