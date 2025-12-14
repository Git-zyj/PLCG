/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39315
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
    var_15 = ((unsigned long long int) 18446744073709551609ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_16 = min((((unsigned long long int) min((16519937691831140075ULL), (((/* implicit */unsigned long long int) var_14))))), (max(((+(arr_9 [i_0] [i_0] [i_2] [i_2] [i_2] [i_4] [i_4 + 1]))), (((/* implicit */unsigned long long int) ((unsigned char) 5730771531053713133ULL))))));
                                arr_11 [i_0] [i_3] [(unsigned short)4] [i_1] [i_0] = ((/* implicit */unsigned char) min((arr_6 [i_0] [i_0] [i_0 + 1] [i_1]), (((/* implicit */unsigned short) (unsigned char)133))));
                                arr_12 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (!((((!(((/* implicit */_Bool) arr_1 [12ULL] [i_1])))) && (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_2] [(unsigned char)14] [i_0]))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) ((unsigned short) var_2))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (11831573724567617164ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55633))))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
                arr_15 [i_0] [i_0] = (+(((((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)2), ((unsigned char)185))))) : (((((/* implicit */_Bool) var_13)) ? (arr_9 [i_0] [i_0 + 2] [(unsigned char)13] [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 4; i_6 < 14; i_6 += 2) 
        {
            {
                arr_23 [i_6] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max(((unsigned char)138), ((unsigned char)2)))) ? (4648076478074561556ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned char)88)))))))));
                var_17 = var_8;
            }
        } 
    } 
}
