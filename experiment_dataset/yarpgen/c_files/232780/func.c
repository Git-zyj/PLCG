/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232780
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
    var_12 = ((/* implicit */unsigned short) ((3345041968U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36033)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                for (short i_3 = 2; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_0)))), (max((121492417), (((/* implicit */int) (unsigned short)52670))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [7LL] [i_2] [i_2] [i_3 - 1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? ((~(18446744073709551614ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)35342)) : (arr_8 [i_3]))))))));
                        arr_10 [i_0] [i_1] [i_1] [i_3] [i_3 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_3]))));
                        var_14 = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_5 [i_2 - 2] [i_2] [i_2 - 2])))), (((((/* implicit */_Bool) arr_3 [i_2 - 2] [i_2] [i_2 - 2])) ? (((/* implicit */int) arr_5 [i_2 + 2] [i_2] [i_2 + 2])) : (((/* implicit */int) arr_7 [i_2 - 2] [i_2] [i_2 - 2] [i_2 + 1]))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) 188311392))))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)53672)))))))));
    }
    var_16 = ((/* implicit */int) var_0);
    var_17 = ((/* implicit */int) min((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) (+(var_4)))) ? ((+(2311078904638014484LL))) : (((/* implicit */long long int) var_3))))));
}
