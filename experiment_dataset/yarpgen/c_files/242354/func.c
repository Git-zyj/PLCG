/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242354
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2])), (var_6)));
                    var_10 ^= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_4 [i_1 + 1] [i_0] [i_2]))) % (536862720)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            {
                var_11 = ((/* implicit */_Bool) (~(((/* implicit */int) min((arr_9 [i_3]), (arr_9 [i_3]))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) -536862720)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((arr_16 [i_3 + 1] [i_4] [i_5] [i_3 + 1]) <= (arr_16 [i_3] [6LL] [i_3] [(signed char)7]))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_6] [i_5] [i_4] [i_3]))))))));
                            var_13 = ((/* implicit */short) max((max((max((var_1), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) ((unsigned char) (unsigned short)38289))))), (((/* implicit */unsigned int) (unsigned short)24576))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) arr_17 [i_3] [i_3 + 1] [i_3 + 1] [i_4]);
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    for (short i_8 = 1; i_8 < 19; i_8 += 4) 
                    {
                        {
                            arr_27 [i_3] [i_3] [i_7] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(arr_15 [i_7] [i_7] [i_7] [i_7])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_3 + 1] [i_8 + 1] [i_8 + 1]))) : (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) var_0)))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned short) (signed char)39))) : (((/* implicit */int) (_Bool)0)))))));
                            var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_2)) * (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) (unsigned char)255)))))));
                        }
                    } 
                } 
                var_16 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_19 [(signed char)14] [i_3 + 1] [i_3] [i_3])) * (((/* implicit */int) arr_19 [(unsigned short)0] [i_3 + 1] [i_3] [(unsigned char)16])))))));
            }
        } 
    } 
}
