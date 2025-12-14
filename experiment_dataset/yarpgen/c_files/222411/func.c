/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222411
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_16 -= ((/* implicit */short) arr_1 [i_0] [i_0]);
        var_17 = ((/* implicit */short) var_11);
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 17; i_2 += 2) 
        {
            arr_8 [i_1] = ((/* implicit */unsigned short) (-(arr_2 [i_2 + 3])));
            arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_4 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) < (((/* implicit */int) var_15))))))))) ? (max((var_13), (((((/* implicit */_Bool) (unsigned char)61)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))))))) : (max((var_12), (((/* implicit */long long int) (_Bool)1))))));
            var_18 = ((/* implicit */unsigned long long int) (unsigned char)26);
        }
        var_19 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65534))));
    }
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_5 = 1; i_5 < 20; i_5 += 3) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 21; i_7 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((var_14) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_7] [i_6] [i_5] [i_4] [i_3])) ? (var_8) : (((/* implicit */unsigned long long int) var_13)))))))))));
                                arr_23 [i_3] [i_3] [i_4] [i_3] [i_5] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */int) arr_15 [i_6 - 1] [i_5])) : (((/* implicit */int) (unsigned char)203))))) ? (((int) 1751438714)) : (((/* implicit */int) min(((short)-32758), (((/* implicit */short) (_Bool)0)))))));
                            }
                        } 
                    } 
                } 
                var_21 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_0)) ? (4448223209463779620LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1469819964771581889LL)), (12462632407580976348ULL)))) ? (min((((/* implicit */long long int) (unsigned char)162)), (var_7))) : (((/* implicit */long long int) max((var_9), (var_9)))))), (((/* implicit */long long int) ((int) ((unsigned long long int) var_12))))));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)105))) : (9LL)))) ? (4611686001247518720LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)64)), ((unsigned char)94)))))))) ? (((max((var_0), (((/* implicit */long long int) var_10)))) | (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_13)))))) : (((long long int) max((((/* implicit */long long int) 548292757U)), (var_7))))));
}
