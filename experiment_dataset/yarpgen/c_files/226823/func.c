/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226823
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
    var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)17))))) ? (((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) var_11)))) : (((/* implicit */int) max(((unsigned short)40844), ((unsigned short)54698)))))), ((~((-(((/* implicit */int) (short)-21662))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    var_16 = var_5;
                    var_17 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)13)))) % (var_2)));
                    var_18 = ((/* implicit */short) arr_7 [i_1 + 1]);
                }
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) 2743582731294148362LL))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned long long int) -1945580199);
                                arr_16 [i_1] [i_3] [(unsigned short)8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))));
                                var_21 = ((/* implicit */long long int) arr_2 [i_0] [(unsigned char)2]);
                                var_22 = ((/* implicit */long long int) ((signed char) min((((/* implicit */long long int) (~(((/* implicit */int) (short)-22340))))), (((long long int) 1168529294365875687LL)))));
                            }
                        } 
                    } 
                }
                var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_15 [(unsigned char)6] [(unsigned char)6] [8LL] [i_1 - 2] [i_1 + 1])), (arr_12 [i_1 + 1] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-14)) >= (((/* implicit */int) arr_15 [i_1 - 1] [(unsigned short)10] [8] [i_1 - 3] [i_1 + 2])))))) : (arr_12 [i_1 + 2] [i_1 - 1])));
            }
        } 
    } 
}
