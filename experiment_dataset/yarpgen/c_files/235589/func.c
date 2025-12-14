/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235589
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
    var_15 = ((/* implicit */short) (unsigned short)26458);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (min((((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (short)9322))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            arr_5 [i_0] [i_1 - 3] [i_1 - 2] = ((/* implicit */unsigned short) (+(min((((/* implicit */long long int) arr_3 [i_1] [i_1 - 3] [i_1 - 3])), (var_13)))));
            arr_6 [i_0] [i_0] [i_1 - 1] = ((short) (!(((/* implicit */_Bool) arr_4 [i_1 - 2]))));
            var_17 = ((/* implicit */short) (~((-(((((/* implicit */int) (short)9322)) / (((/* implicit */int) (short)9322))))))));
        }
        arr_7 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) min((((/* implicit */unsigned short) (short)-9322)), (arr_3 [i_0] [i_0] [i_0])))) != (((/* implicit */int) (unsigned short)0)))) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-9329)) || (((/* implicit */_Bool) (short)9322)))))) ^ (-2402701868333286806LL))) : (-7216922115946065524LL)));
        var_18 = arr_0 [i_0] [i_0];
    }
    var_19 = var_8;
}
