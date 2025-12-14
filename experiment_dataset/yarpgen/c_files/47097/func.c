/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47097
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)45295)) >= (((/* implicit */int) (signed char)-127)))))) + (((17592186042368ULL) >> (((/* implicit */int) (unsigned char)61)))))) + (max((((/* implicit */unsigned long long int) ((_Bool) (signed char)64))), (((((/* implicit */_Bool) (unsigned char)61)) ? (17592186042368ULL) : (((/* implicit */unsigned long long int) -314461848))))))));
                var_15 += ((/* implicit */signed char) ((max((((/* implicit */unsigned int) (unsigned short)46369)), (((((/* implicit */_Bool) (unsigned short)40918)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))) : (861988520U))))) & (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-22358)) + (2147483647))) << (((((min((8092774363283734110LL), (((/* implicit */long long int) (signed char)-127)))) + (157LL))) - (30LL))))))));
                arr_6 [i_1] [i_0] [2LL] = ((unsigned short) max((((/* implicit */unsigned long long int) ((0U) | (2853717407U)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)9535))) - (9460508729460515868ULL)))));
            }
        } 
    } 
    var_16 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 781060872734543975LL)) - (((((/* implicit */_Bool) ((4294967295U) - (3432978776U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)141)))) : (8986235344249035747ULL)))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) min((-1291391436), (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)0))))) < (((long long int) 3483930914U)))))) : (((((/* implicit */_Bool) max((18446726481523509248ULL), (15243682119757370310ULL)))) ? (max((((/* implicit */unsigned int) (unsigned short)10)), (2853717407U))) : (min((4043023319U), (((/* implicit */unsigned int) (short)24700))))))));
    var_18 += ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)45295)) / (((/* implicit */int) (signed char)(-127 - 1)))))) ? ((-(3432978775U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)16383))))))));
}
