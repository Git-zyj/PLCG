/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204404
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)22296)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32755))) : (5999107351523226486LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8)))))))) ? ((-(((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4096))))))) : (((/* implicit */unsigned long long int) (-((~(-1981011313954142130LL))))))));
    var_15 ^= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)61440)), (var_7))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_16 *= ((/* implicit */_Bool) max(((+(var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4080)) + (((/* implicit */int) (unsigned short)65535)))))));
                        var_17 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((2495117908854909504ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20602))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (unsigned char)63)))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))));
                        arr_15 [i_0] [i_0] [i_1 - 1] [i_2] [i_2] = ((/* implicit */long long int) 2676075589U);
                        arr_16 [(unsigned short)1] [(unsigned char)11] &= ((/* implicit */long long int) (((((~(((/* implicit */int) ((unsigned short) -1981011313954142130LL))))) + (2147483647))) << (((((((((/* implicit */_Bool) (short)-20608)) ? (var_11) : (((/* implicit */unsigned long long int) var_13)))) ^ (((/* implicit */unsigned long long int) max((-1359160985064798529LL), (((/* implicit */long long int) (signed char)48))))))) - (13077402194425320499ULL)))));
                    }
                    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) && ((!(((/* implicit */_Bool) (unsigned char)66)))))))));
                    var_19 = ((/* implicit */unsigned short) (~((~(1981011313954142099LL)))));
                }
            } 
        } 
    } 
}
