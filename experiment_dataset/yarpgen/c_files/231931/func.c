/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231931
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
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_1] = ((/* implicit */unsigned char) ((arr_2 [i_0 - 1] [i_1 + 1]) ? ((~(((/* implicit */int) ((arr_4 [(unsigned char)9]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))) : (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_1] [(unsigned short)8] [i_1])) : (((/* implicit */int) var_16)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) >= (17131123417807654001ULL))))))));
                            arr_10 [i_2] [i_2] [9] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */short) max((arr_2 [10ULL] [i_1 - 1]), (arr_2 [i_3] [i_2])))), (var_0)));
                        }
                    } 
                } 
                var_19 ^= ((/* implicit */_Bool) arr_8 [i_0] [i_1] [(_Bool)1]);
                var_20 = ((/* implicit */unsigned int) arr_1 [i_1 + 1] [i_0 - 1]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (-(var_7))))))), (var_9)));
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                {
                    var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_4] [i_4] [(_Bool)1])) >> (((((((/* implicit */_Bool) var_17)) ? (14704655796362509312ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) - (14704655796362509310ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5] [i_6])))))) : (arr_11 [i_4]));
                    arr_19 [i_4] [(_Bool)1] &= ((/* implicit */unsigned char) arr_18 [i_6] [i_5] [i_4]);
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            {
                                arr_24 [i_4] [i_5] [i_6] [i_5] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_4] [i_8] [i_6] [i_7] [i_8] [i_8]))));
                                arr_25 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4] [i_4])) ? ((((_Bool)0) ? (arr_21 [i_8] [i_7] [i_5] [i_4] [i_5] [i_4]) : (((/* implicit */unsigned long long int) arr_20 [i_4] [(signed char)19] [i_4] [i_4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), (((/* implicit */short) (signed char)104))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((max((9478070947227001411ULL), (((/* implicit */unsigned long long int) (signed char)50)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))))))));
                                var_23 = ((/* implicit */unsigned char) ((unsigned short) var_8));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_4] [i_4] [i_4])) | (((/* implicit */int) ((arr_21 [i_8] [i_7] [i_6] [i_6] [i_5] [(unsigned short)5]) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_3);
    var_26 = ((/* implicit */_Bool) var_3);
}
