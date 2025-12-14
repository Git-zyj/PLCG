/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29633
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_1 [i_0])))))));
                    var_15 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)122))))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (var_3))))));
                    arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)105)) < (((/* implicit */int) (signed char)123))))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) && (((/* implicit */_Bool) ((int) arr_4 [i_0] [(signed char)17]))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            {
                var_17 = max((((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) < (7156054336558006361ULL)))), (((/* implicit */int) ((unsigned char) arr_12 [i_4]))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-116)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)84))) < (0ULL)))))));
                var_19 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_4])) & (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) var_7)))) - (((/* implicit */int) (((-(((/* implicit */int) (signed char)115)))) != (((/* implicit */int) var_13)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((unsigned short) (signed char)-1));
}
