/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210322
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
    var_12 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((677857466U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                    var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)58543), (((/* implicit */unsigned short) (signed char)124))))) ? (((((/* implicit */int) (_Bool)1)) >> (((3617109830U) - (3617109819U))))) : (min(((-2147483647 - 1)), (((/* implicit */int) (short)610))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (((+((-2147483647 - 1)))) - (min((((int) 3617109837U)), (((((/* implicit */_Bool) (unsigned short)65535)) ? (1769694368) : (((/* implicit */int) (signed char)31)))))))))));
                        var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((33479943U), (((/* implicit */unsigned int) (unsigned char)167))))) ? (max((((/* implicit */unsigned long long int) 2697008111522147805LL)), (((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */unsigned long long int) 2697008111522147805LL)) : (17ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 3617109830U))))));
                    }
                    for (short i_4 = 3; i_4 < 24; i_4 += 3) 
                    {
                        var_17 |= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) max(((short)744), (((/* implicit */short) (_Bool)0))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)37856)), (677857485U)))))))));
                        arr_16 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */short) min((18446744073709551601ULL), (((/* implicit */unsigned long long int) (signed char)20))));
                    }
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */unsigned int) min((((unsigned long long int) ((unsigned long long int) (short)(-32767 - 1)))), (((/* implicit */unsigned long long int) min((((short) (short)-4096)), (((/* implicit */short) var_11)))))));
    var_19 = ((/* implicit */int) ((unsigned long long int) (unsigned char)46));
    var_20 = ((/* implicit */unsigned short) 8559782330105794313ULL);
}
