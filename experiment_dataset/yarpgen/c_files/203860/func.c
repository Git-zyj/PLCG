/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203860
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))))))));
                                arr_12 [i_2] [i_1] [i_1] [i_1 - 2] [i_1 - 3] = ((/* implicit */unsigned int) (~(min((arr_11 [i_4] [i_4] [i_4] [i_4 + 1] [i_4] [i_4] [i_4 - 1]), (arr_11 [i_2] [(unsigned char)1] [i_2] [i_4 + 1] [i_4] [i_4] [i_4])))));
                                arr_13 [12LL] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) -842789447333682783LL);
                                var_20 = ((/* implicit */short) (~((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) > (((/* implicit */int) (unsigned char)1)))))))));
                            }
                        } 
                    } 
                    arr_15 [i_2 - 1] [(signed char)17] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(85132205902043701LL)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-109))))) : ((-(114260829U)))));
                    var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0] [i_1 + 2] [i_2]))))), (max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)22527))))), (((6860879930117441448LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34357)))))))));
                    arr_16 [i_2] [i_1] [i_1] = ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)12] [i_1] [i_1 + 1]))) > (var_13)))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(unsigned char)4] [i_2 + 1] [i_2] [(unsigned char)4] [i_0] [i_1] [i_0])))))))) + ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39409))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) 135921105U);
}
