/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221192
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 9))))) != (((/* implicit */int) ((_Bool) (~(-10)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((-9) % (-2031597988)));
        var_21 = ((/* implicit */long long int) (unsigned short)120);
    }
    for (long long int i_1 = 1; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_19))))))), (var_18)));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_23 |= ((/* implicit */unsigned char) ((int) (signed char)-87));
            var_24 += ((/* implicit */signed char) arr_4 [i_1 + 1]);
            var_25 ^= min((min((min((((/* implicit */unsigned int) -378822461)), (927676712U))), (((/* implicit */unsigned int) arr_7 [i_1 + 1])))), (((((/* implicit */_Bool) ((unsigned char) (unsigned char)242))) ? (((var_5) - (((/* implicit */unsigned int) 378822460)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))));
        }
        for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            arr_10 [i_1 - 1] [i_1 - 1] [i_1 + 1] = -1662451572686543103LL;
            var_26 = arr_7 [i_1];
        }
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 1; i_5 < 19; i_5 += 1) 
            {
                {
                    var_27 = (~(((-2031597988) ^ (((/* implicit */int) var_14)))));
                    arr_16 [0U] |= ((/* implicit */short) ((((((unsigned long long int) (_Bool)1)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [4LL]), (arr_6 [i_1]))))))) ? (min((((((/* implicit */int) (unsigned short)13152)) * (((/* implicit */int) var_4)))), (((/* implicit */int) (signed char)(-127 - 1))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)113)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        arr_19 [(unsigned char)5] [i_6] = ((/* implicit */int) ((unsigned char) -2031597995));
        arr_20 [i_6] [i_6] = ((/* implicit */unsigned char) ((((var_16) & (((/* implicit */unsigned long long int) 6U)))) << (((((/* implicit */int) (unsigned char)241)) - (226)))));
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)46)) / (679874372)))) - (8131784U)));
    }
    var_29 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((int) (_Bool)1))) : (((unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) min((min(((unsigned short)15505), (((/* implicit */unsigned short) (signed char)127)))), (((/* implicit */unsigned short) (_Bool)0)))))));
}
