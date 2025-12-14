/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30428
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
    var_10 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) (unsigned char)173)), (13332634037470293777ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_5)))) * (((/* implicit */int) var_4)))))));
    var_11 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), ((~((~(((/* implicit */int) var_0))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (+(min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_8))), (((/* implicit */unsigned long long int) ((((var_3) + (9223372036854775807LL))) >> (((((/* implicit */int) var_6)) - (35041)))))))))))));
            arr_5 [i_1] = ((((/* implicit */_Bool) (+(((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) var_0)) + (88)))))))) && (((/* implicit */_Bool) ((unsigned short) 13332634037470293777ULL))));
            arr_6 [i_0] [i_1] = (+(min((min((((/* implicit */long long int) var_5)), (var_2))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_4)) - (27)))))))));
            arr_7 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(var_2))) / (((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_0)))))))) ? ((+(((((/* implicit */int) var_6)) * (((/* implicit */int) var_7)))))) : (((((/* implicit */int) (unsigned short)44404)) * (((/* implicit */int) (unsigned short)45434))))));
            arr_8 [10ULL] [i_1] [i_0] |= ((/* implicit */short) (+(((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) var_3)), (var_8)))))));
        }
        for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (~((-(((((/* implicit */int) var_9)) / (((/* implicit */int) var_4)))))))))));
            arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_9)))) <= (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_0))))) == (((/* implicit */int) ((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))))));
            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (((+(((((/* implicit */int) var_9)) * (((/* implicit */int) var_4)))))) >> ((((~(((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61087))) : (var_3))))) + (61091LL))))))));
        }
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_3))) == ((+(((/* implicit */int) var_7))))));
    }
}
