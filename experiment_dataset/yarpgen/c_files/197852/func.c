/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197852
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_17 |= max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)202)) | (((/* implicit */int) (unsigned char)202))))) ? (max((arr_0 [(_Bool)1] [i_0]), (((/* implicit */unsigned int) (unsigned char)53)))) : (max((var_4), (((/* implicit */unsigned int) arr_1 [i_0])))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) (unsigned char)202))))) % (((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)207))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (var_14)));
    }
    var_18 = ((/* implicit */short) max((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)53))))), (max((var_12), (((/* implicit */unsigned int) var_14)))))), (((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) var_2)), (var_4))) <= (((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199))))))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) (unsigned char)207)))))))) | (((((/* implicit */_Bool) max((var_1), (((/* implicit */short) var_3))))) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))));
    var_20 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (unsigned int i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    arr_12 [i_1] [i_2] [(unsigned short)8] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1 + 2])) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) arr_6 [i_2] [i_3]))))), (((((/* implicit */long long int) ((/* implicit */int) var_14))) / (arr_9 [i_1] [i_1] [i_1] [i_1 - 1])))))) ? (((/* implicit */unsigned long long int) ((max((var_16), (((/* implicit */long long int) var_10)))) / (((/* implicit */long long int) ((/* implicit */int) max((var_7), ((unsigned char)55)))))))) : (max((((/* implicit */unsigned long long int) arr_6 [i_1 + 2] [i_1 + 4])), (((((/* implicit */_Bool) (unsigned char)84)) ? (var_8) : (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1 + 1] [(unsigned char)1] [i_3]))))))));
                    var_21 = ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_1 [i_1])) - (arr_4 [i_2]))))) : (((/* implicit */int) ((((/* implicit */int) max((arr_11 [i_1 - 1] [(unsigned short)7]), ((unsigned char)53)))) == (max((arr_4 [i_1 + 2]), (((/* implicit */int) (unsigned char)54))))))));
                }
                var_22 += ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((((/* implicit */_Bool) ((((((/* implicit */int) arr_10 [i_2] [i_1] [i_1 - 1])) + (2147483647))) << (((arr_0 [16U] [i_2]) - (1188334202U)))))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 4] [i_2])) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_10)), (((((/* implicit */int) var_6)) % (((/* implicit */int) var_11)))))))));
                var_23 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max(((unsigned char)201), ((unsigned char)172)))) : (((/* implicit */int) (unsigned char)56)))));
            }
        } 
    } 
}
