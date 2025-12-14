/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30519
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
    var_10 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) min(((unsigned char)159), ((unsigned char)18)))) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min(((((~(((/* implicit */int) arr_2 [i_0] [i_0])))) & (((/* implicit */int) (unsigned short)61510)))), (max((((/* implicit */int) ((unsigned char) (unsigned char)130))), ((~(((/* implicit */int) var_5))))))));
        var_11 = ((/* implicit */unsigned long long int) min((arr_1 [i_0]), (arr_1 [i_0])));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = arr_4 [i_1] [i_2];
                    var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) arr_7 [i_1] [i_1] [i_0])), (max((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)99)) > (((/* implicit */int) (unsigned short)22798))))), (((unsigned short) (unsigned char)99))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
    {
        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) 
        {
            {
                arr_17 [(unsigned char)15] = ((/* implicit */unsigned long long int) (unsigned short)25847);
                arr_18 [i_4] [i_3 + 2] [i_3] = ((/* implicit */unsigned long long int) arr_1 [i_3]);
            }
        } 
    } 
}
