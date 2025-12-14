/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3286
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
    var_15 = ((/* implicit */unsigned int) (unsigned char)83);
    var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)37608))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_17 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20030)) ? ((+(arr_0 [i_0]))) : (((((((/* implicit */int) var_8)) + (2147483647))) << (((((/* implicit */int) (unsigned short)50550)) - (50550))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned short) -772186925);
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-50))));
        }
        for (unsigned short i_2 = 2; i_2 < 19; i_2 += 1) 
        {
            arr_9 [i_2] [i_0] = ((/* implicit */unsigned short) var_6);
            arr_10 [i_0] [20] [i_2] = ((/* implicit */unsigned short) ((long long int) (~(arr_0 [i_2 - 1]))));
            arr_11 [i_2] [i_2] [i_0] = ((/* implicit */long long int) (_Bool)1);
        }
        var_18 ^= ((/* implicit */int) max((((/* implicit */long long int) arr_4 [i_0] [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -4685666382376688515LL)) ? (((/* implicit */int) (signed char)-1)) : (-1021632290)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5))) : (min((((/* implicit */long long int) -1021632284)), (-4648102320940419802LL)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (int i_4 = 4; i_4 < 17; i_4 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        var_19 = (+(max((4294967272U), (arr_16 [i_0] [i_3] [i_4 + 1] [(unsigned char)11]))));
                        arr_20 [i_4] [i_5] = ((/* implicit */signed char) var_12);
                        arr_21 [i_0] [i_0] [i_0] [(unsigned short)7] [i_4 - 2] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) ((unsigned short) (short)10))) <= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_19 [i_0] [i_4 + 4] [i_5] [i_5] [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)508)) - (((/* implicit */int) (signed char)-7))))) : (max((((arr_13 [i_3] [i_0] [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))))), (((/* implicit */unsigned int) var_10))))));
                    }
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((((/* implicit */_Bool) ((unsigned short) (signed char)-37))) ? (((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)0)))) + (((/* implicit */int) ((unsigned short) (unsigned short)30734)))))) : (arr_17 [i_0] [i_3] [i_4])))));
                    arr_22 [i_0] = ((/* implicit */_Bool) (unsigned char)165);
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4 - 3])) ? (((/* implicit */int) arr_19 [14] [i_3] [i_3] [i_3] [i_4 - 4] [i_4 + 3])) : (((/* implicit */int) arr_8 [i_4 + 2]))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3])) ? (arr_0 [i_0]) : (((/* implicit */int) (unsigned short)34789)))) - (((int) var_3)))))));
                }
            } 
        } 
        var_22 += ((/* implicit */_Bool) var_1);
    }
}
