/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190364
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
    var_12 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) (-(637042005U))))), (min((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-38)), (214564324)))), (15U)))));
    var_13 = ((/* implicit */int) ((unsigned long long int) var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) ((_Bool) ((((/* implicit */_Bool) 417835673458715340LL)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_11))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_3] [i_2] [i_1] [8ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((((_Bool)1) ? (3118340980U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)930))))), (((/* implicit */unsigned int) ((((-364711355) + (2147483647))) >> (((((/* implicit */int) (unsigned char)167)) - (160))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)121)))))) ? (((/* implicit */int) arr_0 [i_3 - 1] [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(short)0] [(short)0])))))))) : ((~(((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [(_Bool)1] [i_1])) & (var_2)))))));
                            arr_13 [i_0] [i_0] [i_1] [(short)5] [i_3] = ((/* implicit */int) arr_0 [i_3] [(signed char)4]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 += ((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)0) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))), (var_10)));
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) ((long long int) 202811508));
                            var_16 = ((/* implicit */_Bool) ((unsigned long long int) arr_20 [i_4] [i_5] [i_5] [i_5]));
                            arr_28 [i_4] [i_5] [i_5] [i_7] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_6 - 2])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5] [i_5] [i_6 - 1]))))), (3387605047U)));
                            arr_29 [(signed char)10] [i_6] [i_5] [i_5] [i_4] = ((/* implicit */short) (+(((/* implicit */int) min((arr_24 [i_4] [i_5] [i_6] [i_6 - 2]), (arr_24 [i_4] [i_5] [i_6 - 1] [i_7]))))));
                        }
                    } 
                } 
                arr_30 [i_5] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1))), (min((((/* implicit */unsigned long long int) ((((-1538210515) + (2147483647))) >> (((-1) + (11)))))), (((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))) : (var_2)))))));
                arr_31 [i_5] [i_5] [i_4] = ((/* implicit */signed char) arr_23 [i_5] [i_5] [i_4]);
            }
        } 
    } 
}
