/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53001
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) ((int) var_9));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_11 [i_1] = ((/* implicit */unsigned short) 8384512);
                    arr_12 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_1 - 1] [i_1]))) >= (1729573202U)));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) var_0);
                    arr_23 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((_Bool) ((_Bool) -1583424748)));
                    /* LoopSeq 1 */
                    for (long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                    {
                        arr_26 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((var_0) ? (((/* implicit */unsigned long long int) 2147483647)) : (277588426381315287ULL))) : (((/* implicit */unsigned long long int) max((arr_13 [i_6 + 1] [i_3 - 1]), (((/* implicit */unsigned int) ((short) 6016672))))))));
                        arr_27 [i_5] = ((/* implicit */short) ((int) min((var_1), (((/* implicit */long long int) ((((/* implicit */unsigned int) -2022302304)) + (67108864U)))))));
                    }
                }
            } 
        } 
    } 
}
