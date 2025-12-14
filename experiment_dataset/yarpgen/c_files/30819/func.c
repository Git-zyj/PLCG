/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30819
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((signed char) ((_Bool) var_9))))));
    var_13 ^= ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0])))))));
                var_15 -= ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) (signed char)-46)))), ((((+(((/* implicit */int) (signed char)120)))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)46))) == (13429837777658193067ULL))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) 13429837777658193067ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5482))) : (13429837777658193067ULL))) != (((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) (short)-5483))))))));
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (+(13429837777658193067ULL))))) || (((/* implicit */_Bool) (+(((((/* implicit */int) (short)5482)) % (((/* implicit */int) (unsigned char)255)))))))));
                var_16 &= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((612031858), (1449696380)))), (((unsigned int) var_9))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((17251757960660908712ULL) / (arr_2 [i_0] [i_0] [i_0]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))))));
            }
        } 
    } 
}
