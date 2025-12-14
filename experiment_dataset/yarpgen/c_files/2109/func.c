/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2109
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32750)) ? (-4030501886754952186LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8192))))))));
        var_14 -= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) - (min((((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (short)-15129)))), (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 4) 
    {
        arr_5 [(signed char)6] |= ((/* implicit */signed char) (short)-15129);
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-15113)))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_16 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned short)57350)))))))) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57361))) & (arr_10 [2U] [i_1] [i_2])))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)57344), (((/* implicit */unsigned short) (short)31836)))))) + (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_3]))) : (((unsigned int) var_2)))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 3; i_5 < 13; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((max((((/* implicit */unsigned int) var_9)), (var_10))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8188))))) && (((/* implicit */_Bool) 15005796317669064389ULL)))))));
                var_19 |= ((/* implicit */short) 18446744073709551612ULL);
                var_20 |= ((/* implicit */_Bool) (unsigned short)8179);
            }
        } 
    } 
}
