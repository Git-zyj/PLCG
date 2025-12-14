/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197913
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) min((max((((long long int) var_6)), (max((var_4), (((/* implicit */long long int) arr_1 [i_1])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(2026432533U)))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0])))))))))))));
            arr_4 [(signed char)1] [i_1] = ((/* implicit */short) arr_2 [i_0] [(short)0] [i_1]);
        }
        arr_5 [i_0] = ((/* implicit */unsigned char) (+(((((int) (unsigned short)16)) >> (((long long int) (_Bool)0))))));
        arr_6 [(signed char)9] [i_0] = ((/* implicit */int) (+(max((13562772392560807081ULL), (((/* implicit */unsigned long long int) 702212531))))));
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        var_12 |= ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) ((unsigned char) arr_7 [i_2]))), (min((arr_8 [i_2]), (4213550317352227070ULL)))))));
        arr_10 [i_2] = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) arr_8 [(unsigned char)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_8 [(signed char)13]))), (((/* implicit */unsigned long long int) min((arr_9 [i_2]), (((/* implicit */unsigned short) (short)32767))))))), (((/* implicit */unsigned long long int) ((signed char) arr_8 [(unsigned char)8])))));
    }
    var_13 += ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
    var_14 = ((/* implicit */long long int) ((((((/* implicit */int) var_6)) << (((var_7) + (5027991630045572574LL))))) % (min((-636993697), (((/* implicit */int) (short)-1))))));
    var_15 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)39737))));
}
