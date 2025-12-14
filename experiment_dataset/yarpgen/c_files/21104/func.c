/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21104
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] [11] = ((/* implicit */signed char) 606389832);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_15 [i_3] [i_3] [i_2] [i_1] [i_0] [i_0] = (+(((((/* implicit */long long int) 4294967269U)) - (-7690744590964546657LL))));
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 + 1])) ? (((arr_4 [(short)2] [i_1 + 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22268))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [12ULL] [i_1 + 1] [i_0])))))));
                            var_15 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_7 [i_3] [1LL] [(short)6] [1LL])))) % (((((/* implicit */int) min((arr_14 [(short)1] [(short)1]), (arr_12 [i_0] [i_1] [i_2] [i_3])))) ^ (((((/* implicit */int) (signed char)30)) << (((var_2) + (1525927928)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_6))));
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        for (int i_5 = 1; i_5 < 10; i_5 += 2) 
        {
            {
                arr_20 [i_4] [i_4] = ((/* implicit */unsigned int) var_4);
                var_17 = arr_4 [i_5] [i_5];
                var_18 &= ((/* implicit */unsigned short) min((((((/* implicit */int) var_9)) - (((/* implicit */int) arr_13 [(unsigned short)5] [i_4] [i_4] [i_5 + 1])))), (((/* implicit */int) max((((/* implicit */short) arr_13 [i_4] [i_4] [i_5] [i_5 - 1])), (var_8))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                var_19 |= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_6] [i_7])) && ((!(((/* implicit */_Bool) var_6))))))), ((+(((/* implicit */int) (!((_Bool)0))))))));
                arr_27 [i_6] = ((/* implicit */int) max(((+(-2513582463810120268LL))), (((/* implicit */long long int) arr_24 [i_7]))));
            }
        } 
    } 
}
