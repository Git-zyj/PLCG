/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195707
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)60)) << (((9306629039785370692ULL) - (9306629039785370690ULL)))))) : (var_2))) * (((/* implicit */unsigned long long int) 2060253173))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 7; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)232)) - (((var_5) - (((/* implicit */int) var_8)))))))))));
                                var_14 = ((/* implicit */int) ((_Bool) (~(var_7))));
                                var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((unsigned char) var_10)), (((/* implicit */unsigned char) var_11))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (_Bool)0)))))) != (((unsigned long long int) var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_8))))))))));
                                var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((9306629039785370692ULL) % (((/* implicit */unsigned long long int) var_10)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) (unsigned char)195);
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned short i_7 = 1; i_7 < 9; i_7 += 4) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) var_8);
                        var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)16375)) && (((((/* implicit */_Bool) 1666463443)) || (((/* implicit */_Bool) var_2)))))), (((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (short)6494)))) || (((/* implicit */_Bool) ((int) var_7)))))));
                        var_20 = ((/* implicit */unsigned short) var_1);
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1666463443)) ? (7340032) : (((/* implicit */int) (_Bool)0))))) ? (((long long int) var_2)) : (((/* implicit */long long int) ((max((-7340041), (((/* implicit */int) var_8)))) << (((((((/* implicit */_Bool) (signed char)-118)) ? (var_7) : (524287ULL))) - (7759487528388477039ULL))))))));
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_6))));
}
