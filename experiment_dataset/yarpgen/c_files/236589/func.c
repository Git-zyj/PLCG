/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236589
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
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)11))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (_Bool)1)))))) : ((~(((((/* implicit */unsigned long long int) 1852592136602716040LL)) & (18446744073709551606ULL)))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(18ULL)))))) ? (min(((+(((/* implicit */int) arr_0 [i_2] [(unsigned short)5])))), (((/* implicit */int) ((unsigned char) arr_1 [12] [12]))))) : (((((/* implicit */int) (unsigned char)244)) & (((/* implicit */int) ((_Bool) (unsigned short)5019)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (unsigned short i_3 = 2; i_3 < 23; i_3 += 2) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_9 [i_4])) ^ (min((min((6ULL), (((/* implicit */unsigned long long int) (unsigned short)28095)))), (((/* implicit */unsigned long long int) ((1634733347U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-8909))))))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
                            {
                                arr_22 [(unsigned short)15] [i_4] [i_5] [i_5] [i_4] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((unsigned long long int) (unsigned short)37440)) >= (min((((((/* implicit */_Bool) arr_16 [i_3 + 1] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_21 [i_3] [4LL] [i_6]))), (((/* implicit */unsigned long long int) (~(arr_11 [i_3]))))))));
                                arr_23 [i_3 - 2] [i_3 - 2] [i_4] = ((/* implicit */unsigned long long int) ((((arr_16 [i_3 - 2] [i_4 - 1] [i_4]) < (arr_16 [i_3 + 1] [i_4 - 1] [i_4]))) ? ((-(arr_16 [i_3 - 2] [i_4 - 1] [i_4]))) : (((((/* implicit */_Bool) arr_16 [i_3 - 2] [i_4 - 1] [i_4])) ? (arr_16 [i_3 - 1] [i_4 - 1] [i_4]) : (arr_16 [i_3 - 1] [i_4 - 1] [i_4])))));
                            }
                            for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
                            {
                                var_18 = ((/* implicit */long long int) min(((unsigned char)24), ((unsigned char)234)));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)80))))) ? (((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_3 - 2])) ? (((/* implicit */unsigned long long int) arr_16 [i_3 + 1] [i_3 + 1] [i_4])) : (min((((/* implicit */unsigned long long int) 4037742248386017636LL)), (13555686116889101900ULL))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (min((((/* implicit */unsigned long long int) arr_19 [i_3] [i_3] [i_3] [i_3])), (1029232097183782086ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12717636854236785185ULL)) ? (((/* implicit */int) (short)-29029)) : (((/* implicit */int) (unsigned short)2877)))))))));
                            }
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((arr_16 [i_3] [i_4] [i_4]) >> (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)28102)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)81))))) : ((~(((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [18ULL] [(unsigned char)1] [i_5] [i_5] [8ULL] [i_3] [i_3]))) : (arr_16 [i_3] [i_4] [i_4])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
