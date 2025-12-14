/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208952
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    var_11 |= ((/* implicit */long long int) var_5);
                    arr_10 [i_0 - 1] [(_Bool)1] [(_Bool)1] |= ((/* implicit */long long int) min((8746035684175208948ULL), (9700708389534342669ULL)));
                }
                for (unsigned char i_3 = 2; i_3 < 18; i_3 += 4) 
                {
                    var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 - 1] [i_3])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (max((9700708389534342669ULL), (((/* implicit */unsigned long long int) var_0))))))));
                    arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) min(((+(9700708389534342668ULL))), (((/* implicit */unsigned long long int) ((int) var_10)))));
                    var_13 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_1 - 1] [i_3 - 2])) ? (arr_2 [i_0 + 4] [i_1 - 1] [i_3 - 2]) : (((/* implicit */int) arr_1 [i_0 - 1]))))));
                    arr_14 [i_1] [i_1 - 1] [17ULL] [1ULL] = ((((/* implicit */int) arr_9 [i_3] [i_1] [i_0])) / (((((/* implicit */_Bool) arr_0 [i_3])) ? ((-(((/* implicit */int) (short)(-32767 - 1))))) : (arr_12 [i_0] [i_1 - 1] [i_3]))));
                    var_14 = max(((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3 - 1] [i_1]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8746035684175208947ULL)) ? (9700708389534342669ULL) : (9700708389534342667ULL))))))));
                }
                for (unsigned short i_4 = 2; i_4 < 18; i_4 += 2) 
                {
                    var_15 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)183)), (1944820270)));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 3; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_16 |= (-(((int) (!(((/* implicit */_Bool) var_4))))));
                                arr_23 [i_4] [11LL] [i_4] [i_5] [i_0] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_4 - 1])))))));
                            }
                        } 
                    } 
                    var_17 += ((/* implicit */unsigned char) ((long long int) var_8));
                }
                /* LoopSeq 1 */
                for (unsigned short i_7 = 1; i_7 < 18; i_7 += 3) 
                {
                    var_18 += ((/* implicit */long long int) (~(((unsigned long long int) -1LL))));
                    arr_27 [i_0 + 4] [i_0 - 1] = ((/* implicit */unsigned short) arr_12 [i_0] [i_1 - 1] [i_7]);
                    var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-56))))) <= (((/* implicit */int) ((((/* implicit */int) arr_9 [i_1 - 1] [i_7 - 1] [i_7 - 1])) <= (((/* implicit */int) var_10)))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((unsigned short) var_10));
}
