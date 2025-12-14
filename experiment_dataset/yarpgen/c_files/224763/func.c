/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224763
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
    var_15 = ((/* implicit */unsigned char) ((_Bool) max((min(((unsigned char)0), ((unsigned char)183))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)255))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 1] [(short)5] [1U] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) * (var_0))), (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1])) ? (3813803880310872115ULL) : (17517748294350612285ULL)))));
                var_16 = (+(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_13)) ? (16070221047500986717ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0 - 1]))))))));
                var_17 *= ((/* implicit */_Bool) (-((+(10982051951007017137ULL)))));
                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)32767)) == (((/* implicit */int) (unsigned char)49)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))) : (1037816191U))))))));
            }
        } 
    } 
    var_19 = min((17517748294350612285ULL), (((/* implicit */unsigned long long int) var_14)));
    var_20 = ((/* implicit */unsigned int) (-(var_6)));
}
