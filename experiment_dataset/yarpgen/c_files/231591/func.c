/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231591
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
    var_14 += ((/* implicit */unsigned long long int) 792641137);
    var_15 = ((/* implicit */short) var_2);
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) (-(((9) - (((/* implicit */int) arr_0 [i_0 - 4]))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) arr_7 [i_1] [i_2] [i_3]);
                        var_18 &= ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) (short)-10254)) : (((/* implicit */int) arr_0 [i_0 + 1])))) - (((/* implicit */int) ((unsigned short) var_12)))));
                        arr_9 [i_3] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_4 [i_2 + 1] [i_1 - 2] [i_2]) << (((-545824669) + (545824671)))))) ? (1808190738542386595ULL) : (arr_4 [i_1 + 1] [i_1 + 1] [(_Bool)1])));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (unsigned char i_5 = 3; i_5 < 20; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    {
                        arr_18 [i_6] = ((/* implicit */short) -6449448906332891294LL);
                        arr_19 [i_0] [i_4] [(short)2] [i_6] [(unsigned char)16] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_12 [i_5 + 1] [i_5] [i_5])) ? (14724411768845961939ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) 8589410304LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [13ULL] [(signed char)13] [i_6]))) : (-8589410313LL)))))));
                        arr_20 [i_6] [i_4] [i_5] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_14 [i_0 - 4] [i_0 - 2] [i_4 + 1] [i_5 - 2]), (((/* implicit */unsigned short) var_7)))))));
                    }
                } 
            } 
        } 
    }
    var_19 = -4658030102978881331LL;
}
