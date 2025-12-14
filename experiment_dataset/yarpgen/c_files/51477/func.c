/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51477
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [(signed char)15] = (+(max((((/* implicit */unsigned long long int) arr_1 [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) - (11320270787820744641ULL))))));
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    var_11 = ((/* implicit */unsigned short) (~((((_Bool)1) ? (3812725725911108401LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9700)))))));
                    arr_9 [8U] [8U] [8U] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_8 [i_2 - 1] [i_1] [5] [13]), (arr_8 [i_2 - 2] [(unsigned char)9] [(unsigned char)9] [i_0])))) - (((/* implicit */int) max((arr_8 [i_2 + 2] [i_1] [i_1] [(unsigned short)4]), (arr_8 [i_2 + 1] [0] [11ULL] [i_1]))))));
                    arr_10 [(_Bool)1] [i_0] [(signed char)0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) 3812725725911108401LL)) ? (max((((/* implicit */unsigned long long int) arr_8 [i_1] [4ULL] [i_1 - 1] [i_1])), (18446744073709551603ULL))) : (((/* implicit */unsigned long long int) max((-3812725725911108408LL), (((/* implicit */long long int) (unsigned short)14151)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2 + 2] [i_4] [i_4] = ((/* implicit */int) ((((min((((/* implicit */long long int) (unsigned short)14154)), (var_8))) >= (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_7 [(_Bool)1] [(_Bool)1] [i_2] [(_Bool)1])), (var_9)))))) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((-1122162647) ^ (((/* implicit */int) (unsigned short)31668)))))));
                                var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) (unsigned char)115))))) : (((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (-113700948730213653LL))) ^ (((/* implicit */long long int) (~(var_7))))))));
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 4; i_5 < 16; i_5 += 3) 
                {
                    arr_19 [i_0] [i_5] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65535))));
                    arr_20 [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [12ULL] [(unsigned char)1] [i_5] [i_5] [i_5 - 4])) : (((/* implicit */int) (unsigned short)6702))))) ? (((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [11U] [i_1 - 1] [11U] [11U] [i_1 - 1]))))) : (arr_6 [i_1 + 1])))) ? ((~(((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) (unsigned char)49)) : (-1956733938))))) : ((+(((/* implicit */int) (signed char)25)))));
                }
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)91))))) ? (((var_0) >> (((((/* implicit */int) var_5)) + (99))))) : (max((var_0), (((/* implicit */int) var_5)))))))));
    var_14 = ((/* implicit */signed char) (unsigned short)65535);
}
