/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3507
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
    for (signed char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((short) ((arr_0 [i_1]) % (((/* implicit */long long int) (+(-1163273382)))))));
                arr_5 [i_0] [(short)19] [i_1] = ((/* implicit */long long int) arr_1 [i_0 + 1]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                for (short i_5 = 1; i_5 < 21; i_5 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) (~((-(((((/* implicit */_Bool) (short)31370)) ? (10193128471469469138ULL) : (((/* implicit */unsigned long long int) -8504032824670365697LL))))))));
                        var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))), (((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) (short)-6408))))) | (arr_8 [i_2 - 1])))));
                        arr_15 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)109)) ^ (((/* implicit */int) (_Bool)0))));
                        var_15 = ((/* implicit */unsigned long long int) var_1);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_6 = 2; i_6 < 23; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                {
                    arr_21 [i_2 - 1] [i_2 - 1] [i_6 - 1] [i_6] = ((/* implicit */unsigned short) arr_12 [i_2] [i_2] [(unsigned short)4]);
                    var_16 = ((/* implicit */unsigned short) ((arr_9 [i_2 + 1]) ? (var_10) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (1614039568850081361LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_7])))))) ? (((((/* implicit */_Bool) (signed char)-103)) ? (var_4) : (((/* implicit */long long int) 2810934813U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6 + 1] [i_6 - 2] [i_2 + 2])))))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */_Bool) var_5);
}
