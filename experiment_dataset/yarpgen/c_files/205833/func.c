/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205833
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
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1401218539372534198LL)) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)231)) : (2097136))) >= (((/* implicit */int) arr_4 [i_0]))))) : ((~(((/* implicit */int) max(((unsigned char)20), (((/* implicit */unsigned char) (signed char)1)))))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-22)))))));
                var_22 ^= ((/* implicit */int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)19))))))) != (((max((arr_0 [1ULL] [1ULL]), (((/* implicit */int) (signed char)1)))) >> (((max((var_5), (((/* implicit */unsigned long long int) arr_4 [i_1])))) - (5873088564983482953ULL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            {
                var_23 &= max((((/* implicit */signed char) (_Bool)1)), ((signed char)4));
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 23; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        {
                            arr_17 [i_5] [i_3] [i_5] [i_5] [i_4 + 1] = ((/* implicit */int) ((unsigned char) var_17));
                            arr_18 [i_3] [i_3] [(unsigned short)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) 7U)) ? (((unsigned long long int) arr_9 [i_5] [i_4 - 2] [12LL])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((9913559066555346372ULL), (8533185007154205244ULL))))))));
                            var_24 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (arr_13 [i_2] [i_3] [i_4 - 2] [i_5]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230))) ^ (arr_13 [i_2] [i_3] [i_2] [i_5]))))) >> (((((/* implicit */int) ((unsigned char) arr_14 [i_3] [i_3]))) - (250)))));
                            arr_19 [19LL] [i_3] [(_Bool)1] [i_5] [19LL] [i_5] = ((/* implicit */long long int) (unsigned char)36);
                        }
                    } 
                } 
                arr_20 [12U] &= ((/* implicit */unsigned short) (unsigned char)20);
            }
        } 
    } 
}
