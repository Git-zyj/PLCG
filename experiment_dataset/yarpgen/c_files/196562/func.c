/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196562
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
    var_12 = ((/* implicit */int) (signed char)-12);
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))) == (((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned char)120)))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)709), ((unsigned short)5601))))) % (arr_0 [i_0 + 3]))) << ((((~(var_2))) + (7432734679645423728LL)))));
                    var_14 = ((unsigned int) ((((/* implicit */int) (unsigned char)116)) < (((/* implicit */int) var_5))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) (short)127);
                                var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_10 [4LL] [i_2 + 2] [(signed char)8] [i_4 + 2])))) ? (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) arr_8 [i_4 + 2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_4 [i_4 + 2] [i_2 - 1] [i_0 - 2])) + (48))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */short) (signed char)19);
        arr_18 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (var_0))))) != ((+(var_7)))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        arr_23 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_5] [(_Bool)1] [(_Bool)1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_13 [i_5] [8U] [i_5] [i_5])));
        var_17 = ((/* implicit */long long int) ((signed char) arr_8 [i_5]));
        arr_24 [i_5] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_5] [10] [i_5] [i_5] [i_5] [i_5] [i_5]))));
        arr_25 [(signed char)10] = ((/* implicit */_Bool) (signed char)(-127 - 1));
        var_18 |= ((((/* implicit */_Bool) arr_21 [i_5])) || (((/* implicit */_Bool) arr_21 [i_5])));
    }
}
