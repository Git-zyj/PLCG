/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18985
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
    var_11 = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] = ((/* implicit */unsigned long long int) (signed char)7);
                                var_12 = ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) (signed char)-127))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-12)) & (((/* implicit */int) (short)32767))))) : (((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_1 + 3])) ? (arr_3 [i_2 + 1] [i_1 + 2]) : (3458764513820540928ULL))));
                                arr_15 [i_0] [i_4] [i_2] [i_3] [i_0] = ((/* implicit */short) min((arr_9 [i_0] [i_3]), ((+(((457819414) >> (((/* implicit */int) (unsigned char)0))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (unsigned char i_6 = 4; i_6 < 11; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)52135)) >> (((((/* implicit */int) arr_2 [i_1 - 1])) - (150))))) ^ (((/* implicit */int) ((((/* implicit */int) arr_4 [i_5])) == (((/* implicit */int) arr_4 [i_1 + 4])))))));
                                arr_22 [(unsigned char)5] [(unsigned char)5] [(unsigned char)5] [i_6] [i_5] [i_5] [(unsigned char)3] = 14987979559889010658ULL;
                                var_14 = (unsigned char)1;
                            }
                        } 
                    } 
                } 
                arr_23 [i_0] [i_1 + 2] = ((/* implicit */int) (unsigned short)52112);
            }
        } 
    } 
}
