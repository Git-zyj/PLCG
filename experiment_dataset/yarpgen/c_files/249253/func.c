/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249253
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_6))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            var_21 = ((/* implicit */_Bool) arr_2 [i_0]);
            arr_4 [i_1 + 2] [i_0] [i_0] = ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (arr_2 [i_0])));
            /* LoopNest 3 */
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                for (unsigned char i_3 = 4; i_3 < 14; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        {
                            arr_16 [i_2] [i_4] = ((/* implicit */signed char) (+(-6344713174343834245LL)));
                            arr_17 [i_2] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) 1214824538U))) ? (((/* implicit */int) (short)-7781)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32))) < (1214824527U))))));
                            var_22 += ((/* implicit */signed char) arr_10 [i_0]);
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) 2183850660U))));
                        }
                    } 
                } 
            } 
        }
        arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) arr_10 [i_0]);
        arr_19 [i_0] = ((/* implicit */unsigned short) (~(3080142773U)));
    }
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 22; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            {
                arr_26 [i_5 + 3] [i_6 + 1] = max((((((((/* implicit */_Bool) 3574546443U)) || (((/* implicit */_Bool) arr_23 [i_5 - 1] [i_6 + 1])))) && (((((/* implicit */_Bool) -9186953808930015666LL)) && (((/* implicit */_Bool) -9223372036854775802LL)))))), (((_Bool) (signed char)65)));
                var_24 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 720420843U)))) ? (((/* implicit */unsigned int) (+(1040869455)))) : (arr_25 [i_5 + 3])))) ? (((/* implicit */int) ((unsigned char) (+(-9223372036854775794LL))))) : (((/* implicit */int) arr_23 [i_6 + 1] [i_5 + 1]))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) var_6);
}
