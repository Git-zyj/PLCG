/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195842
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
    var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((unsigned int) var_9))) || (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_19)))))), (((((/* implicit */_Bool) max((var_14), (var_6)))) && (((/* implicit */_Bool) var_11))))));
    var_21 ^= ((/* implicit */unsigned long long int) var_17);
    var_22 *= ((/* implicit */unsigned short) var_4);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] |= ((/* implicit */long long int) min((max((((/* implicit */unsigned char) (signed char)0)), (arr_3 [i_0]))), (((/* implicit */unsigned char) (_Bool)0))));
        arr_5 [(unsigned short)0] [i_0] = ((/* implicit */int) (-((((~(arr_0 [i_0]))) % (arr_0 [7U])))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_1 [i_0])))))));
        arr_6 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */unsigned long long int) arr_0 [(signed char)18])), (5146562261693210867ULL))) : (min((((/* implicit */unsigned long long int) 1023U)), (13300181812016340739ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned short)20])))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 19; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            {
                                arr_18 [i_1] [i_2] [0LL] [i_4 + 2] [0LL] = ((/* implicit */unsigned short) arr_7 [i_1]);
                                var_24 = ((int) (~(-261734502)));
                                var_25 |= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-3)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 2; i_6 < 17; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_6 - 1] [i_2] [i_3]))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_6 + 2] [i_6] [i_6 + 3] [i_2])) || (((/* implicit */_Bool) arr_11 [i_6 + 2] [i_6 + 3] [i_6 + 3] [i_6]))));
                        var_28 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 5146562261693210878ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) | (13300181812016340748ULL))) : (((/* implicit */unsigned long long int) (+(2091795544U))))));
                    }
                    arr_21 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 1082801853U)) ^ (arr_13 [20LL] [i_1] [i_3] [i_2] [i_3] [i_1]))))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_8 [i_1])))) * (((/* implicit */int) arr_12 [i_1] [i_1]))));
    }
}
