/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222481
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                var_10 = ((unsigned short) -1);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)42157)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_4])) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) 0)) ? (-445594710) : (445594710)))))), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) - (var_9)))));
                                var_11 = ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) (unsigned char)192)), (-969067672787425081LL)))))) ? (arr_10 [i_0] [i_2] [i_3] [i_4]) : (max((((/* implicit */int) max(((unsigned char)90), (var_7)))), (min((445594686), (-1258615539))))));
                            }
                            var_12 = ((/* implicit */unsigned int) (+((((-(var_2))) - (((((/* implicit */int) (unsigned short)14205)) + (((/* implicit */int) (unsigned char)70))))))));
                        }
                    } 
                } 
                arr_14 [2ULL] &= ((/* implicit */unsigned long long int) arr_2 [i_1]);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((int) ((unsigned short) ((-1) * (((/* implicit */int) (unsigned char)99))))));
    /* LoopSeq 1 */
    for (unsigned short i_5 = 3; i_5 < 19; i_5 += 4) 
    {
        var_14 = ((/* implicit */int) (unsigned short)0);
        arr_17 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((+(var_0)))))) ? (((/* implicit */int) ((((((/* implicit */int) arr_16 [i_5])) > (((/* implicit */int) arr_16 [i_5])))) && (((/* implicit */_Bool) arr_16 [i_5]))))) : (((((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) var_6))))) / (((/* implicit */int) ((unsigned short) (unsigned char)230)))))));
    }
}
