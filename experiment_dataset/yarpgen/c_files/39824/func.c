/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39824
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) min((((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)16919)) : (((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(4611686017890516992LL)))))))));
        var_11 += ((/* implicit */int) var_0);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_7)))) ? (min((((/* implicit */int) arr_1 [i_0])), ((+(((/* implicit */int) arr_1 [i_1])))))) : (min((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_3 [i_1])) : (var_9))), ((+(((/* implicit */int) arr_4 [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] &= (!(((/* implicit */_Bool) (+(var_10)))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] &= (+(min((arr_10 [i_3 - 2] [i_3 - 1] [i_3 - 3] [i_4 + 1]), (((/* implicit */unsigned long long int) arr_4 [i_3 - 2])))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_14 [i_2] [i_1] [i_0])) : (var_6))), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (12996274016720635173ULL) : (((/* implicit */unsigned long long int) -4429757968861287639LL)))))), ((~(18446744073709551586ULL)))));
                }
            } 
        } 
        var_13 ^= (((!(((/* implicit */_Bool) 1998973781)))) ? (min((arr_7 [i_0]), (arr_7 [i_0]))) : (((/* implicit */unsigned int) var_7)));
        arr_17 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) var_4))), (((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) -1126345343)) : (var_10)))))) ? (min((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0])) ? (var_1) : (13868974156885084761ULL))), (((/* implicit */unsigned long long int) (+(var_3)))))) : (((/* implicit */unsigned long long int) min((max((var_8), (((/* implicit */unsigned int) arr_8 [i_0] [i_0])))), (((/* implicit */unsigned int) arr_8 [i_0] [i_0])))))));
    }
    var_14 *= ((/* implicit */unsigned char) (~(-1998973790)));
    var_15 = ((((/* implicit */_Bool) var_2)) ? (var_9) : (var_4));
    var_16 = ((/* implicit */unsigned long long int) ((unsigned int) min((((var_5) ? (((/* implicit */unsigned long long int) var_7)) : (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)32767)) : (var_9)))))));
}
