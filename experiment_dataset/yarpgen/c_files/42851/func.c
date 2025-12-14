/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42851
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
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (signed char)45)), (248U)));
    var_19 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)17)), ((unsigned short)33526))))) != (max((-7402842292050160176LL), (((/* implicit */long long int) var_13)))))) ? (((/* implicit */int) min(((unsigned short)32776), (((/* implicit */unsigned short) (signed char)86))))) : (((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) 819361148U);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_20 = ((/* implicit */long long int) min((((((/* implicit */int) arr_5 [i_0] [i_0])) > (((/* implicit */int) (unsigned char)136)))), (arr_6 [i_0] [i_0])));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                var_21 = ((/* implicit */unsigned short) 134217727);
                arr_9 [i_0] [i_1] = (-(13433621444699807759ULL));
            }
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_0] [i_1])))))));
        }
        arr_10 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)32767)) & (((((/* implicit */_Bool) 839224636942830627LL)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)31917)))))) / (((/* implicit */int) min((var_8), (arr_0 [i_0] [i_0]))))));
        var_23 &= ((((/* implicit */_Bool) 4269380007U)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_5 [i_0] [i_0])))), (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)12746))))))));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (8465437100829510783LL))))));
    }
    var_25 = ((/* implicit */signed char) ((var_2) * (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (16616512662914774617ULL)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (-848923499)))));
}
