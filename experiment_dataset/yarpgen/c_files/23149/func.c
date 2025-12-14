/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23149
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
    var_20 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_1 [i_1 + 3])))) ^ (((((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */int) (short)12702)) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 3]))))));
                var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [(unsigned short)8] [(unsigned short)8] [i_1 + 1])) < (((/* implicit */int) var_7))))) >= (((/* implicit */int) (unsigned short)49136)))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)13162)) ? (723532004652031407ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12716)))))))));
                var_23 -= ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (short)-12702)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65535)))));
                var_24 |= ((/* implicit */signed char) (~(min((var_10), ((~(var_10)))))));
            }
        } 
    } 
    var_25 *= ((/* implicit */unsigned char) var_13);
    var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65374))))) ? ((~(((/* implicit */int) (unsigned short)1)))) : (((((/* implicit */int) var_14)) | (((/* implicit */int) var_15)))))))));
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_27 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) 1729408427)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)12695)))) <= (min((-1729408428), (((/* implicit */int) (signed char)-87))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19397)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) (unsigned char)52))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)110))))) : (((var_4) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))) : (arr_6 [i_2 - 1] [i_2 - 1])))))));
                arr_12 [i_2] |= ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) (short)-21758))));
                var_28 ^= ((/* implicit */long long int) (-(((arr_8 [i_2] [i_3] [i_3]) ? (((((/* implicit */_Bool) (signed char)95)) ? (1729408427) : (((/* implicit */int) (signed char)69)))) : (((/* implicit */int) ((var_17) != (((/* implicit */long long int) -8)))))))));
                var_29 = ((/* implicit */long long int) ((unsigned char) (-((~(((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
