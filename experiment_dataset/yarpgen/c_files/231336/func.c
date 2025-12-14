/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231336
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_1] [i_2 - 1]);
                    var_19 = ((/* implicit */_Bool) (-((~(arr_8 [i_2 - 2])))));
                    arr_10 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)67)) ? (max((156872239589426833LL), (((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)55))) : (arr_8 [i_1]))))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_0] [i_1] [(_Bool)1] [i_2])) > (((/* implicit */int) var_5)))) ? (arr_4 [i_2 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (-857014106) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (short i_4 = 2; i_4 < 12; i_4 += 1) 
        {
            {
                arr_18 [i_3] [i_4] = ((/* implicit */signed char) ((long long int) (((_Bool)0) ? (arr_0 [i_4 + 1]) : (arr_0 [i_4 + 2]))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        {
                            var_20 = ((((/* implicit */_Bool) (short)31732)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3] [i_4] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27334))) : (var_3)))) ? ((~(arr_20 [i_4] [i_4 - 1] [(_Bool)1] [i_4]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10525044705296324060ULL)) ? (((/* implicit */unsigned int) arr_2 [i_3])) : (var_12)))) ? (min((12365185477010999437ULL), (((/* implicit */unsigned long long int) arr_16 [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70))))));
                            arr_23 [i_3] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) 2303724366U);
                        }
                    } 
                } 
            }
        } 
    } 
}
