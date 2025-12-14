/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197318
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
    var_11 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)(-127 - 1))) ^ ((~(((/* implicit */int) (short)(-32767 - 1))))))), (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)0)))) || (((((/* implicit */_Bool) (short)-3696)) || (((/* implicit */_Bool) 15416989403175885570ULL)))))))));
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(15416989403175885557ULL)))) ? (((((/* implicit */_Bool) 2640844325U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32761))) : (3029754670533666060ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) 1654122970U)) : (-443805195573757674LL))))))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1654122973U)) ? (((/* implicit */int) ((2640844325U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-32745)))))) : (((/* implicit */int) (signed char)-90))))), (1654122978U))))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1654122970U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)108))))) + (15416989403175885570ULL)));
    }
}
