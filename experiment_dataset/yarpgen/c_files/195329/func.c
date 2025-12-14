/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195329
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? (max((((/* implicit */unsigned long long int) min(((short)-13068), (var_10)))), (min((var_3), (var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) << (((var_12) - (2387666743754049248LL))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_20 &= ((/* implicit */_Bool) var_4);
                                var_21 = ((/* implicit */unsigned short) 274877906940ULL);
                            }
                        } 
                    } 
                    var_22 = max((4294967295U), (((/* implicit */unsigned int) 536854528)));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 1; i_5 < 12; i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) arr_4 [i_1]);
                        var_23 *= ((/* implicit */short) ((((/* implicit */int) var_9)) > (((/* implicit */int) ((((/* implicit */_Bool) (short)-20974)) && (((/* implicit */_Bool) 1190034567)))))));
                        arr_17 [i_0] [i_1] [i_1] [i_2 - 1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2146435072U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-33))) : (2146435072U)))), (((((/* implicit */_Bool) 1390373236)) ? (7956824836455393508ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((unsigned char) (unsigned char)201))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 1; i_6 < 12; i_6 += 1) /* same iter space */
                    {
                        var_25 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
                        arr_20 [i_1] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)91))));
                        arr_21 [i_6] [i_6] [i_1] [i_6] [i_1] [i_1] = ((/* implicit */_Bool) 2146435072U);
                        var_26 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [0U]))));
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) -1815640577))));
    }
}
