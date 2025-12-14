/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193787
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 6421709669691505649LL)) || (((/* implicit */_Bool) (unsigned short)14))));
    var_19 |= ((/* implicit */unsigned short) (-(((/* implicit */int) var_15))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((-9223372036854775798LL), (((/* implicit */long long int) (signed char)-1))))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0 - 2]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 8; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_14 [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62572))) > ((~(arr_5 [i_0] [i_2] [i_2]))))))));
                                arr_15 [i_4] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) || ((_Bool)1)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_20 [i_6] [i_2] [i_5] [i_2] [i_1] [i_2] [i_0] |= ((/* implicit */short) var_2);
                                arr_21 [i_0] [(unsigned char)9] [(unsigned char)9] [i_5] [i_6] [i_6] = ((/* implicit */signed char) ((unsigned short) ((unsigned short) arr_9 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 + 1])));
                            }
                        } 
                    } 
                    arr_22 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(min((arr_2 [i_2]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2])))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) (unsigned short)16383);
}
