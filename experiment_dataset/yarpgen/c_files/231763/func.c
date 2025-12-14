/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231763
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)61895)))) / (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)219))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) + (((((((/* implicit */int) (signed char)-48)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)65535)) - (65528)))))));
    }
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)5))))) > (((/* implicit */int) var_13)))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_18) > (2834992882041554403LL))))) : (max((3752511541776387508ULL), (((/* implicit */unsigned long long int) var_17))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */signed char) (unsigned short)29460);
        var_22 |= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [(signed char)14])) % (((/* implicit */int) (unsigned char)73)))) | (((/* implicit */int) (unsigned char)182))));
    }
    for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) arr_5 [i_2] [i_2]);
        var_24 = ((/* implicit */unsigned int) 8945331875630116504LL);
    }
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        var_25 = ((/* implicit */_Bool) (-(((((/* implicit */int) (signed char)40)) >> (((/* implicit */int) (unsigned short)1))))));
        var_26 = ((/* implicit */int) min((var_26), ((-(((/* implicit */int) var_4))))));
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((var_0) >= (((/* implicit */int) (_Bool)1))))), ((~(arr_8 [i_3])))))) ? ((-(((/* implicit */int) arr_9 [(unsigned char)0] [i_3])))) : (max((((((/* implicit */int) arr_1 [10])) - (((/* implicit */int) var_6)))), ((+(var_5))))))))));
    }
    for (signed char i_4 = 1; i_4 < 6; i_4 += 1) 
    {
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((min((((/* implicit */int) arr_0 [i_4 + 4])), (var_7))) ^ (((/* implicit */int) ((short) arr_6 [i_4 + 1]))))))));
        /* LoopNest 2 */
        for (short i_5 = 1; i_5 < 9; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_29 = ((/* implicit */long long int) (~((~(((/* implicit */int) (short)-30568))))));
                    arr_17 [(unsigned char)9] [i_5] [i_6] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)1))));
                    arr_18 [i_6] [i_5 + 1] [i_6] = ((/* implicit */unsigned short) (short)17326);
                }
            } 
        } 
    }
    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)16368), (((/* implicit */short) ((((/* implicit */int) var_9)) != (var_7))))))) ? (max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) var_7)) : (var_2))), (((/* implicit */unsigned int) var_16)))) : (((/* implicit */unsigned int) min((((/* implicit */int) (!((_Bool)1)))), ((~(((/* implicit */int) var_3)))))))));
}
