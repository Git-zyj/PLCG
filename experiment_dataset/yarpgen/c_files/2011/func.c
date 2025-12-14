/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2011
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) - ((~(((/* implicit */int) var_10))))))) ^ (min((min((var_6), (((/* implicit */unsigned long long int) 1046528U)))), (((/* implicit */unsigned long long int) (~(var_12))))))));
    var_14 = ((/* implicit */long long int) (short)158);
    var_15 = ((/* implicit */short) (signed char)20);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0 - 2]))))), (max((((/* implicit */long long int) arr_1 [i_0 - 2])), (3296725979644404052LL)))));
        var_17 = ((/* implicit */_Bool) 3296725979644404054LL);
        var_18 &= min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [13LL]))))), (var_6));
        arr_2 [i_0] = var_3;
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3296725979644404058LL)) || ((!(((/* implicit */_Bool) min((((/* implicit */short) var_5)), ((short)-30108))))))));
                    arr_8 [i_1] [i_0] = ((/* implicit */unsigned long long int) var_12);
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_1 [i_1 - 3])) * (((/* implicit */int) arr_1 [i_1 - 3])))), (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))));
                    var_20 = ((/* implicit */unsigned short) (+(-3296725979644404052LL)));
                    var_21 = 10607268239889962853ULL;
                }
            } 
        } 
    }
}
