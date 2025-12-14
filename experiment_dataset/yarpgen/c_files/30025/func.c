/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30025
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) (_Bool)1);
        var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) (short)21585))))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)32178)))) : (((/* implicit */int) ((unsigned short) var_0)))))) | (4294967295U)));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) arr_4 [i_2 + 1] [i_2 + 1] [i_1 + 1]))), (((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) (unsigned short)4992)) - (4990)))))));
                        var_16 = (unsigned short)65515;
                        var_17 |= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-27337)))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned int) ((int) (unsigned short)65533));
    }
    var_19 = min((((/* implicit */int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) (signed char)0))))) && (((/* implicit */_Bool) var_5))))), ((+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-8)), ((unsigned char)136)))))));
}
