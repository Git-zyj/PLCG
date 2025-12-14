/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19848
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) (~(arr_1 [(_Bool)0])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) (unsigned char)56);
                                arr_14 [i_0] [i_0] [i_0] [(unsigned short)7] [14] = ((max((((/* implicit */long long int) (unsigned char)56)), (arr_12 [i_0 - 1]))) >> ((((((-2147483647 - 1)) - (-2147483625))) + (49))));
                                var_20 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)8176)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8176))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_3]))) == (782067126U)))))));
                            }
                        } 
                    } 
                    var_21 |= max((((/* implicit */unsigned int) ((var_17) < (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0 + 1] [i_2] [i_2 - 1] [i_2] [i_2])))))), (var_17));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [(unsigned char)0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1950616233)) ? ((~(-413167797))) : (((/* implicit */int) (unsigned short)57709)))) & (max((-1374135632), (((/* implicit */int) (signed char)3))))));
                                arr_21 [i_0] [i_2] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_5 - 2] [i_6] [i_6 - 2]))))), (524287LL));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((max(((~(var_14))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4057553781U)) ? (-635186874) : (((/* implicit */int) (short)-23179))))))) < (((/* implicit */unsigned int) ((/* implicit */int) (short)30839)))));
    var_23 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184))) : (var_6))) ^ (((/* implicit */long long int) ((/* implicit */int) var_7))))) + (((max((((/* implicit */long long int) var_2)), (-3134130854513524424LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))))))));
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : ((((!(((/* implicit */_Bool) (signed char)-94)))) ? (((/* implicit */long long int) 4294967295U)) : (6887212873475237782LL)))));
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((3U) | (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((134215680) << (((((var_16) + (1535060237))) - (7)))))) ? (((((/* implicit */int) var_0)) & (((/* implicit */int) (short)-23179)))) : ((-(var_16))))))));
}
