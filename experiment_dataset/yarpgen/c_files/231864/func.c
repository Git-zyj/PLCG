/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231864
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    var_19 = min((((/* implicit */long long int) (unsigned short)10379)), (max((((/* implicit */long long int) min((var_12), ((unsigned short)10379)))), (var_13))));
                    arr_8 [i_0] = ((/* implicit */short) max((max((var_6), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65535))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_11)))))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((long long int) ((signed char) (signed char)-4))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)4))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] = (((!(((/* implicit */_Bool) (signed char)26)))) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))));
                        arr_13 [i_3] [i_1] [i_2] [i_3 - 1] [i_3] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-9))));
                        arr_14 [i_0] [i_1] [i_0] [i_3 - 1] = ((/* implicit */_Bool) (+(max((((/* implicit */int) max(((short)-1), (((/* implicit */short) (signed char)3))))), ((-(((/* implicit */int) var_5))))))));
                    }
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned short) (-(((int) ((unsigned long long int) 18446744073709551615ULL)))));
                        arr_17 [i_2 + 1] [i_1] [(signed char)13] [i_2 + 2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (signed char)-4)))))))) | ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (18446744073709551615ULL)))))));
                        var_21 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2341142290U)))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */int) (((~((~(2341142290U))))) << (((/* implicit */int) (!(((/* implicit */_Bool) 714439711)))))));
                        arr_22 [12ULL] [i_2] [i_0] [0] [i_0] = ((/* implicit */short) ((-1LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)3)))));
                        var_23 = ((/* implicit */long long int) ((unsigned int) max(((unsigned char)119), (((/* implicit */unsigned char) (signed char)3)))));
                    }
                    arr_23 [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned int) ((short) 1723166232));
                }
            } 
        } 
    } 
    var_24 = var_12;
}
