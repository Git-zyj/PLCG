/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26009
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
    var_16 = ((/* implicit */signed char) 16513108400028589588ULL);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_17 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) var_15))))) ? (((16513108400028589592ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) min((1621344230U), (((/* implicit */unsigned int) (signed char)-28))))))) - (((/* implicit */unsigned long long int) min((1125899898454016LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */int) var_2))))))))));
                    var_18 = ((/* implicit */_Bool) ((var_11) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103))) == (6237049730153977408ULL)))) : (((/* implicit */int) (unsigned short)63180)))) : (((((/* implicit */int) (unsigned short)65529)) & (-138819739)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (signed char)-33);
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (~(-4758982578752025275LL))))) == (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-60)) ? (1933635673680962034ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19502)))))) || (((var_0) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52630))))))))));
}
