/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50628
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((4585629655026710840ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26411)))))) ? ((-(15686237687220628494ULL))) : (((/* implicit */unsigned long long int) (-(3104149835U))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_8 [i_0] [i_0] [i_2] = (((-(var_0))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))));
                var_12 = ((/* implicit */short) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [10ULL] [i_2] [i_2])))));
            }
            for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                var_13 = ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)3251))))) - (-213415302689722146LL));
                var_14 = ((/* implicit */unsigned char) 15686237687220628499ULL);
                var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_9 [i_0] [i_1] [i_3]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_1] [(unsigned short)22] [i_0])))))) + (((/* implicit */int) (short)-3458))));
            }
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_10 [i_0]);
        }
        arr_12 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (short)-3437));
    }
    var_16 = ((/* implicit */short) max((var_16), (((short) max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) (short)22143)) ? (-213415302689722146LL) : (213415302689722146LL))))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)812)) == (((/* implicit */int) (!(((/* implicit */_Bool) -3995396206840683854LL))))))))));
    var_18 = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((unsigned short)33975), (var_8))))))), (var_0));
    var_19 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) var_9)) >= ((-(((/* implicit */int) var_10))))))), ((((+(((/* implicit */int) (unsigned short)13606)))) * (((/* implicit */int) ((((/* implicit */_Bool) 2625169858922928567ULL)) || (((/* implicit */_Bool) 4294967295U)))))))));
}
