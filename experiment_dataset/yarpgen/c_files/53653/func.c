/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53653
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    var_18 -= ((/* implicit */signed char) (_Bool)0);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) 3901123511U)))));
                                var_20 = ((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) var_0)))));
                                var_21 -= ((/* implicit */unsigned char) var_12);
                                var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 1298726293407405266LL)) >= ((~(12501075593742637700ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-10))))) ? ((~(4294967295U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)53517)))))));
        var_24 -= ((/* implicit */signed char) ((short) (_Bool)1));
    }
    var_25 = max(((-((+(18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)33))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_5 = 2; i_5 < 13; i_5 += 2) 
    {
        arr_19 [(signed char)10] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-3)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)6415)) - (6387))))))));
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) 2456493382851795138LL))));
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (~((+(((/* implicit */int) (signed char)91)))))))));
        var_28 = ((/* implicit */unsigned int) (short)-3904);
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((var_15) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) (signed char)-107))))) >= (((unsigned int) var_13))));
    }
}
