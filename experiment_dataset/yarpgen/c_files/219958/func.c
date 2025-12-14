/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219958
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_0 [i_0]))) && (((/* implicit */_Bool) (-(arr_1 [16]))))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50580))) : (arr_1 [i_0])))));
        arr_2 [i_0] = max((0ULL), (((/* implicit */unsigned long long int) 3419825908U)));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_0)))))) & (max((((/* implicit */unsigned long long int) 3419825912U)), (arr_1 [i_0])))));
    }
    var_12 = ((/* implicit */signed char) var_10);
    /* LoopNest 3 */
    for (short i_1 = 1; i_1 < 8; i_1 += 2) 
    {
        for (short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_13 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)61220)) ? (3622876129865157121ULL) : (((/* implicit */unsigned long long int) 8930202315473611615LL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_1 + 3] [(signed char)3])))))));
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            arr_18 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) var_6);
                            arr_19 [i_1] [i_1] [i_3] [i_1] [i_5] = ((((/* implicit */unsigned long long int) arr_11 [i_1])) / (((min((arr_6 [i_5] [i_2]), (15760338350275451752ULL))) - (min((var_7), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [(unsigned short)6] [i_5])))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            arr_22 [1ULL] [i_2] [i_2] [i_1] [i_4] [i_6] = 18446744073709551604ULL;
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (14823867943844394490ULL)))) ? (((/* implicit */long long int) ((int) 536870911))) : (((((/* implicit */_Bool) var_1)) ? (536870911LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3419825909U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65522))) : (15760338350275451752ULL))))));
                            arr_23 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_13 [i_1] [i_1 + 4] [i_1 + 4] [i_1 + 4] [i_1 + 2] [i_1 + 3])))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_2] [i_4] [i_6]))) ^ (var_7))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_1] [1LL]))))))) : (((unsigned long long int) (~(arr_1 [i_1]))))));
                            arr_24 [(unsigned char)2] [i_1] [i_1 - 1] [i_1] [i_1 - 1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((var_5), (var_5)))), (min((18LL), (((/* implicit */long long int) ((unsigned char) (unsigned short)65514)))))));
                        }
                        var_15 = ((/* implicit */unsigned long long int) (+((~(((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */int) arr_7 [i_1 + 3] [i_2] [i_3])) : (((/* implicit */int) arr_5 [i_2]))))))));
                    }
                    arr_25 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((+(536870911LL)))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_17 [i_1])), (875141387U))))));
                }
            } 
        } 
    } 
}
