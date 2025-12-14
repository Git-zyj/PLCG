/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194936
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
    var_10 = ((/* implicit */signed char) ((((min(((~(((/* implicit */int) (signed char)32)))), (((/* implicit */int) var_8)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 4294967295U)) ? (1142309162) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (short)15)))))) - (1142309160)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (short)-10952))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (+(3763996534U)))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : ((+(var_4)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            {
                var_11 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_6 [i_2])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_3] [i_2])) + (((/* implicit */int) (unsigned char)68)))))))) ? (((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) : (max((((/* implicit */unsigned long long int) (unsigned char)98)), (var_9))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30027))) - (min((((/* implicit */unsigned long long int) (signed char)107)), (18446744073709551615ULL)))))));
                arr_10 [(_Bool)1] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)25506)) < ((+(((/* implicit */int) (unsigned short)65503))))));
                arr_11 [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_2]))))), (min((14200724355934331093ULL), (((/* implicit */unsigned long long int) 0)))))));
                var_12 = 1077597957322584373ULL;
                var_13 = ((/* implicit */unsigned short) arr_6 [i_3]);
            }
        } 
    } 
    var_14 = ((/* implicit */short) min((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((~(-2190556748161448637LL))) : (((/* implicit */long long int) 2147483647)))))));
    var_15 = ((/* implicit */unsigned char) var_3);
}
