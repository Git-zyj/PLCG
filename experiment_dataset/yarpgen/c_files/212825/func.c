/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212825
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
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_1]);
                var_13 = ((/* implicit */_Bool) var_1);
                var_14 -= ((/* implicit */long long int) arr_4 [10] [10]);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_0))));
        arr_8 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((arr_6 [i_2] [i_2]) ^ (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)17410)))))))), (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) min((arr_6 [i_2] [i_2]), (((/* implicit */long long int) (short)-28676))))) : (((unsigned long long int) (-2147483647 - 1)))))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_12))));
        /* LoopNest 3 */
        for (short i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    {
                        arr_15 [i_4] = ((/* implicit */unsigned short) (short)28685);
                        var_17 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_3] [i_4] [(unsigned short)5])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (6249108573721719737LL))))), ((+(((((/* implicit */long long int) ((/* implicit */int) var_6))) * (-4504003667869493511LL)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) (signed char)120);
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            arr_22 [i_6] [(signed char)16] = ((/* implicit */unsigned short) (!((!(arr_12 [i_6])))));
            var_19 = ((/* implicit */unsigned short) ((int) arr_10 [i_7] [i_6]));
        }
    }
    for (long long int i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
    {
        arr_25 [i_8] = ((/* implicit */unsigned int) min((arr_12 [i_8]), (((((unsigned int) (short)18019)) == (min((((/* implicit */unsigned int) 2147483647)), (372652724U)))))));
        /* LoopSeq 1 */
        for (short i_9 = 1; i_9 < 17; i_9 += 3) 
        {
            arr_28 [i_8] [i_9 + 4] = ((/* implicit */unsigned short) arr_13 [i_8] [1ULL] [i_8] [1ULL] [i_9 + 1]);
            arr_29 [i_8] [i_8] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((3458764513820540928LL) > (((/* implicit */long long int) arr_13 [i_8] [i_9 - 1] [i_8] [i_9] [i_9 + 2]))))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_19 [i_8] [i_8])) : (((/* implicit */int) arr_24 [i_8])))))));
        }
        var_20 &= ((/* implicit */short) ((((((/* implicit */int) ((4908940823209120418ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59624)))))) << (((((/* implicit */int) var_4)) - (15779))))) << (((arr_16 [i_8]) + (518207201)))));
    }
    var_21 = ((/* implicit */int) var_12);
    var_22 = ((/* implicit */signed char) var_8);
}
