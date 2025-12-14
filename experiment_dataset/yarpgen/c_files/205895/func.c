/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205895
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) arr_6 [i_2] [i_2 - 1] [i_0 + 1]);
                    var_11 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_5 [i_0 - 1] [i_0 + 1]), (arr_5 [i_0 - 1] [i_0 - 1])))) ? (((/* implicit */int) max(((unsigned char)63), (((/* implicit */unsigned char) arr_5 [i_0 + 1] [i_0 + 1]))))) : ((-(((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1]))))));
                    var_12 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) var_8))))) ? (1259653190) : (((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0])))));
                    arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-15624)) ? (((((/* implicit */_Bool) ((unsigned short) (short)15624))) ? (arr_3 [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)6040), (((/* implicit */unsigned short) var_4)))))))) : (max((((/* implicit */unsigned long long int) max((var_1), (var_2)))), (((arr_0 [i_1] [i_1]) & (arr_0 [i_0] [(unsigned char)8])))))));
                    arr_9 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
                }
            } 
        } 
    } 
    var_13 = ((((/* implicit */_Bool) (unsigned short)64330)) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (var_6))) : (((/* implicit */int) var_3)));
    var_14 += ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (var_4))))) : (((((/* implicit */_Bool) (unsigned short)64330)) ? (4611686018427387902LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-50))))))));
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) max((((signed char) var_9)), ((signed char)-83)))), ((unsigned char)224)));
}
