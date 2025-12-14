/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215354
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (unsigned short)10503)))) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (short)31871)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)0));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_7 [i_1] = max((max((((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) + (1036663426U))), (((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)0)), ((short)-10556)))))), (((/* implicit */unsigned int) (signed char)58)));
        arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((int) min((((/* implicit */unsigned int) (signed char)45)), (4294967295U))))) > (((((long long int) (short)32762)) ^ (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)144)), (4294967295U))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_12 += ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((_Bool) 3068819919U))), (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) 298782118)))))), (((/* implicit */unsigned long long int) min((((int) (_Bool)1)), (((/* implicit */int) max((((/* implicit */unsigned short) (short)-10559)), ((unsigned short)33768)))))))));
        arr_11 [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)-9151)))) * (((/* implicit */int) min(((signed char)-65), (((/* implicit */signed char) (_Bool)1)))))))), (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-444627221330807205LL))))));
        arr_12 [i_2] [i_2] = max((((/* implicit */unsigned short) ((short) max((((/* implicit */unsigned short) (signed char)10)), ((unsigned short)4944))))), ((unsigned short)65535));
    }
    var_13 = ((/* implicit */unsigned short) ((max((((long long int) 508644703)), (((/* implicit */long long int) ((unsigned short) 825980992U))))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
}
