/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242399
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
    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (((var_12) / (var_1)))));
    var_14 |= ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((max(((((_Bool)1) ? (18446744073709551615ULL) : (18446744073709551609ULL))), (((unsigned long long int) (_Bool)1)))) | (((/* implicit */unsigned long long int) ((arr_5 [i_0 - 1] [i_0 - 3]) & (((/* implicit */int) ((short) -1762504599))))))));
                    var_16 = ((/* implicit */unsigned long long int) (unsigned short)23902);
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [(unsigned short)4]);
                }
            } 
        } 
        var_17 += ((/* implicit */long long int) (!(((/* implicit */_Bool) max((min((arr_4 [i_0 - 3] [i_0] [i_0 - 3]), (((/* implicit */unsigned int) arr_5 [i_0] [i_0])))), (((((/* implicit */unsigned int) 401897854)) * (18U))))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_3] [i_3] [i_3])) ? (arr_0 [i_3]) : (arr_0 [i_3])));
        var_19 &= (+(((/* implicit */int) arr_7 [i_3] [i_3])));
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                for (unsigned int i_6 = 1; i_6 < 6; i_6 += 3) 
                {
                    {
                        arr_16 [i_3] [i_3] [i_3] [(_Bool)1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_3])) | (((((/* implicit */_Bool) arr_14 [i_3] [i_4] [i_4] [0U] [(_Bool)0])) ? (((/* implicit */int) (unsigned short)58454)) : (((/* implicit */int) (unsigned short)7082))))));
                        arr_17 [i_3] [i_5] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_13 [i_3] [i_4] [i_3] [i_6 + 3] [(unsigned short)9])) : (((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) arr_13 [i_6] [(unsigned short)1] [i_4] [i_3] [i_3])) : (((/* implicit */int) arr_1 [i_6 + 2] [i_3]))))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_6 + 4] [i_6 + 4])) + (((/* implicit */int) var_6))));
                    }
                } 
            } 
        } 
    }
}
