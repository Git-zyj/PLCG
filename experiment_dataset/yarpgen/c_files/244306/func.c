/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244306
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
    var_13 -= ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_5)) - (11461)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_14 -= ((/* implicit */_Bool) (((((~(((((/* implicit */_Bool) -3279186129468405565LL)) ? (((/* implicit */int) var_12)) : (2016613274))))) + (2147483647))) >> (((((/* implicit */int) var_3)) - (50)))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 1; i_4 < 16; i_4 += 2) 
                            {
                                arr_15 [i_0] [(unsigned short)16] [(unsigned short)16] [i_0] [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_7))))))) ? (((((min((var_4), (var_4))) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_3] [i_0])) + (20516))))) : (((/* implicit */int) var_7))));
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */unsigned long long int) (-((~(2637760574U)))))) : (((unsigned long long int) 3321231811439343355LL))));
                            }
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_0 [(_Bool)1] [i_1]);
                var_16 |= (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_11 [i_0] [12ULL]) : (((/* implicit */int) (unsigned short)65238))))) ? (((/* implicit */int) var_9)) : (((var_8) | (((/* implicit */int) arr_14 [3] [3] [13] [i_0] [7U])))))));
                arr_17 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_5 [i_1]) : (arr_5 [i_0])))) ? (arr_1 [i_0]) : ((~(((/* implicit */int) (_Bool)0)))));
            }
        } 
    } 
    var_17 = 3321231811439343355LL;
    var_18 &= ((/* implicit */int) (-(((((/* implicit */_Bool) var_5)) ? (((0U) >> (((/* implicit */int) var_7)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)194)) >> (((var_11) - (1026414020U))))))))));
}
