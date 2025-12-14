/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234977
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) max((((((/* implicit */int) (unsigned short)35611)) * (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)22)), ((unsigned char)178)))))), (min((((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))), ((-(0)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 -= ((/* implicit */unsigned long long int) max((min((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1 + 2])) > (((/* implicit */int) arr_0 [i_1 + 1]))))), (((((/* implicit */_Bool) 10531651770306526192ULL)) ? (13) : (((/* implicit */int) (unsigned short)4094)))))), ((~(((/* implicit */int) (unsigned char)255))))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_5 [i_1 - 1] [i_0]))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)32)))), (((/* implicit */int) ((signed char) var_2)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)239)), ((unsigned short)61420)))) : (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_1] [8LL])) : (((/* implicit */int) (unsigned char)255))))) || (((/* implicit */_Bool) arr_4 [i_1] [i_1 + 2]))))))))));
                    var_19 -= (unsigned char)10;
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_0))));
}
