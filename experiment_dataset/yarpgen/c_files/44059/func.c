/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44059
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
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_0 [i_0] [i_0]))) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) (signed char)53))));
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7583))) + (15889796828483448852ULL)))) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (2432894196648220060LL) : (0LL)))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((int) ((((/* implicit */_Bool) (short)20682)) ? (13576648641807774113ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14146)))));
                    }
                    var_10 = ((/* implicit */long long int) var_6);
                }
                for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    arr_16 [i_0] [i_0] [i_4] = ((/* implicit */long long int) ((unsigned short) -112486332432040673LL));
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */int) var_3);
                }
                for (int i_5 = 2; i_5 < 10; i_5 += 4) 
                {
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_15 [i_0 - 1] [i_5 - 1] [i_5 + 1])) | (((((/* implicit */_Bool) 15997228189505727936ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4ULL)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        arr_25 [4ULL] [i_0] [i_0] = ((/* implicit */short) ((int) 5775815916470278867ULL));
                        var_11 -= ((/* implicit */unsigned long long int) arr_2 [i_6] [i_6] [i_6]);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned short) ((unsigned long long int) (-9223372036854775807LL - 1LL)));
                        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) arr_20 [i_5] [i_5] [i_1] [i_5]))));
                    }
                    var_14 -= ((/* implicit */signed char) var_8);
                }
                for (int i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    arr_32 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_26 [i_0 + 2] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_3)));
                    arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((long long int) (signed char)-106));
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_0] [i_0] [i_0 + 3] [i_0] [(signed char)0]))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))));
                    arr_34 [i_0] = ((/* implicit */short) arr_1 [i_0]);
                }
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((unsigned short) 1040920778));
}
