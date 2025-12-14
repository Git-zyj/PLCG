/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192142
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
    var_10 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) var_2)), (var_7))), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_3))))))));
    var_11 = ((/* implicit */unsigned short) ((unsigned int) var_0));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_2))))))) ? (max(((~(((/* implicit */int) (unsigned char)198)))), ((~(var_1))))) : (((((/* implicit */_Bool) max((var_5), (((/* implicit */int) var_2))))) ? ((+(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) (unsigned char)198))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [2LL] [i_0])) && (((/* implicit */_Bool) arr_6 [i_0] [(signed char)0] [i_0 - 1]))));
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_5))));
            var_15 = ((/* implicit */int) max((var_15), ((-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [(signed char)4]))))))))))));
            var_16 ^= ((/* implicit */unsigned char) arr_6 [i_1] [i_1] [i_0 - 1]);
        }
        var_17 = ((/* implicit */unsigned int) (short)16384);
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (~(min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-30)) ? (var_5) : (((/* implicit */int) arr_4 [i_3]))))), (arr_9 [i_0] [i_0 + 1]))))))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_4 [i_0 - 1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))) & (var_7))))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (signed char)118))) ? (arr_9 [(_Bool)1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                    }
                } 
            } 
        } 
        var_21 -= ((/* implicit */_Bool) (-(max((max((((/* implicit */long long int) (unsigned short)8848)), (arr_9 [i_0] [i_0]))), (((/* implicit */long long int) ((_Bool) (short)-16385)))))));
    }
}
