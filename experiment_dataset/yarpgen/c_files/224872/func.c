/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224872
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 += ((/* implicit */short) (~(((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        arr_9 [i_1] [(signed char)17] [5U] [2] [5U] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((arr_4 [i_0]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)13840)) % (((/* implicit */int) var_15)))))))), (min((max((((/* implicit */unsigned long long int) arr_2 [i_3] [i_1] [(short)14])), (18446673704965373952ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_9)) : (arr_6 [i_2] [3LL] [i_0]))))))));
                        arr_10 [i_0] [i_0] [i_2] [i_1] [i_0] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((2147483642), (((/* implicit */int) var_15))))), (4294967273U)));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_15)), (var_12)))) ? (((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51721))) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_4]), (arr_2 [i_0] [i_1] [i_3])))))));
                            var_20 += ((/* implicit */short) (signed char)37);
                            var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_3])) ? (((((/* implicit */_Bool) 16795731057838462017ULL)) ? (((/* implicit */unsigned long long int) var_0)) : (63ULL))) : (max((4260967655807884898ULL), (((/* implicit */unsigned long long int) 31U)))))) >= (max((((/* implicit */unsigned long long int) max((2572973382U), (((/* implicit */unsigned int) 472429314))))), ((-(arr_7 [i_0] [i_0] [12ULL] [i_0] [i_0] [i_0])))))));
                            arr_15 [i_0] [i_0] [i_0] [i_2] [(short)12] [i_0] [i_4] = arr_3 [8ULL] [i_2] [(short)18];
                        }
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2])))))) : (max((arr_4 [i_3]), (arr_4 [i_2])))));
                    }
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_7 [i_0] [i_0] [i_1] [i_1] [i_2] [(short)18])))) ^ (((22U) >> (((arr_7 [i_2] [i_2] [(short)0] [i_1] [(short)0] [(short)0]) - (10897150131145700746ULL))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23048)) ? (var_9) : (((((/* implicit */int) var_11)) | (((/* implicit */int) arr_19 [i_6] [13U] [i_5] [i_2] [i_2] [13U] [i_0]))))))) ? (((min((((/* implicit */unsigned long long int) -1LL)), (18446744073709551552ULL))) % (((/* implicit */unsigned long long int) ((-1758842117849776593LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5])))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(var_16))), (((var_17) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
                                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((4294967273U), (((/* implicit */unsigned int) 472429314))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10904)))))) : (4294967291U)))) ? ((-(((/* implicit */int) arr_2 [i_5] [i_2] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)14334)))))));
                                arr_22 [i_0] [i_1] [5U] [i_5] [(unsigned short)7] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)6215)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_5] [i_6]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((((((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) var_8)))))) <= (((/* implicit */int) var_5)));
    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((18446744073709551552ULL), (((/* implicit */unsigned long long int) var_1))))) ? (min((((/* implicit */int) var_11)), (max((((/* implicit */int) (_Bool)1)), (2147483647))))) : (((((/* implicit */int) var_5)) << (((((/* implicit */int) min(((short)23034), (((/* implicit */short) var_7))))) + (76))))))))));
}
