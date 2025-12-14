/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217652
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
    var_14 = ((/* implicit */long long int) max((var_14), ((~(((((var_13) + (9223372036854775807LL))) << ((((((~(((/* implicit */int) (unsigned short)53648)))) + (53679))) - (29)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_15 -= ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0] [i_0]) : (1785664830U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)25564))) & (arr_0 [i_0] [i_0])))));
    }
    for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((signed char)-76), ((signed char)76)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)76)), ((unsigned short)53648)))))))) : ((~(var_5)))));
        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_5 [i_1 + 3] [i_1])) : ((+(((/* implicit */int) var_2)))))))));
        var_18 = var_5;
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            var_19 *= ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_1] [i_2])), (var_12)))))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 3; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (+((~(((((/* implicit */_Bool) var_7)) ? (arr_6 [i_3] [(signed char)5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))))))))))));
                        arr_17 [i_1] [3ULL] [i_1] [i_2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1 - 1] [i_2 + 3])) / (((/* implicit */int) arr_5 [i_1 + 3] [i_2 + 1])))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))))), (max((((/* implicit */unsigned int) (signed char)-100)), (arr_8 [i_2] [(_Bool)1])))))) ? ((((!(((/* implicit */_Bool) var_13)))) ? (min((arr_8 [i_2] [i_2]), (((/* implicit */unsigned int) arr_16 [i_2] [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (arr_16 [i_2] [i_2]))))))) : (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2]))) > (arr_7 [i_1]))) ? (((/* implicit */int) arr_5 [i_1 + 2] [i_4 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                    }
                } 
            } 
        }
    }
}
